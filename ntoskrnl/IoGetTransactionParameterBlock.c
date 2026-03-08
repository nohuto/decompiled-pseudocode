/*
 * XREFs of IoGetTransactionParameterBlock @ 0x1402C3D50
 * Callers:
 *     IopTrackLink @ 0x140795688 (IopTrackLink.c)
 * Callees:
 *     <none>
 */

PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK *FileObjectExtension; // rax

  FileObjectExtension = (PTXN_PARAMETER_BLOCK *)FileObject->FileObjectExtension;
  if ( !FileObjectExtension || FileObjectExtension == IopRevocationExtension )
    return 0LL;
  else
    return FileObjectExtension[1];
}
