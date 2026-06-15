/*
 * XREFs of sub_1800E6D10 @ 0x1800E6D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800E6D10(_QWORD *a1, char a2)
{
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // rcx

  v4 = (std::_Ref_count_base *)a1[3];
  if ( v4 )
    sub_180052600(v4);
  v5 = a1[1];
  if ( v5 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( a2 )
    sub_18006A148(a1);
}
