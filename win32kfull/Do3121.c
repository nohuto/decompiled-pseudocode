/*
 * XREFs of Do3121 @ 0x1C0261368
 * Callers:
 *     FastExpAA_CY @ 0x1C0263760 (FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Do3121(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // edi
  int i; // r11d
  int v9; // ecx
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  signed __int64 v13; // r8
  signed __int64 v14; // r9
  __int64 v15; // rbx

  v7 = a5 >> 2;
  for ( i = a5 & 3; v7; --v7 )
  {
    *a1 = (3 * (*a2 + 4 * *a3) + 8 + (unsigned int)*a4) >> 4;
    a1[1] = (3 * (a2[1] + 4 * a3[1]) + 8 + (unsigned int)a4[1]) >> 4;
    a1[2] = (3 * (a2[2] + 4 * a3[2]) + 8 + (unsigned int)a4[2]) >> 4;
    v9 = a3[3];
    a3 += 4;
    result = a2[3];
    a2 += 4;
    v11 = 3 * (result + 4 * v9);
    v12 = a4[3] + 8;
    a4 += 4;
    a1[3] = (unsigned int)(v11 + v12) >> 4;
    a1 += 4;
  }
  if ( (a5 & 3) != 0 )
  {
    v13 = a3 - a2;
    v14 = a4 - a2;
    v15 = a1 - a2;
    do
    {
      result = *a2;
      a2[v15] = (3 * ((_DWORD)result + 4 * a2[v13]) + (unsigned int)a2[v14] + 8) >> 4;
      ++a2;
      --i;
    }
    while ( i );
  }
  return result;
}
