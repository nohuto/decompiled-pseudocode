/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4
 * Callers:
 *     NtUserSetCursor @ 0x1C00232B0 (NtUserSetCursor.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxSwitchWndProc @ 0x1C01EF940 (xxxSwitchWndProc.c)
 *     NtUserHideCursorNoCapture @ 0x1C01F7A00 (NtUserHideCursorNoCapture.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020FDCC (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0023CB0 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     LockQCursor @ 0x1C00F3040 (LockQCursor.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v3; // rbx
  struct tagCURSOR *v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

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
      v11[2] = 0LL;
      v6 = gptiCurrent;
      v7 = gptiCurrent;
      v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v11;
      v11[1] = v4;
      if ( v4 )
        HMLockObject(v4);
      zzzUpdateCursorImage(v6, v7, v4);
      return (struct tagCURSOR *)ThreadUnlock1(v9, v8, v10);
    }
  }
  return v4;
}
