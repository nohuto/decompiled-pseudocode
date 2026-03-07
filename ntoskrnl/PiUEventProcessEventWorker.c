void __fastcall PiUEventProcessEventWorker(PVOID P)
{
  int v2; // edi
  _DWORD *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v3 = PiUEventUsermodeEventQueue;
    ExReleaseFastMutex(&PiUEventUsermodeEventQueueLock);
    switch ( v3[22] )
    {
      case 1:
LABEL_5:
        v4 = PiUEventNotifyTargetDeviceChange((__int64)v3);
        break;
      case 2:
        v4 = PiUEventNotifyDeviceInterfaceChange((__int64)v3);
        break;
      case 3:
        goto LABEL_5;
      case 4:
        goto LABEL_17;
      case 9:
        v4 = PiUEventNotifyDeviceInstancePropertyChange(v3);
        break;
      default:
        if ( (unsigned int)(v3[22] - 10) > 1 )
        {
LABEL_7:
          PiUEventProcessBroadcastNotifications(v3);
          goto LABEL_8;
        }
LABEL_17:
        v4 = PiUEventNotifyDeviceInstanceChange((__int64)v3);
        break;
    }
    if ( v4 >= 0 )
      goto LABEL_7;
LABEL_8:
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    if ( *((PVOID **)PiUEventUsermodeEventQueue + 1) != &PiUEventUsermodeEventQueue
      || (v5 = *(_QWORD *)PiUEventUsermodeEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventUsermodeEventQueue + 8LL) != PiUEventUsermodeEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventUsermodeEventQueue = *(PVOID *)PiUEventUsermodeEventQueue;
    *(_QWORD *)(v5 + 8) = &PiUEventUsermodeEventQueue;
    if ( PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue )
      v2 = 1;
    ExReleaseFastMutex(&PiUEventUsermodeEventQueueLock);
    PiUEventDereferenceEventEntry(v3);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
