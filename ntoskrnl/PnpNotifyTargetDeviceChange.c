/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x14068C820
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x140688B68 (PnpProcessCustomDeviceEvent.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x140861D4C (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x14096EB08 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14096EEA8 (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     PnpDereferenceNotify @ 0x1406F59C0 (PnpDereferenceNotify.c)
 *     IopGetSessionIdFromPDO @ 0x1406F72F8 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbx
  _QWORD *v9; // r12
  _QWORD *v10; // rdi
  __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v15; // rdx
  int v16; // ebx
  int v17; // eax
  GUID v18; // xmm0
  void *v19; // r15
  int v20; // ebx
  void *v21; // r13
  __int64 v22; // rax
  struct _KTHREAD *v23; // rax
  char v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+24h] [rbp-54h] BYREF
  int v26; // [rsp+28h] [rbp-50h]
  PVOID Objecta; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  _QWORD *v29; // [rsp+40h] [rbp-38h]
  _OWORD v30[2]; // [rsp+48h] [rbp-30h] BYREF

  v26 = -1;
  Objecta = Object;
  v29 = a4;
  v6 = 0;
  v25 = 0;
  memset(v30, 0, sizeof(v30));
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v18 = *Source1;
    LODWORD(v30[0]) = 2097153;
    *(GUID *)((char *)v30 + 4) = v18;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v10 = *(_QWORD **)(v8 + 480);
    v9 = (_QWORD *)(v8 + 472);
    v24 = 1;
  }
  else
  {
    v9 = (_QWORD *)(v8 + 472);
    v24 = 0;
    v10 = *(_QWORD **)(v8 + 472);
  }
  while ( v10 != v9 )
  {
    P = v10;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v10 + 5) == (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
    {
      SessionIdFromPDO = v26;
    }
    else
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(Objecta);
      v26 = SessionIdFromPDO;
    }
    ++*((_WORD *)v10 + 28);
    ExReleaseFastMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v10[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v10 + 5) == SessionIdFromPDO) && !*((_BYTE *)v10 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v10[10];
        v15 = (_OWORD *)a3;
      }
      else
      {
        *((_QWORD *)&v30[1] + 1) = v10[10];
        v15 = v30;
      }
      v16 = PnpNotifyDriverCallback(v10, v15, &v25);
      ExReleaseResourceLite((PERESOURCE)v10[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v17 = v25;
      if ( v16 < 0 )
        v17 = 0;
      v25 = v17;
      if ( v17 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v29 )
          *v29 = v10[6];
        v19 = v10;
        *(GUID *)((char *)v30 + 4) = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
        do
        {
          v20 = -1;
          v21 = v10;
          v22 = PsGetCurrentServerSilo();
          if ( *((_DWORD *)v10 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v22) )
            v20 = IopGetSessionIdFromPDO(Objecta);
          ++*((_WORD *)v10 + 28);
          ExReleaseFastMutex(&PnpTargetDeviceNotifyLock);
          v23 = KeGetCurrentThread();
          --v23->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v10[9], 1u);
          if ( (v20 == -1 || *((_DWORD *)v10 + 5) == v20) && !*((_BYTE *)v10 + 58) )
          {
            *((_QWORD *)&v30[1] + 1) = v10[10];
            PnpNotifyDriverCallback(v10, v30, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v10[9]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
          v10 = (_QWORD *)v10[1];
          PnpDereferenceNotify(v21);
          if ( v21 == v19 )
            PnpDereferenceNotify(v19);
        }
        while ( v10 != v9 );
        v6 = v25;
        break;
      }
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v10[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v24 )
      v10 = (_QWORD *)v10[1];
    else
      v10 = (_QWORD *)*v10;
    PnpDereferenceNotify(P);
  }
  ExReleaseFastMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Objecta, 0x4E706E50u);
  return v6;
}
