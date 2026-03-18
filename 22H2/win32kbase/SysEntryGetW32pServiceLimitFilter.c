/*
 * XREFs of SysEntryGetW32pServiceLimitFilter @ 0x1C00C5660
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SysEntryGetW32pServiceLimitFilter())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294F68;
  if ( qword_1C0294F68 )
    return (__int64 (*)(void))qword_1C0294F68();
  return result;
}
