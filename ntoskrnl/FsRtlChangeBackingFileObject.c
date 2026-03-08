/*
 * XREFs of FsRtlChangeBackingFileObject @ 0x1403D0BE0
 * Callers:
 *     <none>
 * Callees:
 *     MmChangeSectionBackingFile @ 0x1402F34E4 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x140532D48 (CcChangeBackingFileObject.c)
 */

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
