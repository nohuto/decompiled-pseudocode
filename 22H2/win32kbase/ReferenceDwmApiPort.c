/*
 * XREFs of ReferenceDwmApiPort @ 0x1C0047A70
 * Callers:
 *     SetConnectCompletedState @ 0x1C0011090 (SetConnectCompletedState.c)
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C0013D20 (UserNotifyDisplayChange.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

PVOID __fastcall ReferenceDwmApiPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  PVOID DeviceContext; // rbx

  if ( IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
  {
    DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
      ObfReferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  }
  else
  {
    if ( (unsigned int)IsEtwUserCritEnabled(v5, v4, v6, v7) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v13 = SGDGetUserSessionState(v9, v8, v10, v11);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v13 + 8));
    EtwTraceAcquiredSharedUserCrit();
    DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
      ObfReferenceObject(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    UserSessionSwitchLeaveCrit();
  }
  return DeviceContext;
}
