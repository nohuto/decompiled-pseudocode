/*
 * XREFs of xxxValidateRect @ 0x1C00BC36C
 * Callers:
 *     xxxMoveWindow @ 0x1C0024A20 (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C00BC290 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, __int64 a2)
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
