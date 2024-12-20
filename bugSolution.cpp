std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { //Corrected: Loop condition is changed to prevent out of bounds access
    std::cout << vec[i] << " ";
}

std::map<std::string, int> map;
map["key1"] = 10;
map["key2"] = 20;
int value = map.count("key3") ? map["key3"] : -1; //Corrected: Check if key exists before accessing.  Return -1 if not found
//Alternative safer way
//auto it = map.find("key3");
//if(it != map.end()){
//   value = it->second; 
//} else { 
//  value = -1; 
//}