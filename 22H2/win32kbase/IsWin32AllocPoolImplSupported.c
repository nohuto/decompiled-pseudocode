/*
 * XREFs of IsWin32AllocPoolImplSupported @ 0x1C002C344
 * Callers:
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     Win32UAFMAllocPool @ 0x1C0139ED0 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1C0139F40 (Win32UAFMAllocPoolNonPaged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsWin32AllocPoolImplSupported()
{
  if ( qword_1C0256D10 )
    return qword_1C0256D10();
  else
    return 3221225659LL;
}
