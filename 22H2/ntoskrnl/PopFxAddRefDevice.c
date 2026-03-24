/*
 * XREFs of PopFxAddRefDevice @ 0x14025FFDC
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14025FF40 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140260720 (PopFxIdleWorkerTail.c)
 *     PopFxActivateDevice @ 0x14036F190 (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x140380F98 (PopFxQueueWorkOrder.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569350 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405695C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x140569D04 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14056B4D4 (PopFxIssueDirectedPowerTransition.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408E45A0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140260020 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x14056932C (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
