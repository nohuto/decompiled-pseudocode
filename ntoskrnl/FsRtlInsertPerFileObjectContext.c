/*
 * XREFs of FsRtlInsertPerFileObjectContext @ 0x14023A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14023A620 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 *     IoGetFileObjectFilterContext @ 0x14023AAB0 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x14023AD2C (IoChangeFileObjectFilterContext.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlInsertPerFileObjectContext(PFILE_OBJECT FileObject, PFSRTL_PER_FILEOBJECT_CONTEXT Ptr)
{
  NTSTATUS result; // eax
  _OWORD *Pool2; // rax
  __int64 v6; // r8
  void *v7; // rbx
  _OWORD *v8; // rdx
  _QWORD *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !FileObject )
    return -1073741811;
  result = IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 1);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2 )
      goto LABEL_6;
    Pool2 = (_OWORD *)ExAllocatePool2(66LL, 32LL, 1480806214LL);
    BugCheckParameter2 = (ULONG_PTR)Pool2;
    v7 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    LOBYTE(v6) = 1;
    *Pool2 = 0LL;
    *(_QWORD *)Pool2 = 0LL;
    v8 = Pool2;
    v9 = Pool2 + 1;
    v9[1] = v9;
    *v9 = v9;
    if ( (int)IoChangeFileObjectFilterContext(FileObject, v8, v6) >= 0
      || (ExFreePoolWithTag(v7, 0),
          IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL),
          BugCheckParameter2) )
    {
LABEL_6:
      CurrentThread = KeGetCurrentThread();
      v11 = BugCheckParameter2;
      v12 = BugCheckParameter2;
      --CurrentThread->KernelApcDisable;
      ExAcquireAutoExpandPushLockExclusive(v12, 0LL);
      v13 = (struct _LIST_ENTRY *)(v11 + 16);
      v14 = *(struct _LIST_ENTRY **)(v11 + 16);
      if ( v14->Blink != (struct _LIST_ENTRY *)(v11 + 16) )
        __fastfail(3u);
      Ptr->Links.Flink = v14;
      Ptr->Links.Blink = v13;
      v14->Blink = &Ptr->Links;
      v13->Flink = &Ptr->Links;
      ExReleaseAutoExpandPushLockExclusive(v11, 0LL);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
