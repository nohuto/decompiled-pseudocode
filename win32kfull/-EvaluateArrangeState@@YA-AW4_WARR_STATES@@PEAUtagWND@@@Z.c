/*
 * XREFs of ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01EAA3C
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01ECD18 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0101D14 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0101D30 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0101D4C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EvaluateArrangeState(__int64 a1)
{
  __int64 DesktopWindow; // rax
  const struct tagWND *v2; // rdx
  char v4; // cl
  const struct tagWND *v5; // rcx
  const struct tagWND *v6; // rcx

  DesktopWindow = GetDesktopWindow(a1);
  if ( *((_QWORD *)v2 + 13) != DesktopWindow )
    return 6LL;
  v4 = *(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL);
  if ( (v4 & 0x20) != 0 )
    return 5LL;
  if ( (v4 & 1) != 0 )
    return 0LL;
  if ( IsVerticallyMaximized(v2) )
    return 1LL;
  if ( IsLeftSemiMaximized(v5) )
    return 2LL;
  return 4 - (unsigned int)IsRightSemiMaximized(v6);
}
