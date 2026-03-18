/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x1C008F168
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsXDCOBJ_vSetDefaultFontSupported()
{
  if ( qword_1C029B420 )
    return qword_1C029B420();
  else
    return 3221225659LL;
}
