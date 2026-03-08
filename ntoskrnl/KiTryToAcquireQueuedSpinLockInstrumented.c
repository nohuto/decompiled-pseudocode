/*
 * XREFs of KiTryToAcquireQueuedSpinLockInstrumented @ 0x140457C4E
 * Callers:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402DE86C (KxTryToAcquireQueuedSpinLock.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1405FE910 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiTryToAcquireQueuedSpinLockInstrumented(signed __int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int InterruptCount; // r11d
  int v4; // ebx
  char v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v6;
  }
  else
  {
    v5 = 0;
  }
  _m_prefetchw(a2);
  if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
  {
    _mm_pause();
    return 0LL;
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v5 )
    {
      v7 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a2, v7, v7 - v4, 0, InterruptCount, 1);
    }
    return 1LL;
  }
}
