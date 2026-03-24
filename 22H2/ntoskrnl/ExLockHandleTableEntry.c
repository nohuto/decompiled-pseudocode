/*
 * XREFs of ExLockHandleTableEntry @ 0x1402C8EF0
 * Callers:
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExDupHandleTable @ 0x1406065C0 (ExDupHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x140625E70 (PspReferenceCidTableEntry.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140665280 (ObpReferenceProcessObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 *     ObpAuditObjectAccess @ 0x1408DCB14 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x14094C8F4 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14094CC80 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140665448 (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, signed __int64 *a2)
{
  signed __int64 v4; // r8

  while ( 1 )
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) == 0 )
        break;
      if ( v4 == _InterlockedCompareExchange64(a2, v4 - 1, v4) )
        return 1;
    }
    if ( !v4 )
      break;
    ExpBlockOnLockedHandleEntry(a1, a2);
  }
  return 0;
}
