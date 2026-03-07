__int64 VrpIncrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // esi
  __int64 v2; // rax
  __int64 v3; // rcx
  signed __int8 v4; // cf
  __int64 v5; // rdi
  char v6; // bl
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((__int64)&VrpActiveSilosLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&VrpActiveSilosLock, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&VrpActiveSilosLock, v2, (__int64)&VrpActiveSilosLock);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  if ( VrpNumActiveSilos || (v8[0] = 917516LL, v8[1] = L"189900", v1 = CmRegisterInternalCallback(v3, v8), v1 >= 0) )
    ++VrpNumActiveSilos;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
