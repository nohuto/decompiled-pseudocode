/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x14071AD38
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14071A194 (PnpProcessCustomDeviceEvent.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140732BBC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x14074C0E8 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A22D0 (PnpCancelRemoveOnHungDevices.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1408B9090 (PiSendTargetDeviceRemoveCanceledNotification.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     KeAcquireGuardedMutex @ 0x14026F9E0 (KeAcquireGuardedMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x14071B5F8 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x14071B694 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x14073A6FC (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  GUID *v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v16; // rdx
  int v17; // ebx
  int v18; // eax
  GUID v19; // xmm0
  void *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // r12
  __int64 v25; // rax
  struct _KTHREAD *v26; // rax
  char v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+24h] [rbp-54h] BYREF
  int SessionIdFromPDO; // [rsp+28h] [rbp-50h]
  _QWORD *v30; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  _QWORD *v32; // [rsp+40h] [rbp-38h]
  _OWORD v33[2]; // [rsp+48h] [rbp-30h] BYREF

  v32 = a4;
  v6 = 0;
  v28 = 0;
  SessionIdFromPDO = -1;
  memset(v33, 0, sizeof(v33));
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v19 = *Source1;
    LODWORD(v33[0]) = 2097153;
    *(GUID *)((char *)v33 + 4) = v19;
  }
  KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
  v10 = &GUID_TARGET_DEVICE_REMOVE_CANCELLED;
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v11 = *(_QWORD **)(v8 + 480);
    v27 = 1;
  }
  else
  {
    v11 = *(_QWORD **)(v8 + 472);
    v27 = 0;
  }
  v12 = (_QWORD *)(v8 + 472);
  v30 = v12;
  while ( v11 != v12 )
  {
    P = v11;
    CurrentServerSilo = PsGetCurrentServerSilo(v9, (__int64)v10);
    if ( *((_DWORD *)v11 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromPDO = IopGetSessionIdFromPDO(Object);
    ++*((_WORD *)v11 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v11[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v11 + 5) == SessionIdFromPDO) && !*((_BYTE *)v11 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v11[10];
        v16 = (_OWORD *)a3;
      }
      else
      {
        *((_QWORD *)&v33[1] + 1) = v11[10];
        v16 = v33;
      }
      v17 = PnpNotifyDriverCallback(v11, v16, &v28);
      ExReleaseResourceLite((PERESOURCE)v11[9]);
      KeLeaveCriticalRegion();
      v18 = v28;
      if ( v17 < 0 )
        v18 = 0;
      v28 = v18;
      if ( v18 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v32 )
          *v32 = v11[6];
        v20 = v11;
        *(GUID *)((char *)v33 + 4) = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
        do
        {
          v23 = -1;
          v24 = v11;
          v25 = PsGetCurrentServerSilo(v22, v21);
          if ( *((_DWORD *)v11 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v25) )
            v23 = IopGetSessionIdFromPDO(Object);
          ++*((_WORD *)v11 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v11[9], 1u);
          if ( (v23 == -1 || *((_DWORD *)v11 + 5) == v23) && !*((_BYTE *)v11 + 58) )
          {
            *((_QWORD *)&v33[1] + 1) = v11[10];
            PnpNotifyDriverCallback(v11, v33, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v11[9]);
          KeLeaveCriticalRegion();
          KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
          v11 = (_QWORD *)v11[1];
          PnpDereferenceNotify(v24);
          if ( v24 == v20 )
            PnpDereferenceNotify(v20);
        }
        while ( v11 != v30 );
        v6 = v28;
        break;
      }
      v12 = v30;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v11[9]);
      KeLeaveCriticalRegion();
    }
    KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
    if ( v27 )
      v11 = (_QWORD *)v11[1];
    else
      v11 = (_QWORD *)*v11;
    PnpDereferenceNotify(P);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Object, 0x4E706E50u);
  return v6;
}
