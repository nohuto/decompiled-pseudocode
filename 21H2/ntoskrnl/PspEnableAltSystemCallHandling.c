/*
 * XREFs of PspEnableAltSystemCallHandling @ 0x140907D78
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspEnableAltSystemCallHandling(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int32 **v8; // rsi
  volatile signed __int32 *i; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)qword_140CFC7A0 < 2 )
    return 3221225473LL;
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 1080);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( (*(_DWORD *)(a1 + 2172) & 0x2000001) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v4, v5, v6);
    return 3221225473LL;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2172), 0x2000000u);
  v8 = (volatile signed __int32 **)(a1 + 1504);
  for ( i = *v8; i != (volatile signed __int32 *)v8; i = *(volatile signed __int32 **)i )
    _interlockedbittestandset(i - 314, 0x1Du);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  return 0LL;
}
