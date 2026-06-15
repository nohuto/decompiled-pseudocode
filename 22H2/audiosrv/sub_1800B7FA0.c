/*
 * XREFs of sub_1800B7FA0 @ 0x1800B7FA0
 * Callers:
 *     sub_1800B8494 @ 0x1800B8494 (sub_1800B8494.c)
 *     sub_1800B84DC @ 0x1800B84DC (sub_1800B84DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (**__fastcall sub_1800B7FA0(_QWORD *a1))(void)
{
  __int64 (**result)(void); // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = off_1801486D0;
  *a1 = off_1801486D0;
  v3 = a1[3];
  if ( v3 )
  {
    a1[3] = 0LL;
    result = (__int64 (**)(void))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[1];
  if ( v4 )
    return (__int64 (**)(void))CoDecrementMTAUsage(v4);
  return result;
}
