/*
 * XREFs of PnpInsertEventInQueue @ 0x140688D90
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140201FF4 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B1B9C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403D071C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x140680D20 (PnpInsertNoopEvent.c)
 *     PnpSetDeviceClassChange @ 0x140683CA4 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x140688820 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140688958 (PnpSetCustomTargetEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x140862DC8 (PnpSetTargetDeviceRemove.c)
 *     PnpSetBlockedDriverEvent @ 0x1409616C0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140961730 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14096183C (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1409618D8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140961990 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     IoGetActivityIdThread @ 0x140203AD0 (IoGetActivityIdThread.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140203EC4 (PnpIsSafeToExamineUserModeTeb.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14055EEE8 (McTemplateK0z_EtwWriteTransfer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  GUID v14; // [rsp+20h] [rbp-28h]

  v14 = NullGuid;
  v2 = 0;
  Pool2 = 0LL;
  ActivityIdThread = IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v14 = (GUID)*ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$5C14B8504E5BBEA9C78932444904D36F::$B3978927B1617B2B8454E8E478E76600::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$5C14B8504E5BBEA9C78932444904D36F::$B3978927B1617B2B8454E8E478E76600::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (byte_140C0E10B & 8) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v10 )
      goto LABEL_21;
    v11 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v11 )
    {
LABEL_21:
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      McTemplateK0z_EtwWriteTransfer(
        v5,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Queue,
        v6,
        *(const wchar_t **)(v13 + 48));
    }
  }
  ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( !BYTE3(NlsMbOemCodePageTag) )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1282436688LL);
    if ( Pool2 )
    {
      BYTE3(NlsMbOemCodePageTag) = 1;
      KeResetEvent(&PnpEventQueueEmpty);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  v7 = PnpDeviceEventList + 120;
  v8 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v8 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(v7 + 8) = a1;
  ExReleaseFastMutex(&PnpNotificationInProgressLock);
  ExReleaseFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  if ( Pool2 )
  {
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceEventWorker;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
  return v2;
}
