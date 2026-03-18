/*
 * XREFs of ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C0087148
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

RFONTOBJ *__fastcall RFONTOBJ::RFONTOBJ(RFONTOBJ *this, struct RFONT *a2)
{
  *(_QWORD *)this = 0LL;
  if ( qword_1C029B5B0 && (int)qword_1C029B5B0() >= 0 && qword_1C029B5B8 )
    qword_1C029B5B8(this, a2);
  return this;
}
