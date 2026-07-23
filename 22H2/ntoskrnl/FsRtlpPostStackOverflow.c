/*
 * XREFs of FsRtlpPostStackOverflow @ 0x1404F1354
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x1404F12A0 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x1404F12C0 (FsRtlPostStackOverflow.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KeInsertQueue @ 0x140326130 (KeInsertQueue.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

LONG __fastcall FsRtlpPostStackOverflow(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned __int8 a4)
{
  __int64 v5; // rbx
  _LIST_ENTRY *PoolWithTag; // rax

  v5 = a4;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x73725346u);
  if ( !PoolWithTag )
  {
    if ( !(_BYTE)v5 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&StackOverflowFallbackSerialEvent, Executive, 0, 0, 0LL);
    PoolWithTag = (_LIST_ENTRY *)&StackOverflowFallback;
  }
  PoolWithTag[2].Blink = a1;
  PoolWithTag[3].Flink = a2;
  PoolWithTag[2].Flink = a3;
  PoolWithTag->Flink = 0LL;
  PoolWithTag[1].Flink = (struct _LIST_ENTRY *)FsRtlStackOverflowRead;
  PoolWithTag[1].Blink = PoolWithTag;
  return KeInsertQueue((PRKQUEUE)&FsRtlWorkerQueues + v5, PoolWithTag);
}
