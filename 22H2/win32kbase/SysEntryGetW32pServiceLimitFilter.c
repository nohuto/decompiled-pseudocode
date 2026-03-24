/*
 * XREFs of SysEntryGetW32pServiceLimitFilter @ 0x1C01FC7BC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029A770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SysEntryGetW32pServiceLimitFilter())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0254F78;
  if ( qword_1C0254F78 )
    return (__int64 (*)(void))qword_1C0254F78();
  return result;
}
