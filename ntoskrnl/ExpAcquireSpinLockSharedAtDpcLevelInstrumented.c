char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // r14d
  int v3; // esi
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // ebp
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // r8
  int v10; // r9d
  unsigned __int64 v11; // rax

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
  LOBYTE(v7) = ExpTryAcquireSpinLockShared(a1);
  if ( !(_BYTE)v7 )
  {
    v7 = ExpWaitForSpinLockSharedAndAcquire(v8, v9);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v10 = v7;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v7;
  }
  if ( v4 )
  {
    v11 = __rdtsc();
    LOBYTE(v7) = PerfLogSpinLockAcquire(v3, v11, (int)v11 - v2, v10, InterruptCount, 2);
  }
  return v7;
}
