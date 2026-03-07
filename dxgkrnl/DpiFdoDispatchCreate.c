__int64 __fastcall DpiFdoDispatchCreate(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v3; // rbx
  unsigned int Status; // esi
  PFILE_OBJECT FileObject; // r8
  __int64 v7; // rdx
  const wchar_t *v8; // rcx
  UNICODE_STRING *p_FileName; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = *(_QWORD *)(a1 + 64);
  Status = 0;
  FileObject = CurrentStackLocation->FileObject;
  if ( FileObject )
  {
    v11 = 0LL;
    v7 = 0x7FFFLL;
    v8 = L"\\VGPUCreator";
    while ( *v8 )
    {
      ++v8;
      if ( !--v7 )
        goto LABEL_7;
    }
    *((_QWORD *)&v11 + 1) = L"\\VGPUCreator";
    LOWORD(v11) = 2 * (0x7FFF - v7);
    WORD1(v11) = v11 + 2;
LABEL_7:
    p_FileName = &FileObject->FileName;
    LOBYTE(FileObject) = 1;
    if ( RtlFindUnicodeSubstring(p_FileName, &v11, FileObject) )
      goto LABEL_13;
  }
  if ( !*(_BYTE *)(v3 + 1160) )
  {
    if ( *(_BYTE *)(v3 + 1159) )
    {
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v3 + 160), a2);
      Status = a2->IoStatus.Status;
    }
    else if ( a2->RequestorMode || (CurrentStackLocation->Flags & 1) != 0 )
    {
      if ( !*(_BYTE *)(v3 + 58) )
      {
        Status = -1073741790;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    if ( *(_BYTE *)(v3 + 58) )
LABEL_13:
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 5656));
  }
LABEL_14:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
