/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1405A254C
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409D0600 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409D125C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D58B0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D5B34 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409E0868 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E093C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
