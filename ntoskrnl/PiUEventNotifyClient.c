/*
 * XREFs of PiUEventNotifyClient @ 0x14068032C
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x140680140 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140681F08 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14068CA08 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140870310 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PiUEventQueuePendingEvent @ 0x140680430 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x140680474 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1406804B0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventIsClientStuck @ 0x140680508 (PiUEventIsClientStuck.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14068DE6C (PiUEventDequeuePendingEventWorker.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v4; // edi
  char v5; // si
  __int64 Pool2; // rsi

  v4 = 0;
  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( !(unsigned __int8)PiUEventIsClientStuck(a2) )
      goto LABEL_3;
    ++*(_DWORD *)(a2 + 136);
  }
  v5 = 1;
LABEL_3:
  ExReleaseFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1500540496LL);
    if ( Pool2 )
    {
      PiUEventReferenceEventEntry(a1);
      *(_QWORD *)(Pool2 + 24) = a1;
      ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      v4 = PiUEventQueuePendingEvent(a2, Pool2);
      if ( v4 >= 0
        || (PiUEventDequeuePendingEventWorker(a2, *(_QWORD *)(a2 + 112), 0LL),
            ++*(_DWORD *)(a2 + 136),
            v4 = PiUEventQueuePendingEvent(a2, Pool2),
            v4 >= 0) )
      {
        *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000014];
        ExReleaseFastMutex(*(PFAST_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
      else
      {
        ++*(_DWORD *)(a2 + 136);
        ExReleaseFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
