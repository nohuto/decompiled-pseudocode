bool __fastcall PsTerminateMinimalProcess(PRKPROCESS PROCESS, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *p_Lock; // rsi
  unsigned int v6; // ebp
  signed __int32 v7; // r14d
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  p_Lock = (volatile signed __int64 *)&PROCESS[1].Header.Lock;
  v6 = 8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PROCESS[1], 0LL);
  if ( !LODWORD(PROCESS[1].ActiveProcessors.StaticBitmap[8]) )
  {
    v6 = 33554440;
    if ( *(_DWORD *)&PROCESS[1].Spare2[11] == 259 )
      *(_DWORD *)&PROCESS[1].Spare2[11] = a2;
  }
  _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
  v7 = _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, v6);
  if ( (_InterlockedExchangeAdd64(p_Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = (v6 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return PspRundownSingleProcess(PROCESS, 1);
  return result;
}
