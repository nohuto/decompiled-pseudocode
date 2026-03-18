/*
 * XREFs of PopWriteBsdPoInfo @ 0x1403A68B0
 * Callers:
 *     PopBsdUpdateWorker @ 0x140810990 (PopBsdUpdateWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceBsdWriteTime @ 0x1403A693C (PopDiagTraceBsdWriteTime.c)
 *     RtlSetSystemBootStatus @ 0x1407EDAF0 (RtlSetSystemBootStatus.c)
 *     PopQpcTimeInMs @ 0x140A53260 (PopQpcTimeInMs.c)
 */

__int64 __fastcall PopWriteBsdPoInfo(unsigned int a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // eax
  LARGE_INTEGER v9; // [rsp+40h] [rbp+18h] BYREF
  LARGE_INTEGER v10; // [rsp+48h] [rbp+20h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = 7LL;
  v10 = PerformanceCounter;
  if ( a1 == 7 )
  {
LABEL_2:
    v6 = RtlSetSystemBootStatus(v5, a2, 32LL);
    goto LABEL_3;
  }
  if ( a1 != 14 )
  {
    v5 = 16LL;
    if ( a1 != 16 )
    {
      v6 = -1073741811;
      goto LABEL_3;
    }
    goto LABEL_2;
  }
  v6 = RtlSetSystemBootStatus(14LL, a2, 64LL);
  if ( v6 < 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    if ( HIWORD(xmmword_140C5ACE0) != 0xFFFF )
      ++HIWORD(xmmword_140C5ACE0);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
LABEL_3:
  v9 = KeQueryPerformanceCounter(0LL);
  v7 = PopQpcTimeInMs(&v10, &v9);
  return PopDiagTraceBsdWriteTime(a1, v7, (unsigned int)v6);
}
