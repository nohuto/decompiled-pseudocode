/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1C0081D04
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00934E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*XDCOBJ_vSetDefaultFontWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02556A8;
  if ( qword_1C02556A8 )
    return (__int64 (*)(void))qword_1C02556A8();
  return result;
}
