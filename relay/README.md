# BUILD
sudo apt-get install libevent-dev libboost-dev libcurl4-openssl-dev libgoogle-glog-dev  
sudo apt-get install mysql-server mysql-client libmysqlclient-dev  

mkdir bin && cd bin  
cmake ../ && make  

# RUN
To be security, Calling rpc node(info) is fixed in code. So node must be local.  
./relayd  

# API
## downloadnote(nginx callback)  

## example  
curl --data-binary '{"id":1000, "method": "downloadnote", "params": ["txhex.json"] }' -H 'content-type:text/plain;' http://127.0.0.1:6666

## result  
{"error":null,"id":1000,"result":{"name":"txhex.json","status":true}}




