/*
 * XREFs of sub_18010E51C @ 0x18010E51C
 * Callers:
 *     sub_18000B700 @ 0x18000B700 (sub_18000B700.c)
 *     sub_18000B750 @ 0x18000B750 (sub_18000B750.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010E51C(__int64 a1, float a2, float a3, float a4, int a5, int a6, int a7)
{
  __int64 v7; // r8
  float *v8; // rax

  *(float *)(a1 + 4) = a2;
  v7 = 0LL;
  v8 = (float *)(a1 + 4);
  *(_DWORD *)(a1 + 12) = a6;
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a7;
  *(float *)(a1 + 8) = a4;
  *(float *)(a1 + 16) = a3;
  *(_BYTE *)a1 = 1;
  while ( v8[3] >= *v8 )
  {
    ++v7;
    ++v8;
    if ( v7 >= 3 )
      return a1;
  }
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 2139095039;
  *(_DWORD *)(a1 + 8) = 2139095039;
  *(_DWORD *)(a1 + 12) = 2139095039;
  *(_DWORD *)(a1 + 16) = -8388609;
  *(_DWORD *)(a1 + 20) = -8388609;
  *(_DWORD *)(a1 + 24) = -8388609;
  return a1;
}
