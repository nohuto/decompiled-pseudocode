__int64 __fastcall Do1141(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // edi
  int i; // r11d
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax
  signed __int64 v13; // r8
  signed __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // ecx

  v7 = a5 >> 2;
  for ( i = a5 & 3; v7; --v7 )
  {
    *a1 = (*a4 + 8 + *a2 + 14 * *a3) >> 4;
    a1[1] = (a4[1] + a2[1] - 2 * a3[1] + 16 * a3[1] + 8) >> 4;
    a1[2] = (a4[2] + a2[2] - 2 * a3[2] + 16 * a3[2] + 8) >> 4;
    v9 = a3[3];
    a3 += 4;
    v10 = a2[3];
    a2 += 4;
    v11 = a4[3] + v10 - 2 * v9;
    a4 += 4;
    result = (unsigned int)((v11 + 16 * v9 + 8) >> 4);
    a1[3] = result;
    a1 += 4;
  }
  if ( (a5 & 3) != 0 )
  {
    v13 = a3 - a2;
    v14 = a4 - a2;
    v15 = a1 - a2;
    do
    {
      v16 = a2[v13];
      result = (unsigned int)(2 * v16);
      a2[v15] = (16 * v16 + a2[v14] - (int)result + *a2 + 8) >> 4;
      ++a2;
      --i;
    }
    while ( i );
  }
  return result;
}
