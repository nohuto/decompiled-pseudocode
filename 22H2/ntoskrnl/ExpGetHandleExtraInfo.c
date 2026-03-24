/*
 * XREFs of ExpGetHandleExtraInfo @ 0x14094CB80
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x1406069E0 (ExpDuplicateSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x14061A23C (ExpFreeHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140665280 (ObpReferenceProcessObjectByHandle.c)
 *     ObpAuditObjectAccess @ 0x1408DCB14 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14063E910 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetHandleExtraInfo(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9

  v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  if ( v2 && *v2 )
    return *v2 + 8 * v3;
  else
    return 0LL;
}
