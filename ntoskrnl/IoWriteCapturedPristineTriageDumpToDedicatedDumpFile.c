/*
 * XREFs of IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14054ECE4
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140412530 (ZwQueryInformationFile.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 IoWriteCapturedPristineTriageDumpToDedicatedDumpFile()
{
  __int64 v0; // rdi
  __int64 v1; // rdi
  NTSTATUS Status; // ebx
  void *v3; // rcx
  __int64 v4; // r9
  struct _MDL *Mdl; // rax
  struct _FILE_OBJECT *v6; // rsi
  struct _MDL *v7; // rdi
  void *v8; // rcx
  PVOID Object; // [rsp+48h] [rbp+7h] BYREF
  struct _KEVENT v11; // [rsp+50h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+27h] BYREF
  __int128 FileInformation; // [rsp+78h] [rbp+37h] BYREF
  __int64 v14; // [rsp+88h] [rbp+47h]

  v0 = KiPristineTriageDump;
  v14 = 0LL;
  memset(&v11, 0, sizeof(v11));
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( !KiPristineTriageDump )
  {
    if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) != 4 || (v1 = *(_QWORD *)(CrashdmpDumpBlock + 1328)) == 0 )
      return (unsigned int)-1073741670;
    v0 = v1 - 0x2000;
  }
  if ( (void *)(v0 + 0x2000) == IoPreparedTriageDumpData )
  {
    v3 = *(void **)(CrashdmpDumpBlock + 1352);
    if ( v3 )
    {
      Object = 0LL;
      Status = ObReferenceObjectByHandle(v3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( Status >= 0 )
      {
        Mdl = (struct _MDL *)IopAllocateMdl(v0, *(_DWORD *)(v0 + 8196), 0, v4, 0LL, 0);
        v6 = (struct _FILE_OBJECT *)Object;
        v7 = Mdl;
        if ( Mdl )
        {
          MmBuildMdlForNonPagedPool(Mdl);
          v11.Header.WaitListHead.Blink = &v11.Header.WaitListHead;
          LOWORD(v11.Header.Lock) = 0;
          v11.Header.WaitListHead.Flink = &v11.Header.WaitListHead;
          v11.Header.Size = 6;
          v11.Header.SignalState = 0;
          v8 = *(void **)(CrashdmpDumpBlock + 1352);
          Object = 0LL;
          if ( ZwQueryInformationFile(v8, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) == 259 )
            KeWaitForSingleObject(&v6->Event, Executive, 0, 0, 0LL);
          Status = IoSynchronousPageWriteEx(v6, v7, &Object, &v11, 0, 0LL, &IoStatusBlock);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&v11, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          IoFreeMdl(v7);
        }
        else
        {
          Status = -1073741670;
        }
        ObfDereferenceObjectWithTag(v6, 0x746C6644u);
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)Status;
}
