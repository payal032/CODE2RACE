
long long productAscii(string str) 
{ 
    long long prod = 1; 
  
    // Traverse string to find the product 
    for (int i = 0; i < str.length(); i++) { 
        prod *= (int)str[i]; 
    } 
  
    
    return prod; 
} 
  

int main() 
{ 
    string str = "payal"; 
  
    cout << productAscii(str); 
  
    return 0; 
} 
