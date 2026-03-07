__int64 __fastcall Do35(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v5; // edi
  int i; // r9d
  int v9; // edx
  int v10; // ecx
  __int64 result; // rax
  signed __int64 v12; // r11
  __int64 v13; // rbx
  int v14; // edx
  int v15; // ecx

  v5 = a4 >> 2;
  for ( i = a4 & 3; v5; --v5 )
  {
    *a1 = (*a3 + *a2 + 2 * (*a2 + 2 * ((unsigned int)*a3 + 1))) >> 3;
    a1[1] = (a3[1] + a2[1] + 2 * (a2[1] + 2 * ((unsigned int)a3[1] + 1))) >> 3;
    a1[2] = (a3[2] + a2[2] + 2 * (a2[2] + 2 * ((unsigned int)a3[2] + 1))) >> 3;
    v9 = a3[3];
    a3 += 4;
    v10 = a2[3];
    a2 += 4;
    result = (unsigned int)(v10 + 2 * (v9 + 1));
    a1[3] = (unsigned int)(v9 + v10 + 2 * result) >> 3;
    a1 += 4;
  }
  if ( i )
  {
    v12 = a3 - a2;
    v13 = a1 - a2;
    do
    {
      v14 = a2[v12];
      v15 = *a2;
      result = (unsigned int)(v15 + 2 * (v14 + 1));
      (a2++)[v13] = (unsigned int)(v14 + v15 + 2 * result) >> 3;
      --i;
    }
    while ( i );
  }
  return result;
}
