/*
 * XREFs of KeAreInterruptsEnabled @ 0x14022EBF0
 * Callers:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     KeAreAllApcsDisabled @ 0x140215020 (KeAreAllApcsDisabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x14022E9D0 (KeQueryCurrentStackInformationEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3508 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     KiScheduleBugcheckRecovery @ 0x14057B524 (KiScheduleBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x140635300 (MiTrimAllSystemPagableMemory.c)
 *     ViDeadlockCanProceed @ 0x140AC179A (ViDeadlockCanProceed.c)
 *     VfFastIoCheckState @ 0x140ACC204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACC2DC (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x140ACE3D8 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACE5AC (VfBeforeCallDriver.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD6DA8 (ViKeIrqlLogAndTrimMemory.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140AE0D90 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140AE0F00 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE10E0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
