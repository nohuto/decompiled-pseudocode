NTSTATUS __stdcall FsRtlChangeBackingFileObject(
        PFILE_OBJECT CurrentFileObject,
        PFILE_OBJECT NewFileObject,
        FSRTL_CHANGE_BACKING_TYPE ChangeBackingType,
        ULONG Flags)
{
  int v4; // r8d
  __int32 v6; // r8d

  if ( Flags )
    return -1073741582;
  if ( ChangeBackingType == ChangeDataControlArea )
  {
    v4 = 1;
    return MmChangeSectionBackingFile(CurrentFileObject, NewFileObject, v4);
  }
  v6 = ChangeBackingType - 1;
  if ( !v6 )
  {
    v4 = 2;
    return MmChangeSectionBackingFile(CurrentFileObject, NewFileObject, v4);
  }
  if ( v6 == 1 )
    return CcChangeBackingFileObject(CurrentFileObject, NewFileObject);
  else
    return -1073741583;
}
