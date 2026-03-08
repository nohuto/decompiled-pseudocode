/*
 * XREFs of IoReplaceFileObjectName @ 0x14085F7F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReplaceFileObjectName(PFILE_OBJECT FileObject, PWSTR NewFileName, USHORT FileNameLength)
{
  USHORT MaximumLength; // bx
  size_t v5; // rdi
  wchar_t *Pool2; // rbp
  wchar_t *v8; // rcx
  wchar_t *Buffer; // rcx
  USHORT v11; // ax

  MaximumLength = FileObject->FileName.MaximumLength;
  v5 = FileNameLength;
  if ( FileNameLength <= MaximumLength )
  {
LABEL_8:
    Buffer = FileObject->FileName.Buffer;
    FileObject->FileName.Length = v5;
    memset(Buffer, 0, MaximumLength);
    memmove(FileObject->FileName.Buffer, NewFileName, v5);
    return 0;
  }
  MaximumLength = 56;
  if ( FileNameLength >= 0x38u )
  {
    MaximumLength = 120;
    if ( FileNameLength >= 0x78u )
    {
      v11 = 248;
      if ( FileNameLength >= 0xF8u )
        v11 = FileNameLength;
      MaximumLength = v11;
    }
  }
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, MaximumLength, 1833856841LL);
  if ( Pool2 )
  {
    v8 = FileObject->FileName.Buffer;
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    FileObject->FileName.Buffer = Pool2;
    FileObject->FileName.MaximumLength = MaximumLength;
    goto LABEL_8;
  }
  return -1073741670;
}
