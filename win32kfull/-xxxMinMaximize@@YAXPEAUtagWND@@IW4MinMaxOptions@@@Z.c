/*
 * XREFs of ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00FF588
 * Callers:
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0014F28 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     NtUserMinMaximize @ 0x1C01D8A10 (NtUserMinMaximize.c)
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EC8EC (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMinMaximize(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+30h] [rbp-38h]
  int v6; // [rsp+38h] [rbp-30h]
  char v7; // [rsp+3Ch] [rbp-2Ch]
  __int128 v8; // [rsp+40h] [rbp-28h]

  v5 = 0LL;
  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  return xxxMinMaximizeEx(a1, a2, a3, &v4);
}
