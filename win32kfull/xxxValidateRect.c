/*
 * XREFs of xxxValidateRect @ 0x1C00F3F9C
 * Callers:
 *     xxxMoveWindow @ 0x1C0025A90 (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C00F3EC0 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, int *a2)
{
  int v2; // r9d

  if ( a1 )
  {
    v2 = 8;
  }
  else
  {
    a2 = 0LL;
    v2 = 645;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
