/*
 * XREFs of PpmIdleSnapConcurrency @ 0x1402DAEF8
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x140233FD0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmIdleSnapConcurrency(PKSPIN_LOCK SpinLock, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rbp
  volatile signed __int32 *SchedulerAssist; // rcx
  KSPIN_LOCK v6; // rax
  KSPIN_LOCK v7; // rdx
  __int64 v8; // rax
  void *v9; // rcx
  size_t v10; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v13; // r8
  int v14; // ett
  __int16 v15; // [rsp+20h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  KxAcquireSpinLock(SpinLock);
  v6 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v6 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v7 = PerformanceCounter.QuadPart - v6;
    v8 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v7;
    SpinLock[v8 + 41] += v7;
  }
  v9 = *(void **)a2;
  v10 = 8LL * *(unsigned int *)(a2 + 48);
  *(_QWORD *)(a2 + 24) = SpinLock[3];
  memmove(v9, SpinLock + 41, v10);
  result = KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  if ( (v15 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      _m_prefetchw(v13);
      LODWORD(result) = *v13;
      do
      {
        v14 = result;
        result = (unsigned int)_InterlockedCompareExchange(v13, result & 0xFFDFFFFF, result);
      }
      while ( v14 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return result;
}
