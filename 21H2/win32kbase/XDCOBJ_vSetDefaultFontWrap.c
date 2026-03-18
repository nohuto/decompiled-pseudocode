/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1C008F2E0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*XDCOBJ_vSetDefaultFontWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B428;
  if ( qword_1C029B428 )
    return (__int64 (*)(void))qword_1C029B428();
  return result;
}
