/*
 * XREFs of DxgkMiracastGetNextChunkInfo @ 0x1C0061380
 * Callers:
 *     DxgkNetDispGetNextChunkInfo @ 0x1C02CE630 (DxgkNetDispGetNextChunkInfo.c)
 * Callees:
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C005F0CC (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C005F39C (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DxgkMiracastGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a5,
        unsigned int *a6)
{
  __int64 v6; // r15
  __int64 *DeviceContextFromLuid; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  union _LARGE_INTEGER *Timeout; // rdx
  int v17; // ecx
  __int64 v18; // rdx
  struct _FDO_CONTEXT *v19; // rdx
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF

  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a1, 1);
  v11 = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    v12 = -1073741811LL;
    v13 = -1073741811;
    v14 = 2LL;
LABEL_3:
    WdLogSingleEntry1(v14, v12);
    goto LABEL_21;
  }
  v15 = DeviceContextFromLuid[54];
  if ( !v15 || DeviceContextFromLuid[62] )
    goto LABEL_5;
  if ( (unsigned int)(*((_DWORD *)DeviceContextFromLuid + 102) - 1) > 1 )
  {
LABEL_9:
    v12 = -1073741653LL;
    goto LABEL_6;
  }
  v13 = ProcessMiracastAPIChunk(
          (struct _MIRACAST_DEVICE_CONTEXT *)DeviceContextFromLuid,
          *(struct _FDO_CONTEXT **)(v15 + 64),
          a4,
          a5,
          a6);
  if ( v13 == -1073741762 )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11[62] = (__int64)&Event;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v21 = 0LL;
    Timeout = 0LL;
    if ( (_DWORD)v6 != -1 )
    {
      Timeout = (union _LARGE_INTEGER *)&v21;
      v21 = -10000 * v6;
    }
    v17 = *(_DWORD *)(a3 + 280);
    *(_QWORD *)a3 = &Event;
    v13 = KeWaitForMultipleObjects(v17 + 1, (PVOID *)a3, WaitAny, Executive, 0, 0, Timeout, (PKWAIT_BLOCK)(a3 + 40));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v18 = v11[54];
    if ( v18 )
    {
      v19 = *(struct _FDO_CONTEXT **)(v18 + 64);
      v11[62] = 0LL;
      if ( *((_DWORD *)v11 + 102) != 2 )
        goto LABEL_9;
      if ( v13 )
      {
        if ( v13 >= 1 && v13 < *(_DWORD *)(a3 + 280) + 1 )
          --v13;
        *a4 = 0;
      }
      else
      {
        v13 = ProcessMiracastAPIChunk((struct _MIRACAST_DEVICE_CONTEXT *)v11, v19, a4, a5, a6);
      }
      goto LABEL_21;
    }
LABEL_5:
    v12 = -1073741811LL;
LABEL_6:
    v13 = v12;
    v14 = 3LL;
    goto LABEL_3;
  }
LABEL_21:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v11 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v11, (unsigned int)v11);
  return (unsigned int)v13;
}
