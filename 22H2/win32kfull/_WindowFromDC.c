/*
 * XREFs of _WindowFromDC @ 0x1C01BDF48
 * Callers:
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C02087E0 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0209330 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPAINTCLIPBRD @ 0x1C020C580 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     _ServerFixupMenuDC @ 0x1C0234AFC (_ServerFixupMenuDC.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C009E424 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

const struct tagWND *__fastcall WindowFromDC(__int64 *a1)
{
  const struct tagWND *v2; // rbx

  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = PwndFromHDC(a1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v2;
}
