/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00F178C
 * Callers:
 *     NtUserSetCursor @ 0x1C00A4ED0 (NtUserSetCursor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00F188C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSwitchWndProc @ 0x1C01CB5E0 (xxxSwitchWndProc.c)
 *     NtUserHideCursorNoCapture @ 0x1C01D4B60 (NtUserHideCursorNoCapture.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     LockQCursor @ 0x1C005B5D0 (LockQCursor.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rbx
  struct tagCURSOR *v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v2 + 1272) & 0x8000000) != 0 )
    v2 = *(_QWORD *)(v2 + 1520);
  v4 = *(_QWORD *)(v2 + 432);
  v5 = *(struct tagCURSOR **)(v4 + 384);
  if ( v5 != a1 )
  {
    v5 = (struct tagCURSOR *)LockQCursor(v4, a1);
    if ( gpqCursor )
    {
      if ( v4 != gpqCursor )
        return v5;
    }
    else
    {
      MEMORY[0] = v4;
    }
    v10[2] = 0LL;
    v10[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v10;
    v10[1] = v5;
    if ( v5 )
      HMLockObject(v5);
    zzzUpdateCursorImage();
    return (struct tagCURSOR *)ThreadUnlock1(v8, v7, v9);
  }
  return v5;
}
