BOOLEAN __stdcall IoIsFileObjectIgnoringSharing(PFILE_OBJECT FileObject)
{
  _DWORD *FileObjectExtension; // rax
  BOOLEAN v2; // cl

  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0;
  v2 = 1;
  if ( (*FileObjectExtension & 1) == 0 )
    return 0;
  return v2;
}
