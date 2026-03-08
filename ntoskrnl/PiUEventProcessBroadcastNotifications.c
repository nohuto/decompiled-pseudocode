/*
 * XREFs of PiUEventProcessBroadcastNotifications @ 0x14068DA78
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14068D8E0 (PiUEventProcessEventWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406F6EFC (IopGetSessionIdFromSymbolicName.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14078F2C0 (PiUEventQueueBroadcastEventEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventProcessBroadcastNotifications(__int64 a1)
{
  NTSTATUS ObjectProperty; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  _DWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  _DWORD *v26; // rsi
  __int64 Pool2; // rax
  size_t pcchLength; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  int v30; // [rsp+B8h] [rbp+38h] BYREF
  int v31; // [rsp+C0h] [rbp+40h] BYREF
  int v32; // [rsp+C8h] [rbp+48h] BYREF

  ObjectProperty = 0;
  pcchLength = 0LL;
  v31 = 0;
  DestinationString = 0LL;
  v30 = 0;
  if ( !PiUEventBroadcastSubscriberPresent )
    return (unsigned int)ObjectProperty;
  v3 = *(_DWORD *)(a1 + 88);
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 24) = -1;
    v16 = Pool2;
    *(_DWORD *)(Pool2 + 20) = 2;
    *(_OWORD *)(Pool2 + 28) = *(_OWORD *)(a1 + 72);
LABEL_25:
    PiUEventQueueBroadcastEventEntry(v16);
    return (unsigned int)ObjectProperty;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v12 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( !v12 )
      goto LABEL_20;
    v22 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
    if ( !v22 )
      v22 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
    if ( !v22 )
    {
LABEL_20:
      v13 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
      v14 = v13;
      if ( !v13 )
        return (unsigned int)-1073741670;
      v15 = (_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 20) = 0;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         (int)a1 + 120,
                         1,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v30,
                         v13 + 24,
                         4,
                         (__int64)&v31,
                         0);
      if ( ObjectProperty >= 0 && v31 == 4 )
        goto LABEL_24;
      *v15 = -1;
      goto LABEL_23;
    }
    v23 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( !v23 )
      v23 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    v11 = v23 == 0;
LABEL_15:
    if ( !v11 )
      return (unsigned int)ObjectProperty;
    goto LABEL_20;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v17 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v17 )
      v17 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( v17 )
    {
      v21 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
      if ( !v21 )
        v21 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
      if ( v21 )
        return (unsigned int)ObjectProperty;
    }
    v18 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_VOLUME.Data1;
    if ( !v18 )
      v18 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_VOLUME.Data4;
    if ( !v18 )
    {
      v14 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
      if ( !v14 )
        return (unsigned int)-1073741670;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 136));
      *(_DWORD *)(v14 + 20) = 1;
      *(_DWORD *)(v14 + 24) = IopGetSessionIdFromSymbolicName(&DestinationString);
      goto LABEL_24;
    }
    v19 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_PARALLEL.Data1;
    if ( !v19 )
      v19 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_PARALLEL.Data4;
    if ( v19 )
    {
      v20 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_COMPORT.Data1;
      if ( !v20 )
        v20 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_COMPORT.Data4;
      if ( v20 )
        return (unsigned int)ObjectProperty;
    }
    v14 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
    if ( !v14 )
      return (unsigned int)-1073741670;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 136));
    *(_DWORD *)(v14 + 20) = 3;
    *(_OWORD *)(v14 + 28) = *(_OWORD *)(a1 + 72);
    v32 = 400;
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       (int)a1 + 136,
                       3,
                       0,
                       0LL,
                       (__int64)&DEVPKEY_Device_InstanceId,
                       (__int64)&v30,
                       v14 + 44,
                       400,
                       (__int64)&v32,
                       0);
    if ( ObjectProperty < 0 || v30 != 18 )
    {
      ExFreePoolWithTag((PVOID)v14, 0x59706E50u);
      return (unsigned int)ObjectProperty;
    }
    v32 = 4;
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       (int)v14 + 44,
                       1,
                       0,
                       0LL,
                       (__int64)&DEVPKEY_Device_SessionId,
                       (__int64)&v30,
                       v14 + 24,
                       4,
                       (__int64)&v32,
                       0);
    if ( ObjectProperty >= 0 && v30 == 7 )
      goto LABEL_24;
    *(_DWORD *)(v14 + 24) = -1;
LABEL_23:
    ObjectProperty = 0;
LABEL_24:
    v16 = v14;
    goto LABEL_25;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v11 = v6 == 1;
    goto LABEL_15;
  }
  v7 = a1 + 128;
  ObjectProperty = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 128), 0xC8uLL, &pcchLength);
  if ( ObjectProperty >= 0 && pcchLength )
  {
    if ( (unsigned int)(2 * pcchLength + 82) < 0x50 || 2 * (int)pcchLength + 89 < (unsigned int)(2 * pcchLength + 82) )
      return (unsigned int)-1073741675;
    ObjectProperty = 0;
    v8 = (2 * (_DWORD)pcchLength + 89) & 0xFFFFFFF8;
    v9 = *(_QWORD *)(v8 + a1 + 76) - *(_QWORD *)&GUID_IO_VOLUME_NAME_CHANGE.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + a1 + 84) - *(_QWORD *)GUID_IO_VOLUME_NAME_CHANGE.Data4;
    if ( !v9 )
    {
      v24 = ExAllocatePool2(256LL, 448LL, 1500540496LL);
      v25 = v24;
      if ( v24 )
      {
        v26 = (_DWORD *)(v24 + 24);
        *(_DWORD *)(v24 + 20) = 1;
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           v7,
                           1,
                           0,
                           0LL,
                           (__int64)&DEVPKEY_Device_SessionId,
                           (__int64)&v30,
                           v24 + 24,
                           4,
                           (__int64)&v31,
                           0);
        if ( ObjectProperty < 0 || v31 != 4 )
        {
          *v26 = -1;
          ObjectProperty = 0;
        }
        v16 = v25;
        goto LABEL_25;
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ObjectProperty;
}
