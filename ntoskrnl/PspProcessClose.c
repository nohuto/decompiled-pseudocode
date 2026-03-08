/*
 * XREFs of PspProcessClose @ 0x14076BF20
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1409B0DEC (PspRundownProcess.c)
 */

char __fastcall PspProcessClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v7; // rsi
  signed __int32 v8; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( a4 > 1 || (LODWORD(v4) = *(_DWORD *)(a2 + 1520), (_DWORD)v4) )
  {
    if ( (*(_DWORD *)(a2 + 2172) & 0x8000) == 0 )
    {
      v4 = *(_UNKNOWN ***)(a2 + 1352);
      if ( *(_UNKNOWN ***)(a1 + 1088) == v4 )
      {
        LODWORD(v4) = *(_DWORD *)(a1 + 1124);
        if ( ((unsigned int)v4 & 0x40000008) != 0 )
          LOBYTE(v4) = PsTerminateProcess(a2, 3221225738LL);
      }
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (volatile signed __int64 *)(a2 + 1080);
    v8 = 0x2000000;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    if ( !*(_DWORD *)(a2 + 1520) )
    {
      _m_prefetchw((const void *)(a2 + 1124));
      v8 = _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 8u);
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    LOBYTE(v4) = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (v8 & 0x2000000) == 0 )
      LOBYTE(v4) = PspRundownProcess((PVOID)a2);
  }
  return (char)v4;
}
