__int64 __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // ebp
  int v3; // r14d
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // esi
  __int64 result; // rax
  int v8; // r9d
  unsigned __int64 v9; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v2 = v5;
  }
  else
  {
    v4 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  result = ExpAcquireSpinLockExclusive(a1);
  v8 = result;
  if ( (_DWORD)result )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v4 )
  {
    v9 = __rdtsc();
    return PerfLogSpinLockAcquire(v3, v9, (int)v9 - v2, v8, InterruptCount, 3);
  }
  return result;
}
