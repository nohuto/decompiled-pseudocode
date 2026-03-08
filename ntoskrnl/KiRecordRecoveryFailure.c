/*
 * XREFs of KiRecordRecoveryFailure @ 0x140578E50
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x140577FAC (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x140578C10 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     KiScheduleBugcheckRecovery @ 0x140579014 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(ULONG a1)
{
  KiBugcheckRecoveryFailureReason = a1;
  IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryFailureReason, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryInformation, (PVOID)0x4C);
}
