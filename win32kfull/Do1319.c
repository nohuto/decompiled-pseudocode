__int64 __fastcall Do1319(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v5; // ebx
  int i; // r9d
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int64 result; // rax
  signed __int64 v12; // r8
  __int64 v13; // r11

  v5 = a4 >> 2;
  for ( i = a4 & 3; v5; --v5 )
  {
    *a1 = (13 * *a2 + 16 + 19 * (unsigned int)*a3) >> 5;
    a1[1] = (13 * a2[1] + 16 + 19 * (unsigned int)a3[1]) >> 5;
    a1[2] = (13 * a2[2] + 16 + 19 * (unsigned int)a3[2]) >> 5;
    v8 = a2[3];
    a2 += 4;
    v9 = 13 * v8;
    v10 = a3[3];
    a3 += 4;
    result = (unsigned int)(v9 + 19 * v10 + 16) >> 5;
    a1[3] = result;
    a1 += 4;
  }
  if ( i )
  {
    v12 = a3 - a2;
    v13 = a1 - a2;
    do
    {
      result = (19 * a2[v12] + 13 * (unsigned int)*a2 + 16) >> 5;
      (a2++)[v13] = result;
      --i;
    }
    while ( i );
  }
  return result;
}
