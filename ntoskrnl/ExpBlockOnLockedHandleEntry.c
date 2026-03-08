/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x140749B5C
 * Callers:
 *     ExLockHandleTableEntry @ 0x140352148 (ExLockHandleTableEntry.c)
 *     ExFastReferenceHandleTableEntry @ 0x14035A944 (ExFastReferenceHandleTableEntry.c)
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x1406DC0A0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ExEnumHandleTable @ 0x14070F670 (ExEnumHandleTable.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ExSweepHandleTable @ 0x1407D8110 (ExSweepHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
