__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int128 v7; // xmm0
  __int64 *v8; // r14
  __int64 v9; // rbx
  void *v10; // rbp
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v14; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[40]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]

  v3 = *(_OWORD *)a2;
  v14 = 0;
  memset(v15, 0, sizeof(v15));
  SessionIdFromSymbolicName = -1;
  *(_DWORD *)v15 = 3145729;
  v16 = a3;
  v7 = *a1;
  *(_OWORD *)&v15[20] = v3;
  *(_OWORD *)&v15[4] = v7;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v8 = (__int64 *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v9 = *v8;
  while ( (__int64 *)v9 != v8 )
  {
    v10 = (void *)v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *(_DWORD *)(v9 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*(_WORD *)(v9 + 56);
    ExReleaseFastMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v9 + 72), 1u);
    if ( (SessionIdFromSymbolicName == -1 || *(_DWORD *)(v9 + 20) == SessionIdFromSymbolicName)
      && !*(_BYTE *)(v9 + 58)
      && ((_DWORD *)(v9 + 80) == a2 || RtlCompareMemory((const void *)(v9 + 80), a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v9, (__int64)v15, &v14);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 72));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v9 = *(_QWORD *)v9;
    PnpDereferenceNotify(v10);
  }
  ExReleaseFastMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
