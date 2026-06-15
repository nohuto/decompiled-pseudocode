/*
 * XREFs of sub_1800FD1B0 @ 0x1800FD1B0
 * Callers:
 *     sub_1800FA2EC @ 0x1800FA2EC (sub_1800FA2EC.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_QWORD *__fastcall sub_1800FD1B0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r8
  int v7; // edx
  _QWORD *i; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  _QWORD *result; // rax

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
  v9 = *(_QWORD **)(a1 + 32);
  v10 = *v9;
  sub_180048790(v9 + 2, a2);
  *(_QWORD *)(a1 + 32) = v10;
  result = v9;
  *v9 = 0LL;
  v9[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
