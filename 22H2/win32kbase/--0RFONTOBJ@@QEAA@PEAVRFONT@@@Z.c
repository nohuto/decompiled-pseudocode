/*
 * XREFs of ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007C928
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007C740 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00934E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

RFONTOBJ *__fastcall RFONTOBJ::RFONTOBJ(RFONTOBJ *this, struct RFONT *a2)
{
  int v4; // eax

  *(_QWORD *)this = 0LL;
  if ( qword_1C0255840 )
    v4 = qword_1C0255840();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0255848 )
    qword_1C0255848(this, a2);
  return this;
}
