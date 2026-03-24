/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x140697744
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1405DE260 (AlpcMessageCleanupProcedure.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1405E2F90 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1405E39F0 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E0AC4 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2);
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
