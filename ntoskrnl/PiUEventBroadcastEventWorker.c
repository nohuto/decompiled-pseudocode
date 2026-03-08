/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x1407F80C0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140956B40 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140956BCC (PiUEventBroadcastPortsChangedEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventBroadcastEventWorker(PVOID P)
{
  char v2; // si
  _DWORD *v3; // rdi
  char v4; // bl
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  void *SessionById; // rbx
  __int64 *v13; // rcx
  int v14; // ecx

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v3 = PiUEventBroadcastEventQueue;
    v4 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    ExReleaseFastMutex(&PiUEventBroadcastEventQueueLock);
    if ( v4 )
    {
      v6 = v3[5];
      if ( !v6 )
      {
        v7 = (unsigned int)v3[6];
        if ( (_DWORD)v7 == -1 )
        {
          v8 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_6:
          ZwUpdateWnfStateData((__int64)v8, 0LL);
          goto LABEL_7;
        }
        SessionById = (void *)MmGetSessionById(v7, v5);
        if ( !SessionById )
          goto LABEL_7;
        v13 = &WNF_PNPA_DEVNODES_CHANGED_SESSION;
        goto LABEL_18;
      }
      v10 = v6 - 1;
      if ( !v10 )
      {
        v11 = (unsigned int)v3[6];
        if ( (_DWORD)v11 == -1 )
        {
          v8 = &WNF_PNPA_VOLUMES_CHANGED;
          goto LABEL_6;
        }
        SessionById = (void *)MmGetSessionById(v11, v5);
        if ( !SessionById )
          goto LABEL_7;
        v13 = &WNF_PNPA_VOLUMES_CHANGED_SESSION;
LABEL_18:
        ZwUpdateWnfStateData((__int64)v13, 0LL);
        ObfDereferenceObject(SessionById);
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
    ExReleaseFastMutex(&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
