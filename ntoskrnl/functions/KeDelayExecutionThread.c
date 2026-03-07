NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbp
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  unsigned __int8 v9; // al
  __int64 v10; // r12
  unsigned int v11; // r13d
  NTSTATUS v12; // r15d
  int v13; // ecx
  NTSTATUS v14; // eax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+18h]
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v18 = 0LL;
  v20 = 0;
  if ( !Interval->QuadPart && WaitMode && !Alertable && (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 )
    return KeYieldExecution(0LL);
  v9 = KiCheckWaitNext((__int64)CurrentThread, (__int64)Interval, 1, &v18, &v20);
  v10 = v18;
  v11 = v20;
  v19 = v9;
  while ( 1 )
  {
    result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    v12 = result;
    if ( result )
      break;
    if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v11, v10) )
    {
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v19);
      if ( !Interval->QuadPart )
        return KeYieldExecution(0LL);
      return v12;
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v14 = KiCommitThreadWait(v13, (int)CurrentThread + 320, v11, v10, 0LL);
    if ( v14 != 256 )
    {
      if ( v14 != 258 )
        return v14;
      return v4;
    }
    v19 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v17) = 4;
      else
        v17 = (-1LL << (CurrentIrql + 1)) & 4;
      v10 = v18;
      v11 = v20;
      SchedulerAssist[5] |= v17;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  return result;
}
