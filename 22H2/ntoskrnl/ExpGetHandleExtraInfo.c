/*
 * XREFs of ExpGetHandleExtraInfo @ 0x1408AB9AA
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     ExpFreeHandleTableEntry @ 0x1407408A8 (ExpFreeHandleTableEntry.c)
 *     ExpDuplicateSingleHandle @ 0x1407B0A08 (ExpDuplicateSingleHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD8F4 (ObpReferenceProcessObjectByHandle.c)
 *     ObpAuditObjectAccess @ 0x14097C1C4 (ObpAuditObjectAccess.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1406E69E0 (ExpLookupHandleTableEntry.c)
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
