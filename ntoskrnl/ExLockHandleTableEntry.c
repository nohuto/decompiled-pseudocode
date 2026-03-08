/*
 * XREFs of ExLockHandleTableEntry @ 0x140352148
 * Callers:
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x1406DC0A0 (PspReferenceCidTableEntry.c)
 *     ExDupHandleTable @ 0x140705D54 (ExDupHandleTable.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ExMapHandleToPointer @ 0x1407D80C0 (ExMapHandleToPointer.c)
 *     ObpReferenceObjectByHandle @ 0x1407DF424 (ObpReferenceObjectByHandle.c)
 *     ExpSnapShotHandleTables @ 0x1408A6B82 (ExpSnapShotHandleTables.c)
 *     ObpAuditObjectAccess @ 0x140979114 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x1409F60F4 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140749B5C (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  __int64 v5; // rtt

  do
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) != 0 )
        break;
      if ( !v4 )
        return v4;
      ExpBlockOnLockedHandleEntry(a1, a2, *a2);
    }
    v5 = *a2;
  }
  while ( v5 != _InterlockedCompareExchange64(a2, v4 - 1, v4) );
  LOBYTE(v4) = 1;
  return v4;
}
