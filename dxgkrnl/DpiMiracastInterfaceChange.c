/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C005F540
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkFreeUnicodeString @ 0x1C020EA5C (DxgkFreeUnicodeString.c)
 *     DpiGetDevicePropertyString @ 0x1C02163CC (DpiGetDevicePropertyString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C02164D8 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDeviceInstanceId @ 0x1C0396228 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C039B354 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // r12
  char v8; // r13
  void *Pool2; // rax
  __int64 v10; // rsi
  const UNICODE_STRING *v12; // rdx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v14; // rdx
  PKEVENT v15; // rax
  struct _DEVICE_OBJECT *v16; // rbx
  int v17; // r12d
  int DevicePropertyDataString; // eax
  unsigned int v19; // r13d
  unsigned int v20; // r12d
  unsigned __int64 v21; // rdx
  char *v22; // rax
  char *v23; // r9
  unsigned __int16 v24; // ax
  int DeviceInstanceId; // eax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int16 v34; // ax
  void *v35; // rcx
  __int64 v36; // rbx
  NTSTATUS LocallyUniqueId; // eax
  PDEVICE_OBJECT v38; // rbx
  __int64 *v39; // rax
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  char v48; // [rsp+4Ah] [rbp-BEh]
  int v49; // [rsp+4Ch] [rbp-BCh] BYREF
  PDEVICE_OBJECT DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-A0h] BYREF
  __m256i SourceString; // [rsp+70h] [rbp-98h] BYREF
  __int128 v53; // [rsp+90h] [rbp-78h]
  _OWORD v54[9]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v54, 0, 0x88uLL);
  memset(&SourceString.m256i_u64[1], 0, 24);
  if ( NotificationStructure )
  {
    v3 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v3 )
    {
      v4 = *((_QWORD *)NotificationStructure + 5);
      if ( v4 )
      {
        v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v5 )
          return 0LL;
        EventHandle = 0LL;
        v53 = 0LL;
        v6 = *(unsigned __int16 *)(v4 + 2) + 792LL;
        DestinationString[0] = 0LL;
        v49 = 0;
        v48 = 0;
        v7 = 0;
        v8 = 0;
        Pool2 = (void *)ExAllocatePool2(64LL, v6, 1953656900LL);
        v10 = (__int64)Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry1(6LL, -1073741801LL);
          return 0LL;
        }
        memset(Pool2, 0, 0x318uLL);
        *(_DWORD *)(v10 + 16) = 1953656900;
        *(_DWORD *)(v10 + 20) = 14;
        *(_DWORD *)(v10 + 420) = -1;
        *(_DWORD *)(v10 + 456) = -1;
        *(_QWORD *)(v10 + 24) = 1LL;
        *(_QWORD *)(v10 + 88) = 0LL;
        *(_DWORD *)(v10 + 32) = 1;
        *(_QWORD *)(v10 + 40) = 0LL;
        *(_DWORD *)(v10 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v10 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v10 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v10);
        v12 = (const UNICODE_STRING *)*((_QWORD *)NotificationStructure + 5);
        *(_WORD *)(v10 + 144) = 0;
        *(_WORD *)(v10 + 146) = v12->MaximumLength;
        *(_QWORD *)(v10 + 152) = v10 + 792;
        RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 144), v12);
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v10 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v10 + 176),
                                (PDEVICE_OBJECT *)(v10 + 184));
        if ( DeviceObjectPointer < 0 )
        {
          v14 = DeviceObjectPointer;
LABEL_16:
          WdLogSingleEntry1(2LL, v14);
LABEL_50:
          v40 = *(void **)(v10 + 336);
          if ( v40 )
          {
            ExFreePoolWithTag(v40, 0);
            *(_QWORD *)(v10 + 336) = 0LL;
          }
          v41 = *(void **)(v10 + 344);
          if ( v41 )
          {
            ExFreePoolWithTag(v41, 0);
            *(_QWORD *)(v10 + 344) = 0LL;
          }
          v42 = *(void **)(v10 + 352);
          if ( v42 )
          {
            ExFreePoolWithTag(v42, 0);
            *(_QWORD *)(v10 + 352) = 0LL;
          }
          v43 = *(void **)(v10 + 360);
          if ( v43 )
          {
            ExFreePoolWithTag(v43, 0);
            *(_QWORD *)(v10 + 360) = 0LL;
          }
          v44 = *(void **)(v10 + 368);
          if ( v44 )
          {
            ExFreePoolWithTag(v44, 0);
            *(_QWORD *)(v10 + 368) = 0LL;
          }
          if ( v7 )
            ObfDereferenceObject(*(PVOID *)(v10 + 176));
          v45 = *(void **)(v10 + 464);
          if ( v45 )
            ObfDereferenceObject(v45);
          if ( *(_QWORD *)(v10 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 128));
          if ( !v48 )
            goto LABEL_70;
          KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
          v46 = *(_QWORD *)v10;
          if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
          {
            v47 = *(_QWORD **)(v10 + 8);
            if ( *v47 == v10 )
            {
              *v47 = v46;
              *(_QWORD *)(v46 + 8) = v47;
              KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
LABEL_70:
              ExFreePoolWithTag((PVOID)v10, 0);
              v38 = DestinationString[0];
LABEL_72:
              if ( v38 )
                ObfDereferenceObject(v38);
              if ( v8 )
              {
                _InterlockedExchange64(&qword_1C013B4D8, 0LL);
                KeReleaseMutex(Mutex, 0);
              }
              return 0LL;
            }
          }
LABEL_76:
          __fastfail(3u);
        }
        v7 = 1;
        v15 = IoCreateNotificationEvent(0LL, &EventHandle);
        *(_QWORD *)(v10 + 464) = v15;
        if ( !v15 )
        {
          v14 = -1073741801LL;
          goto LABEL_16;
        }
        ObfReferenceObject(v15);
        ZwClose(EventHandle);
        DestinationString[0] = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v10 + 184));
        v16 = DestinationString[0];
        if ( (int)DpiGetDevicePropertyDataString(
                    DestinationString[0],
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v10 + 336,
                    (__int64)&v49) >= 0
          || (v17 = 0, (int)DpiGetDevicePropertyString(v16, DevicePropertyManufacturer, (__int64)&v49) >= 0) )
        {
          v17 = v49;
        }
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     v16,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v10 + 344,
                                     (__int64)&v49);
        v19 = v49;
        if ( DevicePropertyDataString < 0 )
          v19 = 0;
        v49 = v19;
        v20 = v19 + v17;
        if ( v20 )
        {
          v21 = v20 + 4LL;
          if ( v21 < 0xFFFF )
          {
            v22 = (char *)ExAllocatePool2(64LL, v21, 1953656900LL);
            *(_QWORD *)(v10 + 352) = v22;
            v23 = v22;
            if ( v22 )
            {
              *(_OWORD *)&DestinationString[1] = 0LL;
              if ( v20 == v19 )
              {
                v24 = (unsigned __int16)DestinationString[1];
              }
              else
              {
                memmove(v22, *(const void **)(v10 + 336), v20 - v19);
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)(v20 - v19) >> 1)) = 0;
                RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], *(PCWSTR *)(v10 + 352));
                v16 = DestinationString[0];
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)LOWORD(DestinationString[1]) >> 1)) = 32;
                v23 = *(char **)(v10 + 352);
                v24 = LOWORD(DestinationString[1]) + 2;
                LOWORD(DestinationString[1]) += 2;
              }
              WORD1(DestinationString[1]) = v20 + 4;
              if ( v19 )
              {
                memmove(&v23[2 * ((unsigned __int64)v24 >> 1)], *(const void **)(v10 + 344), v19);
                v24 = (unsigned __int16)DestinationString[1];
              }
              *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)(v19 + v24) >> 1)) = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          v16,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v10 + 360,
          (__int64)&v49);
        DpiGetDevicePropertyDataString(v16, (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName, v10 + 368, (__int64)&v49);
        SourceString.m256i_i64[0] = 0LL;
        DeviceInstanceId = DpiGetDeviceInstanceId(v16);
        if ( DeviceInstanceId < 0 )
        {
          WdLogSingleEntry1(2LL, DeviceInstanceId);
          v8 = 0;
LABEL_49:
          v7 = 1;
          goto LABEL_50;
        }
        RtlInitUnicodeString((PUNICODE_STRING)(v10 + 160), (PCWSTR)SourceString.m256i_i64[0]);
        v26 = DpiMiracastSendSyncUserModeRequest(v10, 2295808LL);
        if ( v26 >= 0 )
        {
          if ( *((_QWORD *)&v53 + 1) < 0x88uLL )
          {
            v27 = -1073741811LL;
LABEL_36:
            WdLogSingleEntry1(2LL, v27);
            v8 = 0;
LABEL_48:
            DxgkFreeUnicodeString(v10 + 160);
            goto LABEL_49;
          }
          v28 = v54[1];
          *(_OWORD *)(v10 + 204) = v54[0];
          v29 = v54[2];
          *(_OWORD *)(v10 + 220) = v28;
          v30 = v54[3];
          *(_OWORD *)(v10 + 236) = v29;
          v31 = v54[4];
          *(_OWORD *)(v10 + 252) = v30;
          v32 = v54[5];
          *(_OWORD *)(v10 + 268) = v31;
          v33 = v54[6];
          *(_OWORD *)(v10 + 284) = v32;
          *(_OWORD *)(v10 + 300) = v33;
          v34 = v54[8];
          *(_OWORD *)(v10 + 316) = v54[7];
          *(_WORD *)(v10 + 332) = v34;
          v35 = (void *)DWORD1(v54[8]);
          *(_WORD *)(v10 + 332) = 0;
          v26 = PsLookupProcessByProcessId(v35, (PEPROCESS *)(v10 + 104));
          if ( v26 >= 0 )
          {
            ObfDereferenceObject(*(PVOID *)(v10 + 104));
            AcquireMiniportListMutex();
            v36 = qword_1C013B8A0;
            v8 = 1;
            while ( (__int64 *)v36 != &qword_1C013B8A0 )
            {
              if ( !RtlCompareUnicodeString(
                      *((PCUNICODE_STRING *)NotificationStructure + 5),
                      (PCUNICODE_STRING)(v36 + 144),
                      0) )
                goto LABEL_48;
              v36 = *(_QWORD *)v36;
            }
            LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v10 + 96));
            if ( LocallyUniqueId >= 0 )
            {
              v38 = DestinationString[0];
              LocallyUniqueId = IoRegisterDeviceInterface(
                                  DestinationString[0],
                                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                                  0LL,
                                  (PUNICODE_STRING)(v10 + 128));
              if ( LocallyUniqueId >= 0 )
              {
                KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                v39 = (__int64 *)qword_1C013B8A8;
                if ( *(__int64 **)qword_1C013B8A8 != &qword_1C013B8A0 )
                  goto LABEL_76;
                *(_QWORD *)v10 = &qword_1C013B8A0;
                *(_QWORD *)(v10 + 8) = v39;
                *v39 = v10;
                qword_1C013B8A8 = v10;
                v48 = 1;
                KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                LocallyUniqueId = IoRegisterPlugPlayNotification(
                                    EventCategoryTargetDeviceChange,
                                    0,
                                    *(PVOID *)(v10 + 176),
                                    g_pDriverObject,
                                    DpiMiracastTargetDeviceChange,
                                    (PVOID)v10,
                                    (PVOID *)(v10 + 400));
                if ( LocallyUniqueId >= 0 )
                {
                  IoSetDeviceInterfaceState((PUNICODE_STRING)(v10 + 128), 1u);
                  goto LABEL_72;
                }
              }
            }
            WdLogSingleEntry1(2LL, LocallyUniqueId);
            goto LABEL_48;
          }
        }
        v27 = v26;
        goto LABEL_36;
      }
    }
  }
  WdLogSingleEntry1(2LL, -1073741585LL);
  return 3221225711LL;
}
