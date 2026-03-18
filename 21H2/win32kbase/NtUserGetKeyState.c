/*
 * XREFs of NtUserGetKeyState @ 0x1C002CDC0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _GetKeyState @ 0x1C002CF00 (_GetKeyState.c)
 *     IsKeyStateCached @ 0x1C002CFA0 (IsKeyStateCached.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C003D084 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x1C003D190 (EtwTraceUIPIInputError.c)
 *     PostUpdateKeyStateEvent @ 0x1C0089B30 (PostUpdateKeyStateEvent.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C0097FB4 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ChangeAcquireResourceType @ 0x1C00B4B70 (ChangeAcquireResourceType.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01E76F4 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  InputDelegation *v2; // rbx
  InputDelegation **ThreadWin32Thread; // rax
  __int64 v4; // rcx
  const struct tagTHREADINFO *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int16 KeyState; // di
  __int64 v11; // rcx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v2 = 0LL;
  ThreadWin32Thread = (InputDelegation **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v4 = *(unsigned int *)(*((_QWORD *)v2 + 54) + 388LL);
  if ( (v4 & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v4 = *((_QWORD *)v2 + 54);
    if ( (*(_DWORD *)(v4 + 388) & 1) != 0 )
      PostUpdateKeyStateEvent();
  }
  LOBYTE(v4) = a1;
  if ( (unsigned __int8)IsKeyStateCached(v4) )
  {
LABEL_5:
    if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) == 0
      || !InputDelegation::IsDelegationEnabledForThread(v2, v5) )
    {
      KeyState = GetKeyState(a1);
      goto LABEL_9;
    }
    goto LABEL_19;
  }
  if ( !(unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
  {
    if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
    {
      EtwTraceUIPIInputError(v2, 0LL, 3);
      KeyState = 0;
      goto LABEL_9;
    }
    goto LABEL_5;
  }
LABEL_19:
  KeyState = 0;
LABEL_9:
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread(v2, v5) )
  {
    *(_DWORD *)(*((_QWORD *)v2 + 60) + 112LL) = 0;
    v11 = 0LL;
    *(_QWORD *)(*((_QWORD *)v2 + 60) + 116LL) = 0LL;
  }
  else
  {
    v5 = (const struct tagTHREADINFO *)*((_QWORD *)v2 + 60);
    *((_DWORD *)v5 + 28) = *((_DWORD *)gpsi + 1746);
    v11 = *((_QWORD *)v2 + 60);
    *(_QWORD *)(v11 + 116) = *(_QWORD *)(*((_QWORD *)v2 + 54) + 228LL);
  }
  UserSessionSwitchLeaveCrit(v11, (__int64)v5, v6, v7);
  return KeyState;
}
