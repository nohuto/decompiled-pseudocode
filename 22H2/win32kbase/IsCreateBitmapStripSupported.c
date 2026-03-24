/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C00B6744
 * Callers:
 *     xxxSetSysColors @ 0x1C00205DC (xxxSetSysColors.c)
 *     xxxResetDisplayDevice @ 0x1C0077600 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C0256B58 )
    return qword_1C0256B58();
  else
    return 3221225659LL;
}
