#include<iostream>
//Angel David Alvarez Rodriguez carne: 3590-21-12970
using namespace std;
struct Empleado{
	int *codigo;
	string *nombre;
	string *puesto;
	int *sueldo;
	int *boni;
	float *salario;
};

int main(){
int n_empleados=0;
Empleado empleado;
cout<<"Cuantos Empleado Desea Ingresar: ";
cin>>n_empleados;	

empleado.sueldo = new  int [n_empleados];
empleado.codigo = new int[n_empleados];
empleado.nombre = new string[n_empleados];
empleado.puesto = new string[n_empleados];
empleado.boni = new int[n_empleados];
empleado.salario = new float[n_empleados];

void ingreso_datos();
{

cout<<"--------------Ingrese los datos--------------"<<endl;
string nombre;
for (int i=0;i<n_empleados;i++){
	cout<<"Codigo: ";
	cin>>empleado.codigo[i];
	cin.ignore();
	cout<<"\nNombre:";
	getline(cin,empleado.nombre[i]);
	cout<<"\nPuesto:";
	getline(cin,empleado.puesto[i]);
	cout<<"\nsueldo:";
	cin>>empleado.sueldo[i];
	
	cout<<"\nBonificacion:";
	cin>>empleado.boni[i];
	//strcpy(estudiante.nombre, nombre.c_str()); 
	empleado.salario[i] = empleado.sueldo[i] + empleado.boni[i];
	cout<<"Salario mensual: "<<empleado.salario[i];
}
}
int op;
do
{
  system("cls");
  cout<<"1. Mostrar Empleados"<<endl;
  cout<<"2. Modificar datos de empleado"<<endl;
  cout<<"3. Buscar a empleado"<<endl;
  cout<<"4. Salir"<<endl;
  cout<<"Opcion: ";
  cin>>op;
  switch(op){
  	case 1:
  		void  mostrar_datos();
		  {
  		system("cls");
  		cout<<"--------------Mostrar Los Datos--------------"<<endl;
		  for (int i=0;i<n_empleados;i++){
		  cout<<"\nCodigo: "<<empleado.codigo[i];
		  cout<<"\nEmpleado: "<<empleado.nombre[i];
		  cout<<"\nPuesto: "<<empleado.puesto[i];
		  cout<<"\nSalario: "<<empleado.sueldo[i];
		  cout<<"\nBonificacion: "<<empleado.boni[i];
		  cout<<"\nSalario mensual: "<<empleado.salario[i];
		  cout<<"\n------------------------------------"<<endl;
}
}
  		break;
  	case 2:
  		void modificar_datos();
  		{
  		system("cls");
  		int codigob;
  		cout<<"Ingrese el codigo del empleado que desea modificar"<<endl;
  		cout<<"Codigo: ";
  		cin>>codigob;
  		for(int i=0; i<n_empleados;i++){
  			if(codigob == empleado.codigo[i]){
  				cout<<"Empleado encontrado"<<endl;
  				cout<<"Codigo: ";
				  cin>>empleado.codigo[i];
				  cin.ignore();
				  cout<<"\nNombre:";
				  getline(cin,empleado.nombre[i]);
				  cout<<"\nPuesto:";
				  getline(cin,empleado.puesto[i]);
				  cout<<"\nsueldo:";
				  cin>>empleado.sueldo[i];
				  cout<<"\nBonificacion:";
				  cin>>empleado.boni[i];
				  empleado.salario[i] = empleado.sueldo[i] + empleado.boni[i];
				  cout<<"Salario mensual: "<<empleado.salario[i];
				  cout<<"\n------------------------------------"<<endl;
				  cout<<"La modificacion se realizo de forma correcta"<<endl;
				  system("PAUSE");
			  }
			  else{
			  	cout<<"Codigo no encontrado"<<endl;
			  	cout<<"El codigo que ingreso no corresponde a ningun empleado"<<endl;
			  }
		  }
	}
  		break;
  	case 3:
  		void buscar_empleado();
  		{
  			system("cls");
  			int codigoy;
			  cout<<"Ingrese el codigo del empleado que desea modificar"<<endl;
			  cout<<"Codigo: ";
			  cin>>codigoy;
			  	for(int i=0; i<n_empleados;i++){
				  if(codigoy == empleado.codigo[i]){
				  		cout<<"Empleado encntrado"<<endl;
				  		 cout<<"\nCodigo: "<<empleado.codigo[i];
						   cout<<"\nEmpleado: "<<empleado.nombre[i];
						   cout<<"\nPuesto: "<<empleado.puesto[i];
						   cout<<"\nSalario: "<<empleado.sueldo[i];
						   cout<<"\nBonificacion: "<<empleado.boni[i];
						   cout<<"\nSalario mensual: "<<empleado.salario[i];
						   cout<<"\n------------------------------------"<<endl;
						   cout<<"La busqueda se realizo de forma correcta"<<endl;
		  }
		  else{
		  	cout<<"Empleado no encontrado"<<endl;
		  	cout<<"Puede que el codigo ingresado no corresponda a ningun empleado"<<endl;
		  }
	}
}
  		break;
  	case 4:
  		system("cls");
  		delete [] empleado.boni;
		  delete[] empleado.codigo;
		  delete[] empleado.nombre;
		  delete[] empleado.puesto;
		  delete[] empleado.sueldo;
		  system("PAUSE");
		  return 0;
  		break;
  }
	

	system("Pause");
	cout<<"Presione cualquier tecla para regresar al menu"<<endl;
	
}
while(op != 4);
return 0;
}
