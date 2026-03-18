/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x140602294
 * Callers:
 *     IovpCompleteRequest2 @ 0x140A8C1BC (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x140A8CEB8 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140A90FE0 (VfPendingMoreProcessingRequired.c)
 *     VfPacketDereference @ 0x140A9C0A0 (VfPacketDereference.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140AA5AF8 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
