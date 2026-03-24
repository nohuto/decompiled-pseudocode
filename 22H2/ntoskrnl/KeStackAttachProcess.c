/*
 * XREFs of KeStackAttachProcess @ 0x14025B970
 * Callers:
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405CEFB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CF6F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     NtProtectVirtualMemory @ 0x1405F8E40 (NtProtectVirtualMemory.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x14062069C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     NtResetWriteWatch @ 0x14063A770 (NtResetWriteWatch.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x140688A74 (PspSetQuotaLimits.c)
 *     NtSetInformationVirtualMemory @ 0x1406FA310 (NtSetInformationVirtualMemory.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     CmpStartCLFSLog @ 0x14077D884 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884EE4 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408D41C0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E0910 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x140908AD4 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x14090AF34 (PspCatchCriticalBreak.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF90 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B0B00 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiAttachProcess @ 0x140207300 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *CurrentThread; // rdi
  PRKAPC_STATE v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = ApcState;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&PROCESS->0 & 0x400) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)PROCESS,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    ApcState->Process = (_KPROCESS *)1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      ApcState = (PRKAPC_STATE)((-1LL << (CurrentIrql + 1)) & 4);
      v2 = (unsigned int)ApcState | SchedulerAssist[5];
      SchedulerAssist[5] = v2;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = 0;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v9[6];
        v9[6] = v12 + 1;
        if ( v12 == -1 )
LABEL_20:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v10[6] - 1;
          v10[6] = v13;
          if ( !v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v15, (__int64)ApcState, v2, (__int64)SchedulerAssist);
      while ( CurrentThread->ThreadLock );
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v11[6];
          v11[6] = v14 + 1;
          if ( v14 == -1 )
            goto LABEL_20;
        }
      }
    }
    if ( CurrentThread->ApcStateIndex )
    {
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0, (__int64)v5);
    }
    else
    {
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0, (__int64)&CurrentThread->600);
      v5->Process = 0LL;
    }
  }
}
