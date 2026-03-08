/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02B9970
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02B9C90 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0122194 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0123CA0 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  SIZE sizLogResPpi; // rdi
  __int64 *pvProducer; // [rsp+30h] [rbp+8h] BYREF
  SIZE v6; // [rsp+40h] [rbp+18h] BYREF

  sizLogResPpi = (*this)[1].sizLogResPpi;
  pvProducer = (__int64 *)(*this)[1].pvProducer;
  v6 = sizLogResPpi;
  PFEOBJ::vFreepfdg(&pvProducer);
  if ( a2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3008LL) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v6, *this);
  }
}
