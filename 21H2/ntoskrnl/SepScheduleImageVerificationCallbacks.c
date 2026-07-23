/*
 * XREFs of SepScheduleImageVerificationCallbacks @ 0x140770A84
 * Callers:
 *     SeValidateImageHeader @ 0x1406C3C44 (SeValidateImageHeader.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepScheduleImageVerificationCallbacks(struct _LIST_ENTRY *a1, unsigned int a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  unsigned int v5; // ebx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, a2 + 48LL, 0x63734943u);
  v5 = 0;
  if ( PoolWithTag )
  {
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))SepImageVerificationCallbackWorker;
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag[1].List.Flink = a1;
    LODWORD(PoolWithTag[1].List.Blink) = a2;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
