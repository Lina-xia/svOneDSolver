//xia

class couple{
public:

    couple(int num){
        num_of_outlet = num;
        flow = new double[num_of_outlet];
        pressure = new double[num_of_outlet];
        // test
        for (int i = 0; i < num_of_outlet; i++){
            flow[i] = 2;
        }
    }

    ~couple(){
        delete[] flow;
        delete[] pressure;
    }
 
    // 3D --> 1D
    static double* flow;
    // 1D --> 3D
    static double* pressure;

    static int num_of_outlet;
};