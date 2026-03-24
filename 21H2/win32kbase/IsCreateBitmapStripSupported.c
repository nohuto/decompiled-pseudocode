/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C00B6404
 * Callers:
 *     xxxSetSysColors @ 0x1C001F16C (xxxSetSysColors.c)
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C0257B58 )
    return qword_1C0257B58();
  else
    return 3221225659LL;
}
