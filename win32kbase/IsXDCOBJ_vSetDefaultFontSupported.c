/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x1C00ACB98
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsXDCOBJ_vSetDefaultFontSupported()
{
  if ( qword_1C02D5C28 )
    return qword_1C02D5C28();
  else
    return 3221225659LL;
}
