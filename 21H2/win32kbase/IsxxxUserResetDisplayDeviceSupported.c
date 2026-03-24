/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C01FC660
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011ADB4 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C0257630 )
    return qword_1C0257630();
  else
    return 3221225659LL;
}
