/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x14023A530
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14023A620 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 *     IoGetFileObjectFilterContext @ 0x14023AAB0 (IoGetFileObjectFilterContext.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v7; // rbx
  ULONG_PTR v8; // rcx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *i; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !FileObject )
    return 0LL;
  IoGetFileObjectFilterContext(FileObject, &BugCheckParameter2, 0LL);
  if ( !BugCheckParameter2 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = BugCheckParameter2;
  v7 = 0LL;
  v8 = BugCheckParameter2;
  --CurrentThread->KernelApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v8, 0LL);
  if ( InstanceId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 16);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 16);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_8:
        v7 = i;
        goto LABEL_9;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 16);
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)(v6 + 16);
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_8;
    }
  }
  else if ( *(_QWORD *)(v6 + 16) != v6 + 16 )
  {
    v7 = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v6 + 16);
LABEL_9:
    if ( v7 )
    {
      Flink = v7->Links.Flink;
      if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v7->Links.Flink->Blink != v7
        || (Blink = v7->Links.Blink, (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Flink != v7) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  ExReleaseAutoExpandPushLockExclusive(v6, 0LL);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v7;
}
