/*
 * XREFs of _WindowFromDC @ 0x1C01BF0E8
 * Callers:
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C020B3B0 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C020BF00 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPAINTCLIPBRD @ 0x1C020F150 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02270EC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     _ServerFixupMenuDC @ 0x1C0237764 (_ServerFixupMenuDC.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C00D4E94 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

const struct tagWND *__fastcall WindowFromDC(__int64 *a1)
{
  const struct tagWND *v2; // rbx

  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = PwndFromHDC(a1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v2;
}
