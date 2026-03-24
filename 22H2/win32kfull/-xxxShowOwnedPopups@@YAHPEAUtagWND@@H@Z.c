/*
 * XREFs of ?xxxShowOwnedPopups@@YAHPEAUtagWND@@H@Z @ 0x1C0161920
 * Callers:
 *     <none>
 * Callees:
 *     xxxShowOwnedWindows @ 0x1C002C134 (xxxShowOwnedWindows.c)
 */

__int64 __fastcall xxxShowOwnedPopups(struct tagWND *a1, int a2)
{
  xxxShowOwnedWindows((__int64)a1, a2 != 0 ? 3 : 1, 0LL);
  return 1LL;
}
