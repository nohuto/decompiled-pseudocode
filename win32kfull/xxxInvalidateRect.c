/*
 * XREFs of xxxInvalidateRect @ 0x1C0217D5C
 * Callers:
 *     xxxMNSetTop @ 0x1C021CD94 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022C2A0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02341E4 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, int *a2, int a3)
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
