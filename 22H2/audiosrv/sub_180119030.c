/*
 * XREFs of sub_180119030 @ 0x180119030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032210 @ 0x180032210 (sub_180032210.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

void __fastcall sub_180119030(char *a1)
{
  std::_Ref_count_base *v2; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  sub_180032210((__int64 *)a1 + 4);
  v2 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
  if ( v2 )
    sub_180052600(v2);
  sub_1800384A4((__int64 *)a1);
}
