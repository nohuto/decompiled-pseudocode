/*
 * XREFs of UpdateCheckpoint @ 0x1C01009F4
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006898 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C01F3F38 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C01F416C (xxxSetInternalWindowPos.c)
 * Callees:
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(struct tagWND *a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect((__int64)a1, (__int64)&v3, 66);
  return CkptRestore(a1);
}
