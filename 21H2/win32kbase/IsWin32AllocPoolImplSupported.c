/*
 * XREFs of IsWin32AllocPoolImplSupported @ 0x1C002AED4
 * Callers:
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     Win32UAFMAllocPool @ 0x1C0139C00 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1C0139C70 (Win32UAFMAllocPoolNonPaged.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsWin32AllocPoolImplSupported()
{
  if ( qword_1C0257D10 )
    return qword_1C0257D10();
  else
    return 3221225659LL;
}
