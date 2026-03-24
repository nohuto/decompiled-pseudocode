/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x140739A78
 * Callers:
 *     PnpDeviceEventWorker @ 0x140634FF0 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x14071B5F8 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x14071B694 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14073A584 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r14
  void *v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // rbx
  PVOID **v14; // rbp
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v18; // [rsp+20h] [rbp-78h] BYREF
  int v19; // [rsp+28h] [rbp-70h] BYREF
  __int128 v20; // [rsp+2Ch] [rbp-6Ch]
  __int128 v21; // [rsp+3Ch] [rbp-5Ch]
  int v22; // [rsp+4Ch] [rbp-4Ch]
  __int64 v23; // [rsp+50h] [rbp-48h]

  v3 = *a1;
  v22 = 0;
  v4 = *(_OWORD *)a2;
  v18 = 0;
  v20 = v3;
  SessionIdFromSymbolicName = -1;
  v21 = v4;
  v19 = 3145729;
  v23 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v8 = *a2 + a2[1] + a2[2] + a2[3];
  v9 = v8 / 0xD;
  v10 = v8 % 0xD;
  v11 = &PnpDeviceClassNotifyList;
  v12 = (__int64 *)((char *)&PnpDeviceClassNotifyList + 16 * v10);
  v13 = *v12;
  while ( (__int64 *)v13 != v12 )
  {
    v14 = (PVOID **)v13;
    CurrentServerSilo = PsGetCurrentServerSilo((__int64)v11, v9);
    if ( *(_DWORD *)(v13 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*(_WORD *)(v13 + 56);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 72), 1u);
    if ( (SessionIdFromSymbolicName == -1 || *(_DWORD *)(v13 + 20) == SessionIdFromSymbolicName)
      && !*(_BYTE *)(v13 + 58)
      && ((_DWORD *)(v13 + 80) == a2 || RtlCompareMemory((const void *)(v13 + 80), a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v13, (__int64)&v19, &v18);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 72));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v13 = *(_QWORD *)v13;
    PnpDereferenceNotify(v14);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
