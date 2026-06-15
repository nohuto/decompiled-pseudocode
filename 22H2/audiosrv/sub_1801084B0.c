/*
 * XREFs of sub_1801084B0 @ 0x1801084B0
 * Callers:
 *     sub_180108408 @ 0x180108408 (sub_180108408.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1801084B0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_1800B8610(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a2 + 40);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 48) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 40);
  return sub_1801067C4(a1, a2);
}
