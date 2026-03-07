void __fastcall vRop2Function2(unsigned int *a1, char *a2, char *a3, int a4)
{
  signed __int64 v5; // rdx
  int v6; // eax
  int v7; // ecx

  if ( a4 )
  {
    v5 = a2 - a3;
    do
    {
      v6 = *(_DWORD *)a3;
      ++a1;
      v7 = *(_DWORD *)&a3[v5];
      a3 += 4;
      *(a1 - 1) = ~v6 & v7;
      --a4;
    }
    while ( a4 );
  }
}
