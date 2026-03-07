__int64 __fastcall NtUserGetAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rdi
  __int16 AsyncKeyState; // bx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  void *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v10 = PtiCurrentShared(v6, v5, v7, v8);
  AsyncKeyState = 0;
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v13 = -*(_QWORD *)CurrentProcessWin32Process;
      v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( v14 != *((_QWORD *)gptiForeground + 53) )
      EtwTraceGetAsyncKeyState(v10, v13);
  }
  if ( (unsigned int)ApiSetEditionIsGetAsyncKeyStateBlocked() )
    goto LABEL_12;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError(v10, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432), 3);
LABEL_12:
    UserSetLastError(5);
    goto LABEL_10;
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v10) )
  {
    *(_DWORD *)(*((_QWORD *)v10 + 60) + 124LL) = 0;
    v28 = 0LL;
    *(_QWORD *)(*((_QWORD *)v10 + 60) + 128LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)v10 + 60) + 136LL) = 0LL;
  }
  else
  {
    AsyncKeyState = GetAsyncKeyState(v4);
    v18 = *((_QWORD *)v10 + 60);
    v19 = gpsi;
    v20 = *((unsigned int *)gpsi + 1747);
    *(_DWORD *)(v18 + 124) = v20;
    v22 = SGDGetUserSessionState(v19, v20, v18, v21);
    v23 = *((_QWORD *)v10 + 60);
    *(_QWORD *)(v23 + 128) = *(_QWORD *)(v22 + 13992);
    v27 = SGDGetUserSessionState(v23, v24, v25, v26);
    v28 = *((_QWORD *)v10 + 60);
    *(_QWORD *)(v28 + 136) = *(_QWORD *)(v27 + 14120);
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v28, v15, v16, v17);
  return AsyncKeyState;
}
