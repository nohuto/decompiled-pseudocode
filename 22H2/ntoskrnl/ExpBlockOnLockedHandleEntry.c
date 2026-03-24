/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x140665448
 * Callers:
 *     ExLockHandleTableEntry @ 0x1402C8EF0 (ExLockHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     ExMapHandleToPointer @ 0x14061BF20 (ExMapHandleToPointer.c)
 *     PspReferenceCidTableEntry @ 0x140625E70 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     ExEnumHandleTable @ 0x140665730 (ExEnumHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402F4BA0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
