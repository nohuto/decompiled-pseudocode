/*
 * XREFs of sub_1800B91F4 @ 0x1800B91F4
 * Callers:
 *     sub_1800B856C @ 0x1800B856C (sub_1800B856C.c)
 *     sub_1800BBA90 @ 0x1800BBA90 (sub_1800BBA90.c)
 *     sub_1800C50AC @ 0x1800C50AC (sub_1800C50AC.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 *__fastcall sub_1800B91F4(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // r8
  int v7; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v10; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = sub_180064CCC((_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v6 )
      sub_1800B8610(-2147024882);
    v7 = *(_DWORD *)(a1 + 40);
    for ( i = &v6[2 * (v7 - 1) + 1 + (unsigned int)(v7 - 1)]; --v7 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v10 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v10;
  *result = 0LL;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
