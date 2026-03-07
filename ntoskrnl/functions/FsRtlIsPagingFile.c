LOGICAL __stdcall FsRtlIsPagingFile(PFILE_OBJECT FileObject)
{
  _BYTE *FsContext; // rax
  LOGICAL v2; // ecx

  FsContext = FileObject->FsContext;
  v2 = 0;
  if ( FsContext )
    return (FsContext[6] & 8) != 0;
  return v2;
}
