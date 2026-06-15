/*
 * XREFs of sub_180055DA0 @ 0x180055DA0
 * Callers:
 *     sub_180055D08 @ 0x180055D08 (sub_180055D08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180055DA0(RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 v3; // rbx

  InitializeSRWLock(a1 + 2);
  v3 = qword_18019F760;
  qword_18019F760 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
