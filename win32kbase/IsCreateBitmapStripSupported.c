/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C0017470
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 *     xxxSetSysColors @ 0x1C001A31C (xxxSetSysColors.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C02D70E0 )
    return qword_1C02D70E0();
  else
    return 3221225659LL;
}
