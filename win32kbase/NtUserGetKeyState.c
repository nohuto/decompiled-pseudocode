/*
 * XREFs of NtUserGetKeyState @ 0x1C0078A00
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceUIPIInputError @ 0x1C003A560 (EtwTraceUIPIInputError.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     _GetKeyState @ 0x1C0078B50 (_GetKeyState.c)
 *     IsKeyStateCached @ 0x1C0078C00 (IsKeyStateCached.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C0078EE8 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C007FDD0 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     PostUpdateKeyStateEvent @ 0x1C0092540 (PostUpdateKeyStateEvent.c)
 *     ChangeAcquireResourceType @ 0x1C00C4300 (ChangeAcquireResourceType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C02174FC (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

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
