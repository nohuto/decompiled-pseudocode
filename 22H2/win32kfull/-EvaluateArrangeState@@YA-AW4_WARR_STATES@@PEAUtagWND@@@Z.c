/*
 * XREFs of ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E988C
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EBB54 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E24 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E40 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E5C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
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
