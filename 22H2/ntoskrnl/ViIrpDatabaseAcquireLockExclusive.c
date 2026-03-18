/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1405D25E4
 * Callers:
 *     IovpCompleteRequest2 @ 0x140ACDAFC (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x140ACE7E4 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140AD2970 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140AD2BEC (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140AE2818 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE28EC (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
