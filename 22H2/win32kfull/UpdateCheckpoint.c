/*
 * XREFs of UpdateCheckpoint @ 0x1C00C79F4
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00C4790 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C01F2D48 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C01F2F6C (xxxSetInternalWindowPos.c)
 * Callees:
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(struct tagWND *a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect(a1, &v3, 66LL);
  return CkptRestore(a1);
}
