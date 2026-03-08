/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x14078CD78
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140717C30 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1407CA744 (AlpcpReleaseAttributes.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x1407155FC (AlpcpDeleteView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 */

unsigned __int64 __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v4);
  if ( a2 )
    AlpcpDeleteView(BugCheckParameter2);
  return AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
