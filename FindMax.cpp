    #include <iostream>
    #include <climits>
     
    int main()
    {
    	long long int input, max = INT_MIN, n;
    	std::cin >> n;
    	while(n-- > 0)
    	{
    		std::cin >> input;
    		if(input > max)
    			max = input;
    	}
    	std::cout << max; 
    }
