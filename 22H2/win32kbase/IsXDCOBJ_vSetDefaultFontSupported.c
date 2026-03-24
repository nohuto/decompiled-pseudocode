/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x1C0081400
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00934E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsXDCOBJ_vSetDefaultFontSupported()
{
  if ( qword_1C02556A0 )
    return qword_1C02556A0();
  else
    return 3221225659LL;
}
