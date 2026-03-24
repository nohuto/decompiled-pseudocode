/*
 * XREFs of PpmIdleSnapConcurrency @ 0x14022AF70
 * Callers:
 *     PpmParkSnapNodeStatistics @ 0x14022B018 (PpmParkSnapNodeStatistics.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

void __fastcall PpmIdleSnapConcurrency(PKSPIN_LOCK SpinLock, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rbp
  KSPIN_LOCK v5; // rax
  KSPIN_LOCK v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  size_t v9; // r8
  __int16 v10; // [rsp+20h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  KxAcquireSpinLock(SpinLock);
  v5 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v5 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v6 = PerformanceCounter.QuadPart - v5;
    v7 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v6;
    SpinLock[v7 + 4] += v6;
  }
  v8 = *(void **)a2;
  v9 = 8LL * *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a2 + 24) = SpinLock[3];
  memmove(v8, SpinLock + 4, v9);
  KxReleaseSpinLock(SpinLock);
  if ( (v10 & 0x200) != 0 )
    _enable();
}
