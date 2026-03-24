/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C0006820
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsGetAsyncKeyStateBlocked @ 0x1C0006954 (ApiSetEditionIsGetAsyncKeyStateBlocked.c)
 *     EtwTraceGetAsyncKeyState @ 0x1C0006A00 (EtwTraceGetAsyncKeyState.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0007504 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C00076C4 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     _GetAsyncKeyState @ 0x1C0007B00 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C0007B90 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceUIPIInputError @ 0x1C0007E30 (EtwTraceUIPIInputError.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  __int64 v4; // rcx
  char v6; // [rsp+78h] [rbp+10h] BYREF

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( gptiForeground && PsGetCurrentProcessWin32Process() != *((_QWORD *)gptiForeground + 53) )
    EtwTraceGetAsyncKeyState(ThreadWin32Thread);
  if ( (unsigned int)ApiSetEditionIsGetAsyncKeyStateBlocked() )
    goto LABEL_10;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError((struct tagTHREADINFO *)ThreadWin32Thread, 0LL, 3);
LABEL_10:
    UserSetLastError(5LL);
    goto LABEL_8;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(ThreadWin32Thread) )
  {
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 124LL) = 0;
    v4 = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 128LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(a1);
    CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v6);
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 124LL) = *((_DWORD *)gpsi + 1747);
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 128LL) = gafAsyncKeyState;
    v4 = *(_QWORD *)(ThreadWin32Thread + 480);
    *(_QWORD *)(v4 + 136) = gafAsyncKeyStateRecentDown;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v4);
  return AsyncKeyState;
}
