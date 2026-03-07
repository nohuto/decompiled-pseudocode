__int64 __fastcall Do6251(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // edi
  int i; // r11d
  int v9; // eax
  int v10; // edx
  __int64 result; // rax
  int v12; // ecx
  signed __int64 v13; // r8
  signed __int64 v14; // r9
  __int64 v15; // rbx

  v7 = a5 >> 2;
  for ( i = a5 & 3; v7; --v7 )
  {
    *a1 = (25 * *a3 + 6 * *a2 + 16 + (unsigned int)*a4) >> 5;
    a1[1] = (25 * a3[1] + 6 * a2[1] + 16 + (unsigned int)a4[1]) >> 5;
    a1[2] = (25 * a3[2] + 6 * a2[2] + 16 + (unsigned int)a4[2]) >> 5;
    v9 = a3[3];
    a3 += 4;
    v10 = 25 * v9;
    result = a2[3];
    a2 += 4;
    v12 = a4[3] + 16;
    a4 += 4;
    a1[3] = (unsigned int)(v10 + 6 * result + v12) >> 5;
    a1 += 4;
  }
  if ( (a5 & 3) != 0 )
  {
    v13 = a3 - a2;
    v14 = a4 - a2;
    v15 = a1 - a2;
    do
    {
      result = (a2[v14] + 25 * a2[v13] + 2 * (3 * (unsigned int)*a2 + 8)) >> 5;
      (a2++)[v15] = result;
      --i;
    }
    while ( i );
  }
  return result;
}
