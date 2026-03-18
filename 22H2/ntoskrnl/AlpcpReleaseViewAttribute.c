/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1407DC078
 * Callers:
 *     AlpcpReleaseAttributes @ 0x140738D44 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140779CD0 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     AlpcpDeleteView @ 0x14071C158 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E9AC (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A344 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073C150 (AlpcpUnlockBlob.c)
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
