/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1405D0134
 * Callers:
 *     IovpCompleteRequest2 @ 0x140AC9AFC (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x140ACA7E4 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140ACE970 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140ACEBEC (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140ADE818 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
