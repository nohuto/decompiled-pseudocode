/*
 * XREFs of sub_180123150 @ 0x180123150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

__int64 __fastcall sub_180123150(__int64 a1)
{
  __int64 *v1; // rbx
  std::_Ref_count_base *v2; // rcx

  v1 = (__int64 *)(a1 + 16);
  sub_1800384A4((__int64 *)(a1 + 72));
  sub_1800384A4(v1 + 5);
  v2 = (std::_Ref_count_base *)v1[4];
  if ( v2 )
    sub_180052600(v2);
  return sub_1800384A4(v1);
}
