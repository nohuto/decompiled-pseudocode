PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  unsigned __int8 v6; // al
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax
  struct _FSRTL_PER_STREAM_CONTEXT *v10; // rdi
  _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v15; // al
  void *AePushLock; // rcx

  if ( StreamContext && (StreamContext->Flags2 & 2) != 0 )
  {
    v6 = *((_BYTE *)StreamContext + 7) >> 4;
    if ( v6 < 3u )
    {
      if ( !v6 )
      {
        ExAcquireFastMutex(StreamContext->FastMutex);
LABEL_9:
        v10 = 0LL;
        p_FilterContexts = &StreamContext->FilterContexts;
        Flink = StreamContext->FilterContexts.Flink;
        if ( InstanceId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
              goto LABEL_12;
            Flink = Flink->Flink;
          }
        }
        else if ( OwnerId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId )
              goto LABEL_12;
            Flink = Flink->Flink;
          }
        }
        else if ( Flink != p_FilterContexts )
        {
LABEL_12:
          v10 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
          if ( Flink )
          {
            v13 = Flink->Flink;
            if ( (struct _FSRTL_PER_STREAM_CONTEXT *)v13->Blink != v10
              || (Blink = v10->Links.Blink, (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != v10) )
            {
              __fastfail(3u);
            }
            Blink->Flink = v13;
            v13->Blink = Blink;
          }
        }
        v15 = *((_BYTE *)StreamContext + 7) >> 4;
        if ( v15 < 3u )
        {
          if ( !v15 )
          {
            ExReleaseFastMutex(StreamContext->FastMutex);
            return v10;
          }
        }
        else
        {
          AePushLock = StreamContext->AePushLock;
          if ( AePushLock )
          {
            ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)AePushLock, 0LL);
LABEL_31:
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return v10;
          }
        }
        ExReleasePushLockEx((__int64 *)&StreamContext->PushLock, 0LL);
        goto LABEL_31;
      }
    }
    else
    {
      v7 = StreamContext->AePushLock;
      if ( v7 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)v7, 0LL);
        goto LABEL_9;
      }
    }
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
    goto LABEL_9;
  }
  return 0LL;
}
