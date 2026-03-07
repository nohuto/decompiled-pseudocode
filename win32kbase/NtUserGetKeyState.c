__int64 __fastcall NtUserGetKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  InputDelegation *v9; // rbx
  InputDelegation **ThreadWin32Thread; // rax
  __int64 v11; // rcx
  const struct tagTHREADINFO *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int16 KeyState; // di
  __int64 v18; // rcx

  v4 = a1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( !IS_USERCRIT_OWNED_AT_ALL(v6, v5, v7, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v9 = 0LL;
  ThreadWin32Thread = (InputDelegation **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v11 = *(unsigned int *)(*((_QWORD *)v9 + 54) + 396LL);
  if ( (v11 & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v11 = *((_QWORD *)v9 + 54);
    if ( (*(_DWORD *)(v11 + 396) & 1) != 0 )
      PostUpdateKeyStateEvent();
  }
  LOBYTE(v11) = v4;
  if ( (unsigned __int8)IsKeyStateCached(v11) )
  {
LABEL_7:
    if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 1) == 0
      || !InputDelegation::IsDelegationEnabledForThread(v9, v12) )
    {
      KeyState = GetKeyState(v4);
      goto LABEL_11;
    }
    goto LABEL_21;
  }
  if ( !(unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
  {
    if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
    {
      EtwTraceUIPIInputError(v9, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432), 3);
      KeyState = 0;
      goto LABEL_11;
    }
    goto LABEL_7;
  }
LABEL_21:
  KeyState = 0;
LABEL_11:
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread(v9, v12) )
  {
    *(_DWORD *)(*((_QWORD *)v9 + 60) + 112LL) = 0;
    v18 = 0LL;
    *(_QWORD *)(*((_QWORD *)v9 + 60) + 116LL) = 0LL;
  }
  else
  {
    v12 = (const struct tagTHREADINFO *)*((_QWORD *)v9 + 60);
    *((_DWORD *)v12 + 28) = *((_DWORD *)gpsi + 1746);
    v18 = *((_QWORD *)v9 + 60);
    *(_QWORD *)(v18 + 116) = *(_QWORD *)(*((_QWORD *)v9 + 54) + 236LL);
  }
  UserSessionSwitchLeaveCrit(v18, (__int64)v12, v13, v14);
  return KeyState;
}
