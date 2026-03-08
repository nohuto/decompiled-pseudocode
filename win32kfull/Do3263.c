/*
 * XREFs of Do3263 @ 0x1C0261470
 * Callers:
 *     FastExpAA_CY @ 0x1C0263760 (FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Do3263(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // esi
  int i; // r11d
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  __int64 result; // rax
  signed __int64 v14; // rbx
  signed __int64 v15; // r9
  __int64 v16; // rdi

  v7 = a5 >> 2;
  for ( i = a5 & 3; v7; --v7 )
  {
    *a1 = (*a2 + 16 + *a4 + 2 * (*a2 + *a4 + 13 * (unsigned int)*a3)) >> 5;
    a1[1] = (a2[1] + 16 + a4[1] + 2 * (a2[1] + a4[1] + 13 * (unsigned int)a3[1])) >> 5;
    a1[2] = (a2[2] + 16 + a4[2] + 2 * (a2[2] + a4[2] + 13 * (unsigned int)a3[2])) >> 5;
    v10 = a4[3];
    a4 += 4;
    v11 = a2[3];
    a2 += 4;
    v12 = a3[3];
    a3 += 4;
    result = (unsigned int)(v11 + v10 + 2 * (v11 + v10 + 13 * v12 + 8)) >> 5;
    a1[3] = result;
    a1 += 4;
  }
  if ( (a5 & 3) != 0 )
  {
    v14 = a3 - a2;
    v15 = a4 - a2;
    v16 = a1 - a2;
    do
    {
      result = (*a2 + a2[v15] + 2 * (*a2 + a2[v15] + 13 * (unsigned int)a2[v14] + 8)) >> 5;
      (a2++)[v16] = result;
      --i;
    }
    while ( i );
  }
  return result;
}
