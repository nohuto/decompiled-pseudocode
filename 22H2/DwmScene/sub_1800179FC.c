/*
 * XREFs of sub_1800179FC @ 0x1800179FC
 * Callers:
 *     sub_180019860 @ 0x180019860 (sub_180019860.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800179FC(__int64 *a1, int *a2, _QWORD *a3)
{
  __int64 v5; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_180017958(a1, a2, a3);
}
