/*
 * XREFs of PopPepRemoveDevice @ 0x1403B9378
 * Callers:
 *     PopPepUnregisterDevice @ 0x140823318 (PopPepUnregisterDevice.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall PopPepRemoveDevice(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 *v4; // rcx
  struct _KTHREAD *v5; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v8; // edx
  int v9; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepLastCheckedDevice == a1 )
    PopPepLastCheckedDevice = (__int64 *)*a1;
  v3 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v4 = (__int64 *)a1[1], (__int64 *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopPepDeviceListLock);
  v5 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopPepDeviceListLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  _disable();
  p_Process = (__int64)&v5[1].Process;
  v8 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v8;
    p_Process += 96LL;
    if ( v8 >= 6 )
      goto LABEL_15;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_15:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, (ULONG_PTR)&PopPepDeviceListLock, SessionId, 0LL);
    _enable();
    goto LABEL_17;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v9 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v5->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v9 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v5, (__int64)&PopPepDeviceListLock, v9);
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepVetoMaskReadyLock);
  KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
  KeLeaveCriticalRegion();
}
