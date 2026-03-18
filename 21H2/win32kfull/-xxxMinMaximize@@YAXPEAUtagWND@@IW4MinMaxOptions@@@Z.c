/*
 * XREFs of ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA700 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserMinMaximize @ 0x1C01FA4B0 (NtUserMinMaximize.c)
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C020BB18 (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
