    #include <iostream>
     
    int main()
    {
    	int num;
    	std::cin >> num;
    	int i = 1;
    	bool secondHalf = false;
    	while(i > 0)
    	{
    		for(int j = 1; j <= (num - i)*2; ++j)
    			std::cout << " ";
    		for(int j = 1; j <= 2*i - 1; ++j)
    			std::cout << "* ";
    		std::cout << std::endl;
    		if(i == num)
    			secondHalf = true;
    		if(secondHalf)
    			--i;
    		else
    			++i;
    	}
    }
