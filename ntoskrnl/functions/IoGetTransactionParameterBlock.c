PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK *FileObjectExtension; // rax

  FileObjectExtension = (PTXN_PARAMETER_BLOCK *)FileObject->FileObjectExtension;
  if ( !FileObjectExtension || FileObjectExtension == IopRevocationExtension )
    return 0LL;
  else
    return FileObjectExtension[1];
}
