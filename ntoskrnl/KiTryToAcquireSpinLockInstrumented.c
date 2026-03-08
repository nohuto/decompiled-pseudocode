/*
 * XREFs of KiTryToAcquireSpinLockInstrumented @ 0x140457EEC
 * Callers:
 *     KdPollBreakIn @ 0x1402C7DA0 (KdPollBreakIn.c)
 *     KxTryToAcquireSpinLock @ 0x14036B144 (KxTryToAcquireSpinLock.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x1403C7F10 (KeTryToAcquireSpinLockAtDpcLevel.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1405FE910 (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiTryToAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int InterruptCount; // r10d
  int v3; // r11d
  char v4; // bl
  char v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v3 = 0;
  v4 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v3 = v6;
  }
  else
  {
    v5 = 0;
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v4 = 0;
    _mm_pause();
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v5 )
    {
      v7 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a1, v7, v7 - v3, 0, InterruptCount, 0);
    }
  }
  return v4;
}
