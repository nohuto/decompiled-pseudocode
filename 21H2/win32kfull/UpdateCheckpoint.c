/*
 * XREFs of UpdateCheckpoint @ 0x1C007C924
 * Callers:
 *     _GetWindowPlacement @ 0x1C007C658 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C0104AE0 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C02108F0 (xxxSetInternalWindowPos.c)
 * Callees:
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(struct tagWND *a1)
{
  struct tagRECT v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect((__int64)a1, (__int64)&v3, 66);
  return CkptRestore(a1, &v3);
}
