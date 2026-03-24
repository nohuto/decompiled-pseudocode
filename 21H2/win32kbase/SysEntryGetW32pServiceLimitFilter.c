/*
 * XREFs of SysEntryGetW32pServiceLimitFilter @ 0x1C01FC88C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SysEntryGetW32pServiceLimitFilter())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0255F58;
  if ( qword_1C0255F58 )
    return (__int64 (*)(void))qword_1C0255F58();
  return result;
}
