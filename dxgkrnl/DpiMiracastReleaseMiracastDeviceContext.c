/*
 * XREFs of DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B1E0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C0060040 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0060710 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0061380 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C00624C4 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01C5790 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01E2B40 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C039A080 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C039B630 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C039B710 (DpiMiracastStopMiracastSessionWork.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C039B770 (DpiMiracastStopSessionRequestCallback.c)
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C039BE64 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastReleaseMiracastDeviceContext(int *P, unsigned int a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  _InterlockedXor(P + 7, a2);
  if ( _InterlockedExchangeAdd(P + 6, 0xFFFFFFFF) == 1 )
  {
    v3 = P[7];
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (_DWORD)v3 )
      WdLogSingleEntry2(2LL, v3, -1073741823LL);
    P[4] = 0;
    v4 = (void *)*((_QWORD *)P + 60);
    if ( v4 )
      ObfDereferenceObject(v4);
    ObfDereferenceObject(*((PVOID *)P + 58));
    v5 = (void *)*((_QWORD *)P + 74);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v6 = *(_QWORD **)P;
    if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v7 = (PVOID *)*((_QWORD *)P + 1), *v7 != P) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
}
