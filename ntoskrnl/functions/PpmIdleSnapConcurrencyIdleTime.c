__int64 __fastcall PpmIdleSnapConcurrencyIdleTime(PKSPIN_LOCK SpinLock, _QWORD *a2, _QWORD *a3)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  volatile signed __int32 *SchedulerAssist; // rcx
  KSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v13; // r8
  int v14; // ett
  __int16 v15; // [rsp+30h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  KxAcquireSpinLock(SpinLock);
  v8 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v8 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v9 = PerformanceCounter.QuadPart - v8;
    v10 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v9;
    SpinLock[v10 + 41] += v9;
  }
  *a2 = SpinLock[3];
  *a3 = SpinLock[41];
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
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
