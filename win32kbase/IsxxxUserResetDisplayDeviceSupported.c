/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C0271FF8
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C02D6BB8 )
    return qword_1C02D6BB8();
  else
    return 3221225659LL;
}
