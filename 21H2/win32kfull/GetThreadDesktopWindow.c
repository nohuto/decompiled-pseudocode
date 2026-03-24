/*
 * XREFs of GetThreadDesktopWindow @ 0x1C0104120
 * Callers:
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C001E680 (fnHkINLPCBTCREATESTRUCT.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0027BBC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C0038CE8 (GetLastTopMostWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     NtUserBuildHwndList @ 0x1C006CD20 (NtUserBuildHwndList.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     _FindWindowEx @ 0x1C008C1A0 (_FindWindowEx.c)
 *     xxxWindowFromPoint @ 0x1C00C11CC (xxxWindowFromPoint.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SelectPalette @ 0x1C0101704 (_SelectPalette.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0235288 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023F004 (xxxDrawAnimatedRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax

  v1 = 0LL;
  v2 = a1;
  if ( a1 )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(0LL)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v12),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
    if ( v2 )
    {
LABEL_6:
      v8 = *(_QWORD *)(v2 + 464);
      if ( v8 )
        return *(_QWORD *)(v8 + 24);
    }
  }
  return v1;
}
