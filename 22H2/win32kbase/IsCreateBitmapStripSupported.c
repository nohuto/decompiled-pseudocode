/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C0013DE0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     xxxSetSysColors @ 0x1C005F814 (xxxSetSysColors.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C0295F68 )
    return qword_1C0295F68();
  else
    return 3221225659LL;
}
