/*
 * XREFs of ExMapHandleToPointer @ 0x14061BF20
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     ExMapHandleToPointerEx @ 0x140616AE0 (ExMapHandleToPointerEx.c)
 *     PspThreadDelete @ 0x140619D80 (PspThreadDelete.c)
 *     ObpCloseHandle @ 0x14061B020 (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14061BE80 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObQueryObjectAuditingByHandle @ 0x140664CA0 (ObQueryObjectAuditingByHandle.c)
 *     RtlpFreeHandleForAtom @ 0x14068631C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x14068FC0C (RtlpInsertStringAtom.c)
 *     PspClearProcessThreadCidRefs @ 0x1406C5940 (PspClearProcessThreadCidRefs.c)
 *     ObSetHandleAttributes @ 0x1406F9440 (ObSetHandleAttributes.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14063E910 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140665448 (ExpBlockOnLockedHandleEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2);
  if ( !v3 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( !v4 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(a1, v3);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
