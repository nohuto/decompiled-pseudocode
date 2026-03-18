/*
 * XREFs of AlpcpDeleteView @ 0x14071C158
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A76C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A8C8 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSectionView @ 0x1407BA080 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1407CB5C0 (NtAlpcDeleteSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DC078 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14071C18C (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E9AC (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
