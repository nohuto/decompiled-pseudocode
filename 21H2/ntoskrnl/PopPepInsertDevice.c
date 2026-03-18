/*
 * XREFs of PopPepInsertDevice @ 0x1403BA108
 * Callers:
 *     PopPepRegisterDevice @ 0x140824268 (PopPepRegisterDevice.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall PopPepInsertDevice(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v4; // rax
  char v5; // di
  struct _KTHREAD *v6; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v9; // edx
  int v10; // r8d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
    PopPepLastCheckedDevice = a2;
  v4 = (__int64 **)qword_140C20A48;
  if ( *(__int64 **)qword_140C20A48 != &PopPepDeviceList )
    __fastfail(3u);
  *a2 = (__int64)&PopPepDeviceList;
  a2[1] = (__int64)v4;
  *v4 = a2;
  qword_140C20A48 = (__int64)a2;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(&PopPepDeviceListLock);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopPepDeviceListLock - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&v6[1].Process;
  v9 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v9;
    p_Process += 96LL;
    if ( v9 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v10 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v6->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v10 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v6, (__int64)&PopPepDeviceListLock, v10);
    goto LABEL_17;
  }
LABEL_21:
  if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&PopPepDeviceListLock, SessionId, 0LL);
  _enable();
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepVetoMaskReadyLock);
  KeAbPostRelease((ULONG_PTR)&PopPepVetoMaskReadyLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
