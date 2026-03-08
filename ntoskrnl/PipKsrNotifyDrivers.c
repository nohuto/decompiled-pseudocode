/*
 * XREFs of PipKsrNotifyDrivers @ 0x14096A3D0
 * Callers:
 *     PipKsrCallback @ 0x14096A300 (PipKsrCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     PnpDereferenceNotify @ 0x1406F59C0 (PnpDereferenceNotify.c)
 */

__int64 __fastcall PipKsrNotifyDrivers(_QWORD *a1)
{
  unsigned int v2; // esi
  PVOID *v3; // rdi
  PVOID *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[20]; // [rsp+28h] [rbp-40h] BYREF

  memset(v16, 0, sizeof(v16));
  v2 = 0;
  ExAcquireFastMutex(&PnpKsrNotifyLock);
  v3 = (PVOID *)PnpKsrNotifyList;
  if ( PnpKsrNotifyList != &PnpKsrNotifyList )
  {
    do
    {
      ++*((_WORD *)v3 + 28);
      v4 = v3;
      ExReleaseFastMutex(&PnpKsrNotifyLock);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)v3[9], 1u);
      if ( *((_BYTE *)v3 + 58) )
        goto LABEL_21;
      v6 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
        v6 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
      if ( !v6 && !*((_BYTE *)v3 + 80) )
        goto LABEL_21;
      v7 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
        v7 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
      if ( v7 || !*((_BYTE *)v3 + 80) )
      {
        v8 = *(_OWORD *)a1;
        v15 = 0;
        *(_DWORD *)v16 = 1310721;
        *(_OWORD *)&v16[4] = v8;
        v9 = PnpNotifyDriverCallback((__int64)v3, (__int64)v16, &v15);
        if ( v9 < 0 )
        {
          v15 = v9;
        }
        else
        {
          v10 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
          if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
            v10 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
          if ( v10 )
          {
            v11 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
            if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
              v11 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
            if ( !v11 )
              *((_BYTE *)v3 + 80) = 0;
          }
          else
          {
            *((_BYTE *)v3 + 80) = 1;
          }
        }
      }
      else
      {
LABEL_21:
        v15 = 0;
      }
      ExReleaseResourceLite((PERESOURCE)v3[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExAcquireFastMutex(&PnpKsrNotifyLock);
      v3 = (PVOID *)*v3;
      PnpDereferenceNotify(v4);
      v2 = v15;
      if ( v15 < 0 )
      {
        v12 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
        if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
          v12 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
        if ( !v12 )
          break;
        v13 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_FINALIZE.Data1;
        if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_FINALIZE.Data1 )
          v13 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_FINALIZE.Data4;
        if ( !v13 )
          break;
      }
    }
    while ( v3 != &PnpKsrNotifyList );
  }
  ExReleaseFastMutex(&PnpKsrNotifyLock);
  return v2;
}
