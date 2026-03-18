/*
 * XREFs of KiRecordRecoveryFailure @ 0x14057B360
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14057A4BC (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x14057B120 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     KiScheduleBugcheckRecovery @ 0x14057B524 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(ULONG a1)
{
  KiBugcheckRecoveryFailureReason = a1;
  IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryFailureReason, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryInformation, (PVOID)0x4C);
}
