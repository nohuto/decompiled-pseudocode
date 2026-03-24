/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1405A260C
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409D05F0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409D124C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D58A0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D5B24 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409E0858 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E092C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
