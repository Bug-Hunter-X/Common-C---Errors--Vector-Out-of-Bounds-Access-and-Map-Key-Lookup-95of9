std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) { //Error: Accessing vec[vec.size()] is out of bounds
    std::cout << vec[i] << " ";
}

std::map<std::string, int> map;
map["key1"] = 10;
map["key2"] = 20;
int value = map["key3"]; //Error: Accessing a non-existent key will not throw an exception, but return a default-constructed value (0 for int).