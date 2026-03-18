/*
 * XREFs of xxxInvalidateRect @ 0x1C021519C
 * Callers:
 *     xxxMNSetTop @ 0x1C021A1D4 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0229580 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02314D0 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C0231A04 (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, __int64 a2, int a3)
{
  int v3; // r9d

  if ( a1 )
  {
    v3 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v3 = 66181;
    a2 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v3);
}
