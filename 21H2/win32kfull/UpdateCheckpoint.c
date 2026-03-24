/*
 * XREFs of UpdateCheckpoint @ 0x1C0041238
 * Callers:
 *     _GetWindowPlacement @ 0x1C0040F18 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C011A428 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C011A974 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C020930C (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C0041290 (CkptRestore.c)
 *     GetRect @ 0x1C0063F28 (GetRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect(a1, &v3, 66LL);
  return CkptRestore(a1, &v3);
}
