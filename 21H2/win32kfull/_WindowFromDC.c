/*
 * XREFs of _WindowFromDC @ 0x1C00EE034
 * Callers:
 *     NtUserWindowFromDC @ 0x1C00EDFF0 (NtUserWindowFromDC.c)
 *     _ServerFixupMenuDC @ 0x1C00F4650 (_ServerFixupMenuDC.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C0224F80 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0225AF0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPAINTCLIPBRD @ 0x1C0227AA0 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023D3F4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C00EE08C (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

const struct tagWND *__fastcall WindowFromDC(HDC a1)
{
  const struct tagWND *v2; // rbx

  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = PwndFromHDC(a1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v2;
}
