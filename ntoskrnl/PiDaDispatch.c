/*
 * XREFs of PiDaDispatch @ 0x14076AE40
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PiDqDispatch @ 0x140745C20 (PiDqDispatch.c)
 */

__int64 __fastcall PiDaDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  IRP *v3; // r8
  __int64 v4; // rbp
  PFILE_OBJECT FileObject; // rax
  unsigned __int64 FsContext; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  wchar_t *Buffer; // rdi
  void *v11; // rdx
  unsigned __int64 v12; // rax
  wchar_t *v13; // rcx
  __int64 v14; // r11
  int v15; // r10d
  int v16; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  v4 = a1;
  FileObject = CurrentStackLocation->FileObject;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
    {
      v11 = 0LL;
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (&IrpHandlingTable)[v12];
        v14 = (char *)Buffer - (char *)v13;
        do
        {
          v15 = *(wchar_t *)((char *)v13 + v14);
          v16 = *v13 - v15;
          if ( v16 )
            break;
          ++v13;
        }
        while ( v15 );
        if ( !v16 )
          break;
        v11 = (char *)v11 + 1;
        v12 += 3LL;
        if ( v12 >= 15 )
          goto LABEL_13;
      }
      if ( v11 != (void *)-1LL )
      {
        a1 = v4;
        CurrentStackLocation->FileObject->FsContext = v11;
        v7 = 3LL * (_QWORD)v11;
        a2 = v3;
        return ((unsigned int (__fastcall *)(__int64, IRP *, IRP *))*(&funcs_14076AE88 + v7))(a1, a2, v3);
      }
    }
LABEL_13:
    v8 = -1073741811;
    v3->IoStatus.Status = -1073741811;
LABEL_17:
    IofCompleteRequest(v3, 0);
    return v8;
  }
  FsContext = (unsigned __int64)FileObject->FsContext;
  if ( FsContext >= 5 )
  {
    v8 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    goto LABEL_17;
  }
  v7 = 3 * FsContext;
  return ((unsigned int (__fastcall *)(__int64, IRP *, IRP *))*(&funcs_14076AE88 + v7))(a1, a2, v3);
}
