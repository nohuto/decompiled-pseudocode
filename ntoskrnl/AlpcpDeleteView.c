/*
 * XREFs of AlpcpDeleteView @ 0x1407155FC
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSectionView @ 0x140712140 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140714E74 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSectionView @ 0x14077A830 (NtAlpcDeleteSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x14078CD78 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140715630 (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
