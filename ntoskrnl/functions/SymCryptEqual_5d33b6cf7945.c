bool __fastcall SymCryptEqual(char *a1, char *a2, unsigned __int64 a3)
{
  int v3; // r10d
  unsigned __int64 v5; // r11
  int v6; // ecx
  unsigned __int8 v7; // r11
  __int64 v8; // rdx
  char v9; // cl
  char v10; // al

  v3 = 0;
  if ( a3 >= 4 )
  {
    v5 = a3 >> 2;
    a3 += -4LL * (a3 >> 2);
    do
    {
      v6 = *(_DWORD *)a2;
      a2 += 4;
      v3 |= *(_DWORD *)a1 ^ v6;
      a1 += 4;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 )
  {
    v7 = 0;
    v8 = a2 - a1;
    do
    {
      v9 = a1[v8];
      v10 = *a1++;
      v7 |= v10 ^ v9;
      --a3;
    }
    while ( a3 );
    v3 |= v7;
  }
  return v3 == 0;
}
