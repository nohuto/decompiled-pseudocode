/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B5B8
 * Callers:
 *     NtUserSetCursor @ 0x1C0048690 (NtUserSetCursor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C004B32C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01D3B90 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxSwitchWndProc @ 0x1C01F4C80 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02106D4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C021184C (xxxInitializeMoveSizeData.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0241668 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C024FBDC (xxxHelpLoop.c)
 * Callees:
 *     LockQCursor @ 0x1C00128F0 (LockQCursor.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004B674 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C0080E90 (zzzUpdateCursorImage.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v3; // rbx
  struct tagCURSOR *v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  v4 = *(struct tagCURSOR **)(v3 + 376);
  if ( v4 != a1 )
  {
    v4 = (struct tagCURSOR *)LockQCursor(*((_QWORD *)CurrentLogicalCursorThread + 54), a1);
    if ( !gpqCursor )
      MEMORY[0] = v3;
    if ( v3 == gpqCursor )
    {
      v9[2] = 0LL;
      v6 = gptiCurrent;
      v7 = gptiCurrent;
      v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v9;
      v9[1] = v4;
      if ( v4 )
        HMLockObject(v4);
      zzzUpdateCursorImage(v6, v7, v4);
      return (struct tagCURSOR *)ThreadUnlock1(v8);
    }
  }
  return v4;
}
