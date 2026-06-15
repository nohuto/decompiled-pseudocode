/*
 * XREFs of sub_1800F3D60 @ 0x1800F3D60
 * Callers:
 *     sub_1800F29D8 @ 0x1800F29D8 (sub_1800F29D8.c)
 *     sub_1800FE8AC @ 0x1800FE8AC (sub_1800FE8AC.c)
 *     sub_18013D280 @ 0x18013D280 (sub_18013D280.c)
 *     sub_18013EC44 @ 0x18013EC44 (sub_18013EC44.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 *__fastcall sub_1800F3D60(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // r8
  int v7; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

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
  v10 = *a2;
  v11 = *result;
  *a2 = 0LL;
  result[2] = v10;
  *(_QWORD *)(a1 + 32) = v11;
  *result = 0LL;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
