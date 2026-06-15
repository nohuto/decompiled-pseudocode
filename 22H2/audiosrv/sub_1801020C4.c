/*
 * XREFs of sub_1801020C4 @ 0x1801020C4
 * Callers:
 *     sub_180100568 @ 0x180100568 (sub_180100568.c)
 *     sub_1801005A0 @ 0x1801005A0 (sub_1801005A0.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 *__fastcall sub_1801020C4(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // r8
  int v9; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v12; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = sub_180064CCC((_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v8 )
      sub_1800B8610(-2147024882);
    v9 = *(_DWORD *)(a1 + 40);
    for ( i = &v8[2 * (v9 - 1) + 1 + (unsigned int)(v9 - 1)]; --v9 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v12 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v12;
  result[1] = a3;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
