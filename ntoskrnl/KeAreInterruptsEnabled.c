/*
 * XREFs of KeAreInterruptsEnabled @ 0x140312C60
 * Callers:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeQueryCurrentStackInformationEx @ 0x140312A40 (KeQueryCurrentStackInformationEx.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 *     MiRetryNonPagedAllocation @ 0x140364340 (MiRetryNonPagedAllocation.c)
 *     KiScheduleBugcheckRecovery @ 0x140579014 (KiScheduleBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x140632E70 (MiTrimAllSystemPagableMemory.c)
 *     ViDeadlockCanProceed @ 0x140ABD79A (ViDeadlockCanProceed.c)
 *     VfFastIoCheckState @ 0x140AC8204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140AC82DC (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x140ACA3D8 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACA5AC (VfBeforeCallDriver.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8 (ViKeIrqlLogAndTrimMemory.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADCD90 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140ADCF00 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140ADD0E0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
