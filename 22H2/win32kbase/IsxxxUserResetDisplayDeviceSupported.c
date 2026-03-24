/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C01FC590
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C0256630 )
    return qword_1C0256630();
  else
    return 3221225659LL;
}
