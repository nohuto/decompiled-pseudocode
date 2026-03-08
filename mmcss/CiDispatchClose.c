/*
 * XREFs of CiDispatchClose @ 0x1C000A380
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexDereference @ 0x1C00021B0 (CiTaskIndexDereference.c)
 *     CiThreadDereference @ 0x1C000A400 (CiThreadDereference.c)
 *     CiProcessDereference @ 0x1C000B280 (CiProcessDereference.c)
 */

__int64 __fastcall CiDispatchClose(__int64 a1, IRP *a2)
{
  PFILE_OBJECT FileObject; // rcx
  _QWORD *FsContext; // rsi
  _QWORD *v5; // rcx

  FileObject = a2->Tail.Overlay.CurrentStackLocation->FileObject;
  FsContext = FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext == 1 )
    {
      ExAcquirePushLockExclusiveEx(FsContext + 2, 0LL);
      FsContext[1] = 0LL;
      FsContext[3] = 0LL;
      ExReleasePushLockExclusiveEx(FsContext + 2, 0LL);
      CiProcessDereference(FsContext);
    }
    else
    {
      v5 = FileObject->FsContext;
      if ( *(_DWORD *)FsContext )
        CiTaskIndexDereference(v5);
      else
        CiThreadDereference(v5);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
