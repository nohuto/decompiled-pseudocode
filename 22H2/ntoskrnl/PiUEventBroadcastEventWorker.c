/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x140773AE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A2B50 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2BDC (PiUEventBroadcastPortsChangedEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventBroadcastEventWorker(PVOID P)
{
  char v2; // si
  _DWORD *v3; // rdi
  char v4; // bl
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  const WNF_STATE_NAME *v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  struct _DMA_ADAPTER *SessionById; // rbx
  const WNF_STATE_NAME *v13; // rcx
  int v14; // ecx
  int ExplicitScope; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v3 = PiUEventBroadcastEventQueue;
    v4 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    if ( v4 )
    {
      v6 = v3[5];
      if ( !v6 )
      {
        v7 = (unsigned int)v3[6];
        ExplicitScope = v7;
        if ( (_DWORD)v7 == -1 )
        {
          v8 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_6:
          ZwUpdateWnfStateData(v8, 0LL, 0, 0LL, 0LL, 0, 0);
          goto LABEL_7;
        }
        SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(v7, v5);
        if ( !SessionById )
          goto LABEL_7;
        v13 = &WNF_PNPA_DEVNODES_CHANGED_SESSION;
        goto LABEL_18;
      }
      v10 = v6 - 1;
      if ( !v10 )
      {
        v11 = (unsigned int)v3[6];
        ExplicitScope = v11;
        if ( (_DWORD)v11 == -1 )
        {
          v8 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED;
          goto LABEL_6;
        }
        SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(v11, v5);
        if ( !SessionById )
          goto LABEL_7;
        v13 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED_SESSION;
LABEL_18:
        ZwUpdateWnfStateData(v13, 0LL, 0, 0LL, &ExplicitScope, 0, 0);
        HalPutDmaAdapter(SessionById);
        goto LABEL_7;
      }
      v14 = v10 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          PiUEventBroadcastPortsChangedEvent((unsigned int)v3[6], v3 + 7, v3 + 11);
      }
      else
      {
        PiUEventBroadcastHardwareProfilesChangedEvent((unsigned int)v3[6], v3 + 7);
      }
    }
LABEL_7:
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    if ( *((PVOID **)PiUEventBroadcastEventQueue + 1) != &PiUEventBroadcastEventQueue
      || (v9 = *(_QWORD *)PiUEventBroadcastEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventBroadcastEventQueue + 8LL) != PiUEventBroadcastEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventBroadcastEventQueue = *(PVOID *)PiUEventBroadcastEventQueue;
    *(_QWORD *)(v9 + 8) = &PiUEventBroadcastEventQueue;
    if ( PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
