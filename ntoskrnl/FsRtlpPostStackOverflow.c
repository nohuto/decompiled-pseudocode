/*
 * XREFs of FsRtlpPostStackOverflow @ 0x14053D044
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x14053CF90 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x14053CFB0 (FsRtlPostStackOverflow.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KeInsertQueue @ 0x1402F3300 (KeInsertQueue.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

LONG __fastcall FsRtlpPostStackOverflow(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned __int8 a4)
{
  __int64 v5; // rbx
  struct _LIST_ENTRY *Pool2; // rax

  v5 = a4;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(66LL, 56LL, 1936872262LL);
  if ( !Pool2 )
  {
    if ( !(_BYTE)v5 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&StackOverflowFallbackSerialEvent, Executive, 0, 0, 0LL);
    Pool2 = (struct _LIST_ENTRY *)&StackOverflowFallback;
  }
  Pool2[2].Blink = a1;
  Pool2[3].Flink = a2;
  Pool2[2].Flink = a3;
  Pool2->Flink = 0LL;
  Pool2[1].Flink = (struct _LIST_ENTRY *)FsRtlStackOverflowRead;
  Pool2[1].Blink = Pool2;
  return KeInsertQueue((PRKQUEUE)&FsRtlWorkerQueues + v5, Pool2);
}
