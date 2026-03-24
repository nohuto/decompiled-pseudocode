/*
 * XREFs of xxxInvalidateRect @ 0x1C0234D7C
 * Callers:
 *     xxxMNSetTop @ 0x1C023AFB8 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C024469C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0249294 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C024988C (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
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
