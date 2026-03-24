/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C0053650
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000C8D0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiGetDevicePropertyString @ 0x1C018AC18 (DpiGetDevicePropertyString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C018AD24 (DpiGetDevicePropertyDataString.c)
 *     DxgkFreeUnicodeString @ 0x1C0196230 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x1C02C8798 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02CF2E0 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r13
  char v9; // r12
  PVOID PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rax
  __int16 v18; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  char v24; // bl
  PKEVENT v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r15d
  const void **v30; // rbx
  int DevicePropertyDataString; // eax
  unsigned int v32; // r12d
  unsigned int v33; // r15d
  SIZE_T v34; // rdx
  _WORD *v35; // rax
  _WORD *v36; // r9
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  NTSTATUS v44; // eax
  __int64 v45; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v47; // eax
  __int64 *v48; // rax
  NTSTATUS v49; // eax
  void *v50; // rcx
  void *v51; // rcx
  void *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rax
  char v59; // [rsp+48h] [rbp-C0h]
  char v60; // [rsp+49h] [rbp-BFh]
  char v61; // [rsp+4Ah] [rbp-BEh]
  __int64 v62; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _UNICODE_STRING v63; // [rsp+58h] [rbp-B0h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp-98h]
  PCWSTR SourceString_8[2]; // [rsp+78h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v68[9]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v68, 0, 0x88uLL);
  if ( NotificationStructure )
  {
    v5 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v5 )
    {
      v4 = *((_QWORD *)NotificationStructure + 5);
      if ( v4 )
      {
        v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v6 )
          v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v6 )
          return 0LL;
        EventHandle = 0LL;
        *(_OWORD *)SourceString_8 = 0LL;
        v7 = *(unsigned __int16 *)(v4 + 2);
        LODWORD(v62) = 0;
        v59 = 0;
        v61 = 0;
        v60 = 0;
        DeviceAttachmentBaseRef = 0LL;
        v9 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v7 + 792, 0x74727044u);
        v15 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          v16 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
          *(_QWORD *)(v16 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v16);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x318uLL);
        *(_DWORD *)(v15 + 16) = 1953656900;
        *(_DWORD *)(v15 + 420) = -1;
        *(_DWORD *)(v15 + 456) = -1;
        *(_DWORD *)(v15 + 20) = 14;
        *(_QWORD *)(v15 + 24) = 1LL;
        *(_QWORD *)(v15 + 88) = 0LL;
        *(_DWORD *)(v15 + 32) = 1;
        *(_QWORD *)(v15 + 40) = 0LL;
        *(_DWORD *)(v15 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v15 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v15 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v15);
        *(_WORD *)(v15 + 144) = 0;
        v18 = *(_WORD *)(*((_QWORD *)NotificationStructure + 5) + 2LL);
        *(_QWORD *)(v15 + 152) = v15 + 792;
        *(_WORD *)(v15 + 146) = v18;
        RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 144), *((PCUNICODE_STRING *)NotificationStructure + 5));
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v15 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v15 + 176),
                                (PDEVICE_OBJECT *)(v15 + 184));
        v22 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
LABEL_13:
          v23 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v23 + 24) = v22;
          WdLogEvent5_WdError(v23);
          goto LABEL_45;
        }
        v24 = 1;
        v59 = 1;
        v25 = IoCreateNotificationEvent(0LL, &EventHandle);
        *(_QWORD *)(v15 + 464) = v25;
        if ( !v25 )
        {
          v28 = WdLogNewEntry5_WdError(v27, v26);
          *(_QWORD *)(v28 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v28);
LABEL_49:
          v50 = *(void **)(v15 + 336);
          if ( v50 )
          {
            ExFreePoolWithTag(v50, 0);
            *(_QWORD *)(v15 + 336) = 0LL;
          }
          v51 = *(void **)(v15 + 344);
          if ( v51 )
          {
            ExFreePoolWithTag(v51, 0);
            *(_QWORD *)(v15 + 344) = 0LL;
          }
          v52 = *(void **)(v15 + 352);
          if ( v52 )
          {
            ExFreePoolWithTag(v52, 0);
            *(_QWORD *)(v15 + 352) = 0LL;
          }
          v53 = *(void **)(v15 + 360);
          if ( v53 )
          {
            ExFreePoolWithTag(v53, 0);
            *(_QWORD *)(v15 + 360) = 0LL;
          }
          v54 = *(void **)(v15 + 368);
          if ( v54 )
          {
            ExFreePoolWithTag(v54, 0);
            *(_QWORD *)(v15 + 368) = 0LL;
          }
          if ( v24 )
            ObfDereferenceObject(*(PVOID *)(v15 + 176));
          v55 = *(void **)(v15 + 464);
          if ( v55 )
            ObfDereferenceObject(v55);
          if ( *(_QWORD *)(v15 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v15 + 128));
          if ( !v60 )
            goto LABEL_69;
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v56 = *(_QWORD *)v15;
          if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 )
          {
            v57 = *(_QWORD **)(v15 + 8);
            if ( *v57 == v15 )
            {
              *v57 = v56;
              *(_QWORD *)(v56 + 8) = v57;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_69:
              ExFreePoolWithTag((PVOID)v15, 0);
              goto LABEL_70;
            }
          }
LABEL_74:
          __fastfail(3u);
        }
        ObfReferenceObject(v25);
        ZwClose(EventHandle);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v15 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v15 + 336,
                    (__int64)&v62) >= 0
          || (v29 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     PagedPool,
                     (__int64)&v62) >= 0) )
        {
          v29 = v62;
        }
        v30 = (const void **)(v15 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v15 + 344,
                                     (__int64)&v62);
        v32 = v62;
        if ( DevicePropertyDataString < 0 )
          v32 = 0;
        LODWORD(v62) = v32;
        v33 = v32 + v29;
        if ( v33 )
        {
          v34 = v33 + 4LL;
          if ( v34 < 0xFFFF )
          {
            v35 = ExAllocatePoolWithTag((POOL_TYPE)512, v34, 0x74727044u);
            *(_QWORD *)(v15 + 352) = v35;
            v36 = v35;
            if ( v35 )
            {
              v63 = 0LL;
              if ( v33 == v32 )
              {
                Length = v63.Length;
              }
              else
              {
                memmove(v35, *(const void **)(v15 + 336), v33 - v32);
                *(_WORD *)(*(_QWORD *)(v15 + 352) + 2 * ((unsigned __int64)(v33 - v32) >> 1)) = 0;
                RtlInitUnicodeString(&v63, *(PCWSTR *)(v15 + 352));
                v30 = (const void **)(v15 + 344);
                *(_WORD *)(*(_QWORD *)(v15 + 352) + 2 * ((unsigned __int64)v63.Length >> 1)) = 32;
                v36 = *(_WORD **)(v15 + 352);
                Length = v63.Length + 2;
                v63.Length += 2;
              }
              v63.MaximumLength = v33 + 4;
              if ( v32 )
              {
                memmove(&v36[(unsigned __int64)Length >> 1], *v30, v32);
                v36 = *(_WORD **)(v15 + 352);
                Length = v63.Length;
              }
              v36[(unsigned __int64)(v32 + Length) >> 1] = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v15 + 360,
          (__int64)&v62);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v15 + 368,
          (__int64)&v62);
        SourceString = 0LL;
        DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
        v22 = DeviceInstanceId;
        if ( DeviceInstanceId >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v15 + 160), SourceString);
          v9 = 1;
          v42 = DpiMiracastSendSyncUserModeRequest(v15, 2295808LL);
          v22 = v42;
          if ( v42 < 0 )
            goto LABEL_13;
          if ( SourceString_8[1] < (PCWSTR)0x88 )
          {
            v43 = WdLogNewEntry5_WdError(v21, v20);
            *(_QWORD *)(v43 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v43);
LABEL_47:
            DxgkFreeUnicodeString(v15 + 160);
LABEL_48:
            v24 = v59;
            goto LABEL_49;
          }
          *(_OWORD *)(v15 + 204) = v68[0];
          *(_OWORD *)(v15 + 220) = v68[1];
          *(_OWORD *)(v15 + 236) = v68[2];
          *(_OWORD *)(v15 + 252) = v68[3];
          *(_OWORD *)(v15 + 268) = v68[4];
          *(_OWORD *)(v15 + 284) = v68[5];
          *(_OWORD *)(v15 + 300) = v68[6];
          *(_OWORD *)(v15 + 316) = v68[7];
          *(_WORD *)(v15 + 332) = v68[8];
          *(_WORD *)(v15 + 332) = 0;
          v44 = PsLookupProcessByProcessId((HANDLE)DWORD1(v68[8]), (PEPROCESS *)(v15 + 104));
          v22 = v44;
          if ( v44 < 0 )
            goto LABEL_13;
          ObfDereferenceObject(*(PVOID *)(v15 + 104));
          AcquireMiniportListMutex();
          v45 = qword_1C00B2F18;
          v61 = 1;
          while ( (__int64 *)v45 != &qword_1C00B2F18 )
          {
            if ( !RtlCompareUnicodeString(
                    *((PCUNICODE_STRING *)NotificationStructure + 5),
                    (PCUNICODE_STRING)(v45 + 144),
                    0) )
              goto LABEL_47;
            v45 = *(_QWORD *)v45;
          }
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v15 + 96));
          v22 = LocallyUniqueId;
          if ( LocallyUniqueId < 0 )
            goto LABEL_13;
          v47 = IoRegisterDeviceInterface(
                  DeviceAttachmentBaseRef,
                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                  0LL,
                  (PUNICODE_STRING)(v15 + 128));
          v22 = v47;
          if ( v47 < 0 )
            goto LABEL_13;
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v48 = (__int64 *)qword_1C00B2F20;
          if ( *(__int64 **)qword_1C00B2F20 != &qword_1C00B2F18 )
            goto LABEL_74;
          *(_QWORD *)v15 = &qword_1C00B2F18;
          *(_QWORD *)(v15 + 8) = v48;
          *v48 = v15;
          qword_1C00B2F20 = v15;
          v60 = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v49 = IoRegisterPlugPlayNotification(
                  EventCategoryTargetDeviceChange,
                  0,
                  *(PVOID *)(v15 + 176),
                  g_pDriverObject,
                  DpiMiracastTargetDeviceChange,
                  (PVOID)v15,
                  (PVOID *)(v15 + 400));
          v22 = v49;
          if ( v49 < 0 )
            goto LABEL_13;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(v15 + 128), 1u);
        }
        else
        {
          v41 = WdLogNewEntry5_WdError(v40, v39);
          *(_QWORD *)(v41 + 24) = v22;
          WdLogEvent5_WdError(v41);
          v9 = 0;
        }
LABEL_45:
        if ( (int)v22 >= 0 )
        {
LABEL_70:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v61 )
          {
            _InterlockedExchange64(&qword_1C00B2B50, 0LL);
            KeReleaseMutex(Mutex, 0);
          }
          return 0LL;
        }
        if ( !v9 )
          goto LABEL_48;
        goto LABEL_47;
      }
    }
  }
  v58 = WdLogNewEntry5_WdError(v4, v3);
  *(_QWORD *)(v58 + 24) = -1073741585LL;
  WdLogEvent5_WdError(v58);
  return 3221225711LL;
}
