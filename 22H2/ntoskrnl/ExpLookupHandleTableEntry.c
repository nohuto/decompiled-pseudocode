/*
 * XREFs of ExpLookupHandleTableEntry @ 0x14063E910
 * Callers:
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     ExDupHandleTable @ 0x1406065C0 (ExDupHandleTable.c)
 *     ExMapHandleToPointer @ 0x14061BF20 (ExMapHandleToPointer.c)
 *     PspReferenceCidTableEntry @ 0x140625E70 (PspReferenceCidTableEntry.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140665280 (ObpReferenceProcessObjectByHandle.c)
 *     ExEnumHandleTable @ 0x140665730 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x140665850 (ExpGetNextHandleTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 *     ExpGetHandleExtraInfo @ 0x14094CB80 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14094CBC8 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x14094CC80 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
    return *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1) + 4 * (v2 & 0x3FF);
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF)) + 4 * (v2 & 0x3FF);
  return v3 + 4 * v2;
}
