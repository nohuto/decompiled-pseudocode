/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x1C009D8D8
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsXDCOBJ_vSetDefaultFontSupported()
{
  if ( qword_1C0294AB8 )
    return qword_1C0294AB8();
  else
    return 3221225659LL;
}
