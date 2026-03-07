void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // si
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  PVOID Pa; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  struct _LIST_ENTRY v20; // [rsp+48h] [rbp-30h] BYREF

  v20 = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&PnpDeviceEventThread = KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) < 0 )
  {
    ExAcquireFastMutex(&PnpNotificationInProgressLock);
    KeSetEvent(&PnpEventQueueEmpty, 0, 0);
    BYTE3(NlsMbOemCodePageTag) = 0;
    ExReleaseFastMutex(&PnpNotificationInProgressLock);
    *(_QWORD *)&PnpDeviceEventThread = 0LL;
    return;
  }
  while ( 1 )
  {
    v2 = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
    v3 = PnpDeviceEventList;
    v4 = (_QWORD *)(PnpDeviceEventList + 120);
    v5 = *(_QWORD **)(PnpDeviceEventList + 120);
    if ( v5 == (_QWORD *)(PnpDeviceEventList + 120) )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v5[1] = v5;
    *v5 = v5;
    ExReleaseFastMutex((PFAST_MUTEX)(v3 + 64));
    Pa = v5;
    v7 = *(_QWORD *)&NullGuid.Data1 - v5[11];
    if ( *(_QWORD *)&NullGuid.Data1 == v5[11] )
      v7 = *(_QWORD *)NullGuid.Data4 - v5[12];
    if ( v7 )
    {
      v20 = *(struct _LIST_ENTRY *)(v5 + 11);
      IoSetActivityIdThread(&v20);
      v2 = 1;
    }
    v8 = v5[19];
    v9 = 0;
    if ( v8 && !*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) )
      v9 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
    {
      goto LABEL_21;
    }
    if ( v9 >= 0 )
    {
      v5[13] = PnpAllocateAndEnableEventWatchdog(v5);
      v10 = *((_DWORD *)v5 + 32);
      if ( v10 > 6 )
      {
        v15 = v10 - 7;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 && (unsigned int)(v17 - 1) > 1 )
              goto LABEL_21;
            v14 = PiUEventNotifyUserMode(v5);
LABEL_19:
            v9 = v14;
          }
        }
      }
      else
      {
        if ( v10 == 6 )
          goto LABEL_20;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( !v12 )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)v5 + 88);
              PnpNotifyDeviceClassChange(v5 + 14, v5 + 20, &DestinationString);
LABEL_36:
              PiUEventNotifyUserMode(v5);
LABEL_21:
              PnpDisableAndFreeEventWatchdog(Pa);
              PnpCompleteDeviceEvent(Pa);
              goto LABEL_22;
            }
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 != 1 )
                goto LABEL_21;
              goto LABEL_36;
            }
            v14 = PnpProcessCustomDeviceEvent((__int64 *)&Pa);
          }
          else
          {
            v14 = PnpProcessTargetDeviceEvent((__int64 *)&Pa);
          }
          goto LABEL_19;
        }
        v9 = PiUEventNotifyUserMode(v5);
        if ( v9 >= 0 )
          PnpNotifyHwProfileChange(v5 + 14);
      }
    }
LABEL_20:
    if ( v9 != 259 )
      goto LABEL_21;
LABEL_22:
    PnpProcessDeferredRegistrations();
    if ( v2 )
      IoSetActivityIdThread(0LL);
  }
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  BYTE3(NlsMbOemCodePageTag) = 0;
  PnpProcessDeferredRegistrations();
  ExReleaseFastMutex(&PnpNotificationInProgressLock);
  ExReleaseFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  if ( P )
    ExFreePoolWithTag(P, 0x4C706E50u);
  *(_QWORD *)&PnpDeviceEventThread = 0LL;
  KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
}
