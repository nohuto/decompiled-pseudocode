__int64 __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // ebp
  int v4; // r14d
  int v5; // r9d
  int v6; // edi
  char v7; // si
  unsigned __int64 v8; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  v5 = 0;
  v6 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v7 = 1;
    result = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = result;
  }
  else
  {
    v7 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    result = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v5 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v7 )
  {
    v8 = __rdtsc();
    return PerfLogSpinLockAcquire(v6, v8, (int)v8 - v4, v5, InterruptCount, 0);
  }
  return result;
}
