/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1408A6B3A
 * Callers:
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ExpDuplicateSingleHandle @ 0x1407060D0 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407118C4 (ObpReferenceProcessObjectByHandle.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpFreeHandleTableEntry @ 0x1407D8838 (ExpFreeHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x140979114 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1407C3370 (ExpLookupHandleTableEntry.c)
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
