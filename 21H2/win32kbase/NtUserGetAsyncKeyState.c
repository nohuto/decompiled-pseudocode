/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C003CD30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ApiSetEditionIsGetAsyncKeyStateBlocked @ 0x1C003CE48 (ApiSetEditionIsGetAsyncKeyStateBlocked.c)
 *     EtwTraceGetAsyncKeyState @ 0x1C003CF4C (EtwTraceGetAsyncKeyState.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C003D084 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x1C003D190 (EtwTraceUIPIInputError.c)
 *     _GetAsyncKeyState @ 0x1C0040550 (_GetAsyncKeyState.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C00405E0 (IsKeyboardDelegationEnabledForThread.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *ThreadWin32Thread; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int16 AsyncKeyState; // bx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  AsyncKeyState = 0;
  if ( gptiForeground && PsGetCurrentProcessWin32Process(v3, v2, v5, v6) != *((_QWORD *)gptiForeground + 53) )
    EtwTraceGetAsyncKeyState(ThreadWin32Thread);
  if ( (unsigned int)ApiSetEditionIsGetAsyncKeyStateBlocked() )
    goto LABEL_7;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, 3);
LABEL_7:
    UserSetLastError(5LL, v8, v9, v10);
    goto LABEL_8;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(ThreadWin32Thread) )
  {
    *(_DWORD *)(*((_QWORD *)ThreadWin32Thread + 60) + 124LL) = 0;
    v12 = 0LL;
    *(_QWORD *)(*((_QWORD *)ThreadWin32Thread + 60) + 128LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)ThreadWin32Thread + 60) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(a1);
    v13 = *((_QWORD *)ThreadWin32Thread + 60);
    *(_DWORD *)(v13 + 124) = *((_DWORD *)gpsi + 1747);
    v11 = *((_QWORD *)ThreadWin32Thread + 60);
    *(_QWORD *)(v11 + 128) = gafAsyncKeyState;
    v12 = *((_QWORD *)ThreadWin32Thread + 60);
    *(_QWORD *)(v12 + 136) = gafAsyncKeyStateRecentDown;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return AsyncKeyState;
}
