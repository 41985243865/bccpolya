	
int main(void) 
{
	double valor;
	scanf("%lf", &valor);
	
	Result = raizq(valor);
	
	printf("%.2f\n", valor);
}

double raizq(double valor)
{
	double n1, n2;
	
	n1 = (valor + 1.0)/2.0;
	
	while(n2 != n1)
	{
		n2 = (n1 + (valor/n1))/2.0;
		n1 = (n2 + (valor/n2))/2.0;
	}
	
	return n1;
}
