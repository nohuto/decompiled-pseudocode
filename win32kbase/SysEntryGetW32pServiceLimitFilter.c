/*
 * XREFs of SysEntryGetW32pServiceLimitFilter @ 0x1C00D49D0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SysEntryGetW32pServiceLimitFilter())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D60D8;
  if ( qword_1C02D60D8 )
    return (__int64 (*)(void))qword_1C02D60D8();
  return result;
}
