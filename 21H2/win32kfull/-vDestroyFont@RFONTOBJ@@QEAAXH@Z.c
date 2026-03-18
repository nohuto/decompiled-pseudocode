/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02A7238
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02A7380 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C000B238 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C000B48C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  __int64 *pvProducer; // rax
  SIZE sizLogResPpi; // rbx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  SIZE v7; // [rsp+40h] [rbp+18h] BYREF

  pvProducer = (__int64 *)(*this)[1].pvProducer;
  sizLogResPpi = (*this)[1].sizLogResPpi;
  v7 = sizLogResPpi;
  v6 = pvProducer;
  PFEOBJ::vFreepfdg(&v6);
  if ( a2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3008LL) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v7, *this);
  }
}
