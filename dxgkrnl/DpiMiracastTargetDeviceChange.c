/*
 * XREFs of DpiMiracastTargetDeviceChange @ 0x1C0060710
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     DxgkFreeUnicodeString @ 0x1C020EA5C (DxgkFreeUnicodeString.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0399F0C (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastTargetDeviceChange(char *NotificationStructure, char *Context)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rax
  char *v11; // r14
  void *v12; // rbx
  int v13; // r15d
  void *v14; // rcx
  NTSTATUS v15; // eax
  int v16; // eax
  _QWORD *v17; // rcx
  PVOID *v18; // rax
  char **v19; // rax
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !NotificationStructure )
  {
    v4 = -1073741585;
    WdLogSingleEntry1(2LL, -1073741585LL);
    return v4;
  }
  if ( !Context || *((_DWORD *)Context + 4) != 1953656900 || *((_DWORD *)Context + 5) != 14 )
  {
    v4 = -1073741584;
    WdLogSingleEntry1(2LL, -1073741584LL);
    return v4;
  }
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v5 )
  {
    v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v7 )
      v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v7 )
    {
      v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( v10 )
      {
        LODWORD(v3) = -1073741811;
      }
      else
      {
        v11 = Context + 32;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
        v12 = (void *)*((_QWORD *)Context + 50);
        v13 = *((_DWORD *)Context + 102);
        *((_QWORD *)Context + 50) = 0LL;
        *((_QWORD *)Context + 11) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v11);
        if ( v12 )
        {
          IoUnregisterPlugPlayNotificationEx(v12);
          IoSetDeviceInterfaceState((PUNICODE_STRING)Context + 8, 0);
          if ( v13 )
          {
            DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x87u, 0);
            v14 = (void *)*((_QWORD *)Context + 58);
            Timeout.QuadPart = -300000000LL;
            v15 = KeWaitForSingleObject(v14, Executive, 0, 0, &Timeout);
            if ( v15 )
            {
              WdLogSingleEntry1(2LL, v15);
              DpiMiracastTearDownAssociation(Context, 0);
            }
          }
          AcquireMiniportListMutex();
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v11);
          *((_QWORD *)Context + 11) = KeGetCurrentThread();
          v16 = *((_DWORD *)Context + 102);
          if ( v16 )
          {
            *((_DWORD *)Context + 103) = v16;
            *((_DWORD *)Context + 102) = 0;
            DpiMiracastBroadcastDeviceStateChange(Context);
          }
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v17 = *(_QWORD **)Context;
          if ( *(char **)(*(_QWORD *)Context + 8LL) != Context
            || (v18 = (PVOID *)*((_QWORD *)Context + 1), *v18 != Context)
            || (*v18 = v17,
                v17[1] = v18,
                v19 = (char **)qword_1C013B8B8,
                *(__int64 **)qword_1C013B8B8 != &qword_1C013B8B0) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)Context = &qword_1C013B8B0;
          *((_QWORD *)Context + 1) = v19;
          *v19 = Context;
          qword_1C013B8B8 = (__int64)Context;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v20 = (void *)*((_QWORD *)Context + 22);
          if ( v20 )
          {
            ObfDereferenceObject(v20);
            *((_QWORD *)Context + 22) = 0LL;
            *((_QWORD *)Context + 23) = 0LL;
          }
          DxgkFreeUnicodeString(Context + 160);
          v21 = (void *)*((_QWORD *)Context + 42);
          if ( v21 )
          {
            ExFreePoolWithTag(v21, 0);
            *((_QWORD *)Context + 42) = 0LL;
          }
          v22 = (void *)*((_QWORD *)Context + 43);
          if ( v22 )
          {
            ExFreePoolWithTag(v22, 0);
            *((_QWORD *)Context + 43) = 0LL;
          }
          v23 = (void *)*((_QWORD *)Context + 44);
          if ( v23 )
          {
            ExFreePoolWithTag(v23, 0);
            *((_QWORD *)Context + 44) = 0LL;
          }
          v24 = (void *)*((_QWORD *)Context + 45);
          if ( v24 )
          {
            ExFreePoolWithTag(v24, 0);
            *((_QWORD *)Context + 45) = 0LL;
          }
          v25 = (void *)*((_QWORD *)Context + 46);
          if ( v25 )
          {
            ExFreePoolWithTag(v25, 0);
            *((_QWORD *)Context + 46) = 0LL;
          }
          RtlFreeUnicodeString((PUNICODE_STRING)Context + 8);
          *((_QWORD *)Context + 11) = 0LL;
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v11);
          _InterlockedExchange64(&qword_1C013B4D8, 0LL);
          KeReleaseMutex(Mutex, 0);
          DpiMiracastReleaseMiracastDeviceContext((int *)Context, 0);
        }
      }
    }
    else
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
      *((_QWORD *)Context + 11) = KeGetCurrentThread();
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              (PUNICODE_STRING)Context + 9,
                              0x80000000,
                              (PFILE_OBJECT *)Context + 22,
                              (PDEVICE_OBJECT *)Context + 23);
      *((_QWORD *)Context + 11) = 0LL;
      v3 = DeviceObjectPointer;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
      if ( (int)v3 < 0 )
        WdLogSingleEntry1(2LL, v3);
    }
  }
  else
  {
    DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x84u, 0);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
    v6 = (void *)*((_QWORD *)Context + 22);
    *((_QWORD *)Context + 11) = KeGetCurrentThread();
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)Context + 22) = 0LL;
      *((_QWORD *)Context + 23) = 0LL;
    }
    *((_QWORD *)Context + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
  }
  return (unsigned int)v3;
}
