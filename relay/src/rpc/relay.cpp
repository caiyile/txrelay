#include <rpc/server.h>
#include <utilstrencodings.h>
#include <rpc/register.h>

json downloadnote(const JSONRPCRequest& request)
{
	if (request.fHelp || request.params.size() != 1) {
		throw std::runtime_error(
				"\nArguments:\n"
				"1. \"file name\" (string)  The name of file from downloading success\n"
				);
	}

	std::string file_name = request.params[0].get<std::string>();

	json json_result;
	json_result["name"] = file_name;
    json_result["status"] = true;

    return json_result;
}






static const CRPCCommand commands[] =
{ //  category              name                      actor (function)         argNames
    //  --------------------- ------------------------  -----------------------  ----------
    { "relay",            "downloadnote",           &downloadnote,           {} },
};


void RegisterRelayRPCCommands(CRPCTable &t)
{
    for (unsigned int vcidx = 0; vcidx < ARRAYLEN(commands); vcidx++)
        t.appendCommand(commands[vcidx].name, &commands[vcidx]);
}
