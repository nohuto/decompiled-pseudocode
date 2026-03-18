/*
 * XREFs of PopFxAddRefDevice @ 0x1403122C4
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14028C0AC (PopFxQueueWorkOrder.c)
 *     PopFxActivateComponentWorker @ 0x140312240 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140312AD8 (PopFxIdleWorkerTail.c)
 *     PopFxActivateDevice @ 0x140322A80 (PopFxActivateDevice.c)
 *     PoFxAddComponentRelation @ 0x140587700 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140587B20 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405881A0 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140588590 (PoFxRemoveDeviceRelation.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140588C94 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140588D84 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDeviceConstraints @ 0x140589310 (PopFxClearDeviceConstraints.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14058AE84 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140312310 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &Src, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
