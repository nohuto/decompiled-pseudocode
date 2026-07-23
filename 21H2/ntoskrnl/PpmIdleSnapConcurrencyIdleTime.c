/*
 * XREFs of PpmIdleSnapConcurrencyIdleTime @ 0x140567040
 * Callers:
 *     PpmParkSnapNodeIdleTime @ 0x14057DDB8 (PpmParkSnapNodeIdleTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 */

void __fastcall PpmIdleSnapConcurrencyIdleTime(PKSPIN_LOCK SpinLock, _QWORD *a2, _QWORD *a3)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  KSPIN_LOCK v7; // rax
  KSPIN_LOCK v8; // rcx
  __int64 v9; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  KxAcquireSpinLock(SpinLock);
  v7 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v7 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v8 = PerformanceCounter.QuadPart - v7;
    v9 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v8;
    SpinLock[v9 + 4] += v8;
  }
  *a2 = SpinLock[3];
  *a3 = SpinLock[4];
  KxReleaseSpinLock(SpinLock);
  if ( (v10 & 0x200) != 0 )
    _enable();
}
