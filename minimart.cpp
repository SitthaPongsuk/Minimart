#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int choice, snacks, bread, drink, noodles, condiment, consumer;
    char choice1;
    int Lay = 0, Testo = 0, Party = 0, Jax = 0, Roller_Coaster = 0, Twisco = 0, Thai_crab = 0, Snack_Jack = 0, Conne = 0, Hanami = 0;
    int Farmhouse = 0, Euro = 0, Goldbread = 0, Lepin = 0, Malkist = 0;
    int Oishi = 0, Ichitan = 0, Pureku = 0, Yen_Yen = 0, C_Vitt = 0, Pepsi = 0, Coke = 0, Crystal = 0, Sponsor = 0, M_150 = 0;
    int Mama1 = 0, Mama2 = 0, Mama3 = 0, Quick1 = 0, Quick2 = 0, Quick3 = 0, Yum_Yum1 = 0, Yum_Yum2 = 0, Nissin1 = 0, Nissin2 = 0;
    int Fish_sauce = 0, Sugar = 0, Chilli_peppers = 0, Vinegar = 0, Rosdi = 0, Phongchuros = 0, Vegetable_oil = 0, Chili_paste = 0, Oyster_sauce = 0, Eeasoning_sauces = 0;
    int Bathroom_cleaner = 0, Dishwashing_liquid = 0, Detergent = 0, Fabric_softeners = 0, Floor_cleaners = 0, Tissue_paper = 0, Sanitary_napkins = 0, Baby_diapers = 0, Air_fresheners = 0;
    int Layprice = 0, Testoprice = 0, Partyprice = 0, Jaxprice = 0, Roller_Coasterprice = 0, Twiscoprice = 0, Thai_crabprice = 0, Snack_Jackprice = 0, Conneprice = 0, Hanamiprice = 0;
    int Farmhouseprice = 0, Europrice = 0, Goldbreadprice = 0, Lepinprice = 0, Malkistprice = 0;
    int Oishiprice = 0, Ichitanprice = 0, Purekuprice = 0, Yen_Yenprice = 0, C_Vittprice = 0, Pepsiprice = 0, Cokeprice = 0, Crystalprice = 0, Sponsorprice = 0, M_150price = 0;
    int Mama1price = 0, Mama2price = 0, Mama3price = 0, Quick1price = 0, Quick2price = 0, Quick3price = 0, Yum_Yum1price = 0, Yum_Yum2price = 0, Nissin1price = 0, Nissin2price = 0;
    int Fish_sauceprice = 0, Sugarprice = 0, Chilli_peppersprice = 0, Vinegarprice = 0, Rosdiprice = 0, Phongchurosprice = 0, Vegetable_oilprice = 0, Chili_pasteprice = 0, Oyster_sauceprice = 0, Eeasoning_saucesprice = 0;
    int Bathroom_cleanerprice = 0, Dishwashing_liquidprice = 0, Detergentprice = 0, Fabric_softenersprice = 0, Floor_cleanersprice = 0, Tissue_paperprice = 0, Sanitary_napkinsprice = 0, Baby_diapersprice = 0, Air_freshenersprice = 0;
    int total = 0, money = 0;
    do{
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "------- Minimart shop -------" << endl;
        cout << "-----------------------------" << endl;
        ifstream read("Product_type.txt"); //Open file to read
        string text; //เอาไว้เก็บตัวอักษรในไฟล์
        while (getline(read, text)) //วนลูปเก็บตัวอักษรในไฟล์
        {
            cout << text << endl;
        }
        read.close(); //Close file
        cout << "Please input Product type >> ";
        cin >> choice;
        cout << endl;

        //Snacks
        if(choice == 1){
            cout << "------- Crispy snacks -------" << endl;
            ifstream read("Crispy snacks.txt");
            string text;
            while (getline(read, text)){
            cout << text << endl;
            }
            read.close();
            cout << "Please input Crispy snacks >> ";
            cin >> snacks;

            if(snacks == 1){
                cout << "Enter amount : ";
                cin >> Lay;
            }
            else if(snacks == 2){
                cout << "Enter amount : ";
                cin >> Testo;
            }
            else if(snacks == 3){
                cout << "Enter amount : ";
                 cin >> Party;
            }
            else if(snacks == 4){
                cout << "Enter amount : ";
                cin >> Jax;
            }
            else if(snacks == 5){
                cout << "Enter amount : ";
                 cin >> Roller_Coaster;
            }
            else if(snacks == 6){
                cout << "Enter amount : ";
                cin >> Twisco;
            }
            else if(snacks == 7){
                cout << "Enter amount : ";
                cin >> Thai_crab;
            }
            else if(snacks == 8){
                cout << "Enter amount : ";
                cin >> Snack_Jack;
            }
            else if(snacks == 9){
                cout << "Enter amount : ";
                cin >> Conne;
            }
            else if(snacks == 10){
                cout << "Enter amount : ";
                cin >> Hanami;
            }
        }

        //Bread
        else if(choice == 2){
            cout << "------- Bread -------" << endl;
            ifstream read("Bread.txt");
            string text;
            while (getline(read, text)){
            cout << text << endl;
            }
            read.close();
            cout << "Please input Bread >> ";
            cin >> bread;
            if(bread == 1){
                cout << "Enter amount : ";
                cin >> Farmhouse;
            }
            else if(bread == 2){
                cout << "Enter amount : ";
                cin >> Euro;
            }
            else if(bread == 3){
                cout << "Enter amount : ";
                cin >> Goldbread;
            }
            else if(bread == 4){
                cout << "Enter amount : ";
                cin >> Lepin;
            }
            else if(bread == 5){
                cout << "Enter amount : ";
                cin >> Malkist;
            }
        }

        // Drink
        else if(choice == 3){
            cout << "------- Drink -------" << endl;
            ifstream read("Drink.txt");
            string text;
            while (getline(read, text)){
            cout << text << endl;
            }
            read.close();
            cout << "Please input Drink >> ";
            cin >> drink;
            if(drink == 1){
                cout << "Enter amount : ";
                cin >> Oishi;
            }
            else if(drink == 2){
                cout << "Enter amount : ";
                cin >> Ichitan;
            }
            else if(drink == 3){
                cout << "Enter amount : ";
                cin >> Pureku;
            }
            else if(drink == 4){
                cout << "Enter amount : ";
                cin >> Yen_Yen;
            }
            else if(drink == 5){
                cout << "Enter amount : ";
                cin >> C_Vitt;
            }
            else if(drink == 6){
                cout << "Enter amount : ";
                cin >> Pepsi;
            }
            else if(drink == 7){
                cout << "Enter amount : ";
                cin >> Coke;
            }
            else if(drink == 8){
                cout << "Enter amount : ";
                cin >> Crystal;
            }
            else if(drink == 9){
                cout << "Enter amount : ";
                cin >> Sponsor;
            }
            else if(drink == 10){
                cout << "Enter amount : ";
                cin >> M_150;
            }
        }

        // Instant noodles
        else if(choice == 4){
            cout << "------- Instant noodles -------" << endl;
            ifstream read("Instant noodles.txt");
            string text;
            while (getline(read, text)){
            cout << text << endl;
            }
            read.close();
            cout << "Please input Instant noodles >> ";
            cin >> noodles;
            if(noodles == 1){
                cout << "Enter amount : ";
                cin >> Mama1;
            }
            else if(noodles == 2){
                cout << "Enter amount : ";
                cin >> Mama2;
            }
            else if(noodles == 3){
                cout << "Enter amount : ";
                cin >> Mama3;
            }
            else if(noodles == 4){
                cout << "Enter amount : ";
                cin >> Quick1;
            }
            else if(noodles == 5){
                cout << "Enter amount : ";
                cin >> Quick2;
            }
            else if(noodles == 6){
                cout << "Enter amount : ";
                cin >> Quick3;
            }
            else if(noodles == 7){
                cout << "Enter amount : ";
                cin >> Yum_Yum1;
            }
            else if(noodles == 8){
                cout << "Enter amount : ";
                cin >> Yum_Yum2;
            }
            else if(noodles == 9){
                cout << "Enter amount : ";
                cin >> Nissin1;
            }
            else if(noodles == 10){
                cout << "Enter amount : ";
                cin >> Nissin2;
            }
        }

        // Condiment
        else if(choice == 5){
            cout << "------- Condiment -------" << endl;
            ifstream read("Condiment.txt");
            string text;
            while (getline(read, text)){
            cout << text << endl;
            }
            read.close();
            cout << "Please input Condiment >> ";
            cin >> condiment;
            if(condiment == 1){
                cout << "Enter amount : ";
                cin >> Fish_sauce;
            }
            else if(condiment == 2){
                cout << "Enter amount : ";
                cin >> Sugar;
            }
            else if(condiment == 3){
                cout << "Enter amount : ";
                cin >> Chilli_peppers;
            }
            else if(condiment == 4){
                cout << "Enter amount : ";
                cin >> Vinegar;
            }
            else if(condiment == 5){
                cout << "Enter amount : ";
                cin >> Rosdi;
            }
            else if(condiment == 6){
                cout << "Enter amount : ";
                cin >> Phongchuros;
            }
            else if(condiment == 7){
                cout << "Enter amount : ";
                cin >> Vegetable_oil;
            }
            else if(condiment == 8){
                cout << "Enter amount : ";
                cin >> Chili_paste;
            }
            else if(condiment == 9){
                cout << "Enter amount : ";
                cin >> Oyster_sauce;
            }
            else if(condiment == 10){
                cout << "Enter amount : ";
                cin >> Eeasoning_sauces;
            }
        }

        // Consumer products
        else if(choice == 6){
            cout << "------- Consumer products -------" << endl;
            ifstream read("Consumer products.txt");
            string text;
            while (getline(read, text)){
            cout << text << endl;
            }
            read.close();
            cout << "Please input Consumer products >> ";
            cin >> consumer;
            if(consumer == 1){
                cout << "Enter amount : ";
                cin >> Bathroom_cleaner;
            }
            if(consumer == 2){
                cout << "Enter amount : ";
                cin >> Dishwashing_liquid;
            }
            if(consumer == 3){
                cout << "Enter amount : ";
                cin >> Detergent;
            }
            if(consumer == 4){
                cout << "Enter amount : ";
                cin >> Fabric_softeners;
            }
            if(consumer == 5){
                cout << "Enter amount : ";
                cin >> Floor_cleaners;
            }
            if(consumer == 6){
                cout << "Enter amount : ";
                cin >> Tissue_paper;
            }
            if(consumer == 7){
                cout << "Enter amount : ";
                cin >> Sanitary_napkins;
            }
            if(consumer == 8){
                cout << "Enter amount : ";
                cin >> Baby_diapers;
            }
            if(consumer == 9){
                cout << "Enter amount : ";
                cin >> Air_fresheners;
            }
        }

        else if(choice == 7){
            if (Lay != 0 || Testo != 0 || Party != 0 || Jax != 0 || Roller_Coaster != 0 || Twisco != 0 || Thai_crab != 0 || Snack_Jack != 0 || Conne != 0 || Hanami != 0 ||
                Farmhouse != 0 || Euro != 0 || Goldbread != 0 || Lepin != 0 || Malkist != 0 ||
                Oishi != 0 || Ichitan != 0 || Pureku != 0 || Yen_Yen != 0 || C_Vitt != 0 || Pepsi != 0 || Coke != 0 || Crystal != 0 || Sponsor != 0 || M_150 != 0 ||
                Mama1 != 0 || Mama2 != 0 || Mama3 != 0 || Quick1 != 0 || Quick2 != 0 || Quick3 != 0 || Yum_Yum1 != 0 || Yum_Yum2 != 0 || Nissin1 != 0 || Nissin2 != 0 ||
                Fish_sauce != 0 || Sugar != 0 || Chilli_peppers != 0 || Vinegar != 0 || Rosdi != 0 || Phongchuros != 0 || Vegetable_oil != 0 || Chili_paste != 0 || Oyster_sauce != 0 || Eeasoning_sauces != 0){
                cout << "Product : Amount = Total price" << endl;
                ofstream writebill("bill.txt", ios::app);
                writebill << "Product : Amount = Total price" << endl;

                //Snacks
                if(Lay > 0){
                    Layprice = Lay * 10;
                    cout << "Lay" << " : " << Lay << " = " << Layprice << endl;
                    total += Layprice;
                    writebill << "Lay" << " : " << Lay << " = " << Layprice << endl;
                }
                if(Testo > 0){
                    Testoprice = Testo * 10;
                    cout << "Testo" << " : " << Testo << " = " << Testoprice << endl;
                    total += Testoprice;
                    writebill << "Testo" << " : " << Testo << " = " << Testoprice << endl;
                }
                if(Party > 0){
                    Partyprice = Party * 10;
                    cout << "Party" << " : " << Party << " = " << Partyprice << endl;
                    total += Partyprice;
                    writebill << "Party" << " : " << Party << " = " << Partyprice << endl;
                }
                if(Jax > 0){
                    Jaxprice = Jax * 10;
                    cout << "Jax" << " : " << Jax << " = " << Jaxprice << endl;
                    total += Jaxprice;
                    writebill << "Jax" << " : " << Jax << " = " << Jaxprice << endl;
                }
                if(Roller_Coaster > 0){
                    Roller_Coasterprice = Roller_Coaster * 10;
                    cout << "Roller Coaster" << " : " << Roller_Coaster << " = " << Roller_Coasterprice << endl;
                    total += Roller_Coasterprice;
                    writebill << "Roller Coaster" << " : " << Roller_Coaster << " = " << Roller_Coasterprice << endl;
                }
                if(Twisco > 0){
                    Twiscoprice = Twisco * 10;
                    cout << "Twisco" << " : " << Twisco << " = " << Twiscoprice << endl;
                    total += Twiscoprice;
                    writebill << "Twisco" << " : " << Twisco << " = " << Twiscoprice << endl;
                }
                if(Thai_crab > 0){
                    Thai_crabprice = Thai_crab * 10;
                    cout << "Thai crab" << " : " << Thai_crab << " = " << Thai_crabprice << endl;
                    total += Thai_crabprice;
                    writebill << "Thai crab" << " : " << Thai_crab << " = " << Thai_crabprice << endl;
                }
                if(Snack_Jack > 0){
                    Snack_Jackprice = Snack_Jack * 10;
                    cout << "Snack Jack" << " : " << Snack_Jack << " = " << Snack_Jackprice << endl;
                    total += Snack_Jackprice;
                    writebill << "Snack Jack" << " : " << Snack_Jack << " = " << Snack_Jackprice << endl;
                }
                if(Conne > 0){
                    Conneprice = Conne * 10;
                    cout << "Conne" << " : " << Conne << " = " << Conneprice << endl;
                    total += Conneprice;
                    writebill << "Conne" << " : " << Conne << " = " << Conneprice << endl;
                }
                if(Hanami > 0){
                    Hanamiprice = Hanami * 10;
                    cout << "Hanami" << " : " << Hanami << " = " << Hanamiprice << endl;
                    total += Hanamiprice;
                    writebill << "Hanami" << " : " << Hanami << " = " << Hanamiprice << endl;
                }

                //Bread
                if(Farmhouse > 0){
                    Farmhouseprice = Farmhouse * 12;
                    cout << "Farmhouse" << " : " << Farmhouse << " = " << Farmhouseprice << endl;
                    total += Farmhouseprice;
                    writebill << "Farmhouse" << " : " << Farmhouse << " = " << Farmhouseprice << endl;
                }
                if(Euro > 0){
                    Europrice = Euro * 10;
                    cout << "Euro" << " : " << Euro << " = " << Europrice << endl;
                    total += Europrice;
                    writebill << "Euro" << " : " << Euro << " = " << Europrice << endl;
                }
                if(Goldbread > 0){
                    Goldbreadprice = Goldbread * 15;
                    cout << "Goldbread" << " : " << Goldbread << " = " << Goldbreadprice << endl;
                    total += Goldbreadprice;
                    writebill << "Goldbread" << " : " << Goldbread << " = " << Goldbreadprice << endl;
                }
                if(Lepin > 0){
                    Lepinprice = Lepin * 10;
                    cout << "Lepin" << " : " << Lepin << " = " << Lepinprice << endl;
                    total += Lepinprice;
                    writebill << "Lepin" << " : " << Lepin << " = " << Lepinprice << endl;
                }
                if(Malkist > 0){
                    Malkistprice = Malkist * 5;
                    cout << "Malkist" << " : " << Malkist << " = " << Malkistprice << endl;
                    total += Malkistprice;
                    writebill << "Malkist" << " : " << Malkist << " = " << Malkistprice << endl;
                }

                //Drink
                if(Oishi > 0){
                    Oishiprice = Oishi * 15;
                    cout << "Oishi" << " : " << Oishi << " = " << Oishiprice << endl;
                    total += Oishiprice;
                    writebill << "Oishi" << " : " << Oishi << " = " << Oishiprice << endl;
                }
                if(Ichitan > 0){
                    Ichitanprice = Ichitan * 15;
                    cout << "Ichitan" << " : " << Ichitan << " = " << Ichitanprice << endl;
                    total += Ichitanprice;
                    writebill << "Ichitan" << " : " << Ichitan << " = " << Ichitanprice << endl;
                }
                if(Pureku > 0){
                    Purekuprice = Pureku * 12;
                    cout << "Pureku" << " : " << Pureku << " = " << Purekuprice << endl;
                    total += Purekuprice;
                    writebill << "Pureku" << " : " << Pureku << " = " << Purekuprice << endl;
                }
                if(Yen_Yen > 0){
                    Yen_Yenprice = Yen_Yen * 10;
                    cout << "Yen_Yen" << " : " << Yen_Yen << " = " << Yen_Yenprice << endl;
                    total += Yen_Yenprice;
                    writebill << "Yen_Yen" << " : " << Yen_Yen << " = " << Yen_Yenprice << endl;
                }
                if(C_Vitt > 0){
                    C_Vittprice = C_Vitt * 15;
                    cout << "C-Vitt" << " : " << C_Vitt << " = " << C_Vittprice << endl;
                    total += C_Vittprice;
                    writebill << "C-Vitt" << " : " << C_Vitt << " = " << C_Vittprice << endl;
                }
                if(Pepsi > 0){
                    Pepsiprice = Pepsi * 20;
                    cout << "Pepsi" << " : " << Pepsi << " = " << Pepsiprice << endl;
                    total += Pepsiprice;
                    writebill << "Pepsi" << " : " << Pepsi << " = " << Pepsiprice << endl;
                }
                if(Coke > 0){
                    Cokeprice = Coke * 20;
                    cout << "Coke" << " : " << Coke << " = " << Cokeprice << endl;
                    total += Cokeprice;
                    writebill << "Coke" << " : " << Coke << " = " << Cokeprice << endl;
                }
                if(Crystal > 0){
                    Crystalprice = Crystal * 8;
                    cout << "Crystal" << " : " << Crystal << " = " << Crystalprice << endl;
                    total += Crystalprice;
                    writebill << "Crystal" << " : " << Crystal << " = " << Crystalprice << endl;
                }
                if(Sponsor > 0){
                    Sponsorprice = Sponsor * 12;
                    cout << "Sponsor" << " : " << Sponsor << " = " << Sponsorprice << endl;
                    total += Sponsorprice;
                    writebill << "Sponsor" << " : " << Sponsor << " = " << Sponsorprice << endl;
                }
                if(M_150 > 0){
                    M_150price = M_150 * 12;
                    cout << "M-150" << " : " << M_150 << " = " << M_150price << endl;
                    total += M_150price;
                    writebill << "M-150" << " : " << M_150 << " = " << M_150price << endl;
                }

                //Instant noodles
                if(Mama1 > 0){
                    Mama1price = Mama1 * 8;
                    cout << "Mama Tom Yum Shrimp Creamy Flavor" << " : " << Mama1 << " = " << Mama1price << endl;
                    total += Mama1price;
                    writebill << "Mama Tom Yum Shrimp Creamy Flavor" << " : " << Mama1 << " = " << Mama1price << endl;
                }
                if(Mama2 > 0){
                    Mama2price = Mama2 * 8;
                    cout << "Mama minced pork flavor" << " : " << Mama2 << " = " << Mama2price << endl;
                    total += Mama2price;
                    writebill << "Mama minced pork flavor" << " : " << Mama2 << " = " << Mama2price << endl;
                }
                if(Mama3 > 0){
                    Mama3price = Mama3 * 8;
                    cout << "Mama Yentafo Tom Yum Hot Pot Flavor" << " : " << Mama3 << " = " << Mama3price << endl;
                    total += Mama3price;
                    writebill << "Mama Yentafo Tom Yum Hot Pot Flavor" << " : " << Mama3 << " = " << Mama3price << endl;
                }
                if(Quick1 > 0){
                    Quick1price = Quick1 * 8;
                    cout << "Quick Tom Klong flavor" << " : " << Quick1 << " = " << Quick1price << endl;
                    total += Quick1price;
                    writebill << "Quick Tom Klong flavor" << " : " << Quick1 << " = " << Quick1price << endl;
                }
                if(Quick2 > 0){
                    Quick2price = Quick2 * 8;
                    cout << "Quick Lemon Steamed Shrimp Flavor" << " : " << Quick2 << " = " << Quick2price << endl;
                    total += Quick2price;
                    writebill << "Quick Lemon Steamed Shrimp Flavor" << " : " << Quick2 << " = " << Quick2price << endl;
                }
                if(Quick3 > 0){
                    Quick3price = Quick3 * 8;
                    cout << "Quick Tom Yum Kung Oil Flavor" << " : " << Quick3 << " = " << Quick3price << endl;
                    total += Quick3price;
                    writebill << "Quick Tom Yum Kung Oil Flavor" << " : " << Quick3 << " = " << Quick3price << endl;
                }
                if(Yum_Yum1 > 0){
                    Yum_Yum1price = Yum_Yum1 * 8;
                    cout << "Yum Yum Seafood Tom Yum Hot Pot Flavor" << " : " << Yum_Yum1 << " = " << Yum_Yum1price << endl;
                    total += Yum_Yum1price;
                    writebill << "Yum Yum Seafood Tom Yum Hot Pot Flavor" << " : " << Yum_Yum1 << " = " << Yum_Yum1price << endl;
                }
                if(Yum_Yum2 > 0){
                    Yum_Yum2price = Yum_Yum2 * 8;
                    cout << "Yum Yum Suki Flavor" << " : " << Yum_Yum2 << " = " << Yum_Yum2price << endl;
                    total += Yum_Yum2price;
                    writebill << "Yum Yum Suki Flavor" << " : " << Yum_Yum2 << " = " << Yum_Yum2price << endl;
                }
                if(Nissin1 > 0){
                    Nissin1price = Nissin1 * 8;
                    cout << "Nissin Tonkotsu Ramen Flavor" << " : " << Nissin1 << " = " << Nissin1price << endl;
                    total += Nissin1price;
                    writebill << "Nissin Tonkotsu Ramen Flavor" << " : " << Nissin1 << " = " << Nissin1price << endl;
                }
                if(Nissin2 > 0){
                    Nissin2price = Nissin2 * 8;
                    cout << "Nissin thick seafood soup flavor" << " : " << Nissin2 << " = " << Nissin2price << endl;
                    total += Nissin2price;
                    writebill << "Nissin thick seafood soup flavor" << " : " << Nissin2 << " = " << Nissin2price << endl;
                }

                //Condiment
                if(Fish_sauce > 0){
                    Fish_sauceprice = Fish_sauce * 32;
                    cout << "Fish sauce" << " : " << Fish_sauce << " = " << Fish_sauceprice << endl;
                    total += Fish_sauceprice;
                    writebill << "Fish sauce" << " : " << Fish_sauce << " = " << Fish_sauceprice << endl;
                }
                if(Sugar > 0){
                    Sugarprice = Sugar * 28;
                    cout << "Sugar" << " : " << Sugar << " = " << Sugarprice << endl;
                    total += Sugarprice;
                    writebill << "Sugar" << " : " << Sugar << " = " << Sugarprice << endl;
                }
                if(Chilli_peppers > 0){
                    Chilli_peppersprice = Sugar * 15;
                    cout << "Chilli peppers" << " : " << Chilli_peppers << " = " << Chilli_peppersprice << endl;
                    total += Chilli_peppersprice;
                    writebill << "Chilli peppers" << " : " << Chilli_peppers << " = " << Chilli_peppersprice << endl;
                }
                if(Vinegar > 0){
                    Vinegarprice = Vinegar * 13;
                    cout << "Vinegar" << " : " << Vinegar << " = " << Vinegarprice << endl;
                    total += Vinegarprice;
                    writebill << "Vinegar" << " : " << Vinegar << " = " << Vinegarprice << endl;
                }
                if(Rosdi > 0){
                    Rosdiprice = Rosdi * 27;
                    cout << "Rosdi" << " : " << Rosdi << " = " << Rosdiprice << endl;
                    total += Rosdiprice;
                    writebill << "Rosdi" << " : " << Rosdi << " = " << Rosdiprice << endl;
                }
                if(Phongchuros > 0){
                    Phongchurosprice = Phongchuros * 31;
                    cout << "Phongchuros" << " : " << Phongchuros << " = " << Phongchurosprice << endl;
                    total += Phongchurosprice;
                    writebill << "Phongchuros" << " : " << Phongchuros << " = " << Phongchurosprice << endl;
                }
                if(Vegetable_oil > 0){
                    Vegetable_oilprice = Vegetable_oil * 50;
                    cout << "Vegetable oil" << " : " << Vegetable_oil << " = " << Vegetable_oilprice << endl;
                    total += Vegetable_oilprice;
                    writebill << "Vegetable oil" << " : " << Vegetable_oil << " = " << Vegetable_oilprice << endl;
                }
                if(Chili_paste > 0){
                    Chili_pasteprice = Chili_paste * 35;
                    cout << "Chili paste" << " : " << Chili_paste << " = " << Chili_pasteprice << endl;
                    total += Chili_pasteprice;
                    writebill << "Chili paste" << " : " << Chili_paste << " = " << Chili_pasteprice << endl;
                }
                if(Oyster_sauce > 0){
                    Oyster_sauceprice = Oyster_sauce * 55;
                    cout << "Oyster sauce" << " : " << Oyster_sauce << " = " << Oyster_sauceprice << endl;
                    total += Oyster_sauceprice;
                    writebill << "Oyster sauce" << " : " << Oyster_sauce << " = " << Oyster_sauceprice << endl;
                }
                if(Eeasoning_sauces > 0){
                    Eeasoning_saucesprice = Eeasoning_sauces * 60;
                    cout << "Eeasoning sauces" << " : " << Eeasoning_sauces << " = " << Eeasoning_saucesprice << endl;
                    total += Eeasoning_saucesprice;
                    writebill << "Eeasoning sauces" << " : " << Eeasoning_sauces << " = " << Eeasoning_saucesprice << endl;
                }

                //Consumer products
                if(Bathroom_cleaner > 0){
                    Bathroom_cleanerprice = Bathroom_cleaner * 44;
                    cout << "Bathroom cleaner" << " : " << Bathroom_cleaner << " = " << Bathroom_cleanerprice << endl;
                    total += Bathroom_cleanerprice;
                    writebill << "Bathroom cleaner" << " : " << Bathroom_cleaner << " = " << Bathroom_cleanerprice << endl;
                }
                if(Dishwashing_liquid > 0){
                    Dishwashing_liquidprice = Dishwashing_liquid * 38;
                    cout << "Dishwashing liquid" << " : " << Dishwashing_liquid << " = " << Dishwashing_liquidprice << endl;
                    total += Dishwashing_liquidprice;
                    writebill << "Dishwashing liquid" << " : " << Dishwashing_liquid << " = " << Dishwashing_liquidprice << endl;
                }
                if(Detergent > 0){
                    Detergentprice = Detergent * 40;
                    cout << "Detergent" << " : " << Detergent << " = " << Detergentprice << endl;
                    total += Detergentprice;
                    writebill << "Detergent" << " : " << Detergent << " = " << Detergentprice << endl;
                }
                if(Fabric_softeners > 0){
                    Fabric_softenersprice = Fabric_softeners * 65;
                    cout << "Fabric softeners" << " : " << Fabric_softeners << " = " << Fabric_softenersprice << endl;
                    total += Fabric_softenersprice;
                    writebill << "Fabric softeners" << " : " << Fabric_softeners << " = " << Fabric_softenersprice << endl;
                }
                if(Floor_cleaners > 0){
                    Floor_cleanersprice = Floor_cleaners * 55;
                    cout << "Floor cleaners" << " : " << Floor_cleaners << " = " << Floor_cleanersprice << endl;
                    total += Floor_cleanersprice;
                    writebill << "Floor cleaners" << " : " << Floor_cleaners << " = " << Floor_cleanersprice << endl;
                }
                if(Tissue_paper > 0){
                    Tissue_paperprice = Tissue_paper * 25;
                    cout << "Tissue paper" << " : " << Tissue_paper << " = " << Tissue_paperprice << endl;
                    total += Tissue_paperprice;
                    writebill << "Tissue paper" << " : " << Tissue_paper << " = " << Tissue_paperprice << endl;
                }
                if(Sanitary_napkins > 0){
                    Sanitary_napkinsprice = Sanitary_napkins * 30;
                    cout << "Sanitary napkins" << " : " << Sanitary_napkins << " = " << Sanitary_napkinsprice << endl;
                    total += Sanitary_napkinsprice;
                    writebill << "Sanitary napkins" << " : " << Sanitary_napkins << " = " << Sanitary_napkinsprice << endl;
                }
                if(Baby_diapers > 0){
                    Baby_diapersprice = Baby_diapers * 65;
                    cout << "Baby diapers" << " : " << Baby_diapers << " = " << Baby_diapersprice << endl;
                    total += Baby_diapersprice;
                    writebill << "Baby diapers" << " : " << Baby_diapers << " = " << Baby_diapersprice << endl;
                }
                if(Air_fresheners > 0){
                    Air_freshenersprice = Air_fresheners * 98;
                    cout << "Air fresheners" << " : " << Air_fresheners << " = " << Air_freshenersprice << endl;
                    total += Air_freshenersprice;
                    writebill << "Air fresheners" << " : " << Air_fresheners << " = " << Air_freshenersprice << endl;
                }

                //Total price
                cout << "Will you pay immediately or not? (Y/N) >> ";
                cin >> choice1;
                if(choice1 == 'Y'){
                    cout << "\nTotal Price : " << total << endl;
                    writebill << "Total Price : " << total << endl; //Record the total price in a file.
                    cout << "Enter Money >> ";
                    cin >> money;
                    if (money < total)
                    {
                        do{
                            cout << "Enter Money : ";
                            cin >> money;
                        } while (money < total);
                        //Reset products in cart
                        Lay = 0, Testo = 0, Party = 0, Jax = 0, Roller_Coaster = 0, Twisco = 0, Thai_crab = 0, Snack_Jack = 0, Conne = 0, Hanami = 0;
                        Farmhouse = 0, Euro = 0, Goldbread = 0, Lepin = 0, Malkist = 0;
                        Oishi = 0, Ichitan = 0, Pureku = 0, Yen_Yen = 0, C_Vitt = 0, Pepsi = 0, Coke = 0, Crystal = 0, Sponsor = 0, M_150 = 0;
                        Mama1 = 0, Mama2 = 0, Mama3 = 0, Quick1 = 0, Quick2 = 0, Quick3 = 0, Yum_Yum1 = 0, Yum_Yum2 = 0, Nissin1 = 0, Nissin2 = 0;
                        Fish_sauce = 0, Sugar = 0, Chilli_peppers = 0, Vinegar = 0, Rosdi = 0, Phongchuros = 0, Vegetable_oil = 0, Chili_paste = 0, Oyster_sauce = 0, Eeasoning_sauces = 0;
                        Bathroom_cleaner = 0, Dishwashing_liquid = 0, Detergent = 0, Fabric_softeners = 0, Floor_cleaners = 0, Tissue_paper = 0, Sanitary_napkins = 0, Baby_diapers = 0, Air_fresheners = 0;
                        Layprice = 0, Testoprice = 0, Partyprice = 0, Jaxprice = 0, Roller_Coasterprice = 0, Twiscoprice = 0, Thai_crabprice = 0, Snack_Jackprice = 0, Conneprice = 0, Hanamiprice = 0;
                        Farmhouseprice = 0, Europrice = 0, Goldbreadprice = 0, Lepinprice = 0, Malkistprice = 0;
                        Oishiprice = 0, Ichitanprice = 0, Purekuprice = 0, Yen_Yenprice = 0, C_Vittprice = 0, Pepsiprice = 0, Cokeprice = 0, Crystalprice = 0, Sponsorprice = 0, M_150price = 0;
                        Mama1price = 0, Mama2price = 0, Mama3price = 0, Quick1price = 0, Quick2price = 0, Quick3price = 0, Yum_Yum1price = 0, Yum_Yum2price = 0, Nissin1price = 0, Nissin2price = 0;
                        Fish_sauceprice = 0, Sugarprice = 0, Chilli_peppersprice = 0, Vinegarprice = 0, Rosdiprice = 0, Phongchurosprice = 0, Vegetable_oilprice = 0, Chili_pasteprice = 0, Oyster_sauceprice = 0, Eeasoning_saucesprice = 0;
                        Bathroom_cleanerprice = 0, Dishwashing_liquidprice = 0, Detergentprice = 0, Fabric_softenersprice = 0, Floor_cleanersprice = 0, Tissue_paperprice = 0, Sanitary_napkinsprice = 0, Baby_diapersprice = 0, Air_freshenersprice = 0;
                        total = 0;
                        writebill << "-----------------------------" << endl;
                        writebill.close();//Close file
                    }
                }
                else{
                    
                }   
            }
            else
            {
                system("cls");
                cout << "cart empty\n";
                cin.ignore();
                cin.get();
            }
        }
    } while (choice != 0);
    {
        cout << "...Exit program..." << endl;
    }
}