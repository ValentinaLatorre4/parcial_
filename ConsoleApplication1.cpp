#include <iostream>
#include <string>
using namespace std;

int main() {
	int Ciudad = 0;
	int Sector_ciudad = 0;
	int Seleccion_medicamento = 0;
	int Unidades_a_llevar = 0;
	string Nombre_producto[] = { "\tproducto 0","\tAcetaminofén","\tIbuprofeno","\tParacetamol","\tOmeprazol","\tMetformina","\tAmoxicilina","\tDiclofenaco","\tLoratadina,\tPantoprazol","\tClonazepam" };
	string Laboratorio[] = { "\tproducto 0","\tRaffo ","\tlab pollito","\tproducto 3","\tproducto 4","\tproducto 5","\tproducto 6","\tproducto 7","\tproducto 8","\tproducto 9","\tproducto 10" };
	string Proveedor[] = { "\tN/N","\t10","\t11","\t12","\t13","\t14","\t15","\t16","\t17","\t18","\t19","\t20","\t21" };
	string Presentacion[] = { "\tN/N","\t10","\t11","\t12","\t13","\t14","\t15","\t16","\t17","\t18","\t19","\t20","\t21" };
	int Cantidad[] = { 0,20,20,20,20,20,20,20,20,20,20 };
	int Precio[] = { 0,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000 };
	int Codigo_producto[] = { 0,100,200,300,400,500,600,700,800,900,1000 };

	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;
	cout << "\nBienvenidos a la farmacia sana que sana colita de rana\n" << endl;
	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;

	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --- -- --" << endl;
	cout << "\nLe atiende el farmaceutico Angel Contreras.\n" << endl;
	cout << "\n¿En que ciudad está? (INGRESE UNA OPCION DEPENDIENDO LA CIUDAD EN LA QUE SE ENCUENTRE)\n" << endl;
	cout << "\n1 Bogotá, 2 Medellín, 3 Barranquilla\n" << endl;
	cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --- -- --" << endl;
	cin >> Ciudad;

	switch (Ciudad)
	{
	case 1:
		cout << "Usted esta en la ciudad de Bogotá" << endl;
		cout << "Porfavor ingrese el sector de la ciudad en la que se encuentra: " << endl;
		cout << "1: Sur 2: Norte." << endl;
		cin >> Sector_ciudad;
		break;

	default:
		break;
	}

	switch (Sector_ciudad)
	{
	case 1:
		cout << "Usted esta en la sede sur" << endl;
		cout << "---Seleccione el medicamento que desea llevar.---" << endl;
		for (int i = 1; i < 11; i++)
		{
			cout << Codigo_producto[i] << Nombre_producto[i] << Presentacion[i] << Cantidad[i] << Precio[i] << endl;
		}

	
		break;

	case 2:
		cout << "Usted esta en la sede norte" << endl;
		cout << "---Seleccione el medicamento que desea llevar.---" << endl;
		for (int i = 1; i < 11; i++)
		{
			cout << Codigo_producto[i] << Nombre_producto[i] << Presentacion[i] << Cantidad[i] << Precio[i] << endl;
		}
		break;

	default:
		break;
	}

	switch (Seleccion_medicamento)
	{
	case 1:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 2:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 3:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 4:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 5:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 6:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 7:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 8:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 9:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 10:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 11:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 12:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 13:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 14:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 15:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 16:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 17:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 18:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 19:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	case 20:
		cout << "Indique cuantas unidades desea llevar: " << endl;
		cin >> Unidades_a_llevar;
	break;

	default:
		cout << "Limite exedido de items por cliente. " << endl;
	break;
	}
}