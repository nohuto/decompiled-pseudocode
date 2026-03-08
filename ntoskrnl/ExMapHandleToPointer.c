/*
 * XREFs of ExMapHandleToPointer @ 0x1407D80C0
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407118C4 (ObpReferenceProcessObjectByHandle.c)
 *     PspThreadDelete @ 0x14075E4B0 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x140776CE8 (ExMapHandleToPointerEx.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407D7FB0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1407D8910 (ObSetHandleAttributes.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407D8D38 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x1407D935C (PspClearProcessThreadCidRefs.c)
 *     RtlpInsertStringAtom @ 0x1407DBB30 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x1407DC658 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x140352148 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1407C3370 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  if ( (a2 & 0x3FC) != 0 && (v2 = ExpLookupHandleTableEntry(a1, a2)) != 0 )
    return v2 & -(__int64)(ExLockHandleTableEntry(v3, (_QWORD *)v2) != 0);
  else
    return 0LL;
}
