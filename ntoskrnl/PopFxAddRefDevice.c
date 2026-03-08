/*
 * XREFs of PopFxAddRefDevice @ 0x140305F38
 * Callers:
 *     PopFxActivateDevice @ 0x140202154 (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x1402B8CF4 (PopFxQueueWorkOrder.c)
 *     PopFxActivateComponentWorker @ 0x140305EB4 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140306748 (PopFxIdleWorkerTail.c)
 *     PoFxAddComponentRelation @ 0x1405851D0 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405855F0 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140585C70 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140586060 (PoFxRemoveDeviceRelation.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140586764 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140586854 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x140586DE0 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140588954 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
