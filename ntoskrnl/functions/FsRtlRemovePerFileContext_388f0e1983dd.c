PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbp
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rbx
  struct _FSRTL_PER_FILE_CONTEXT *v11; // rcx
  struct _FSRTL_PER_FILE_CONTEXT **Blink; // rax

  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v5 + 16);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v5, 0LL);
  Flink = *v7;
  v10 = 0LL;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_6;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
LABEL_6:
    v10 = Flink;
    if ( Flink )
    {
      v11 = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink->Blink != Flink
        || (Blink = (struct _FSRTL_PER_FILE_CONTEXT **)Flink->Links.Blink, *Blink != v10) )
      {
        __fastfail(3u);
      }
      *Blink = v11;
      v11->Links.Blink = (struct _LIST_ENTRY *)Blink;
    }
  }
  ExReleaseAutoExpandPushLockExclusive(v6, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
