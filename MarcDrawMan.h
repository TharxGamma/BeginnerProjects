class Man
{


    public: 

	int ValueX;
	int ValueY;

	void SetLocation(int ValX, int ValY)
	{
		ValueX = ValX;
		ValueY = ValX;
	}

	void Refresh()
	{
		//Code to refresh 
		for (int NIndexY = 0; NIndexY < SIZEY; NIndexY++) // Loop through the amount of times defined by SIZEY
		{

			for (int NIndexX = 0; NIndexX < SIZEX; NIndexX++) // Nested loop part, will loop max amount of times which is defined by SIZEX
			{

				Canvas[NIndexX][NIndexY] = '-'; // Set '-' to each postion in the 2D array 

			}

		}
	}

	void DrawMan()
	{
		//Code to draw man
		//Properties of the man
		char chBodyStyle = '#';
		Canvas[ValueX][ValueY] = chBodyStyle; // Set the postion of the canvas at location 5 (Which is what we declared) and change it to a hashtag
		Canvas[ValueX - 1][ValueY + 1] = chBodyStyle; // Same again but this time increment and decrement the locations 
		Canvas[ValueX][ValueY + 1] = chBodyStyle;
		Canvas[ValueX + 1][ValueY + 1] = chBodyStyle;
		Canvas[ValueX][ValueY + 2] = chBodyStyle;
		Canvas[ValueX - 1][ValueY + 3] = chBodyStyle;
		Canvas[ValueX + 1][ValueY + 3] = chBodyStyle;
	}

	void PrintMyMan()
	{
		//Code to print
		for (int NIndexY = 0; NIndexY < SIZEY; NIndexY++)
		{

			for (int NIndexX = 0; NIndexX < SIZEX; NIndexX++)
			{

				std::cout << Canvas[NIndexX][NIndexY];

			}

			std::cout << std::endl;
		}
	}

    Man() {}

    Man(int ValueX, int ValueY)
    {

    }
};