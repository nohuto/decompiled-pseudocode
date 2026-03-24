/*
 * XREFs of KeUnstackDetachProcess @ 0x140207580
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
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF90 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B0B00 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess(ApcState, 0LL);
  }
}
