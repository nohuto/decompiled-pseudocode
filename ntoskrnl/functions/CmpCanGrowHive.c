char __fastcall CmpCanGrowHive(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != qword_140C028D0 )
      return 1;
    if ( a2 + 4096 <= CmSystemHiveLimitSize )
    {
      LODWORD(v3) = 393216;
      if ( *(_QWORD *)(*(_QWORD *)qword_140C67048 + 17040LL) >> 1 < 0x60000uLL )
        v3 = *(_QWORD *)(*(_QWORD *)qword_140C67048 + 17040LL) >> 1;
      if ( a2 + 4096 > 36864 * (int)v3 / 0xAu && !CmpSystemQuotaWarningPopupDisplayed && ExReadyForErrors )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 538987843LL);
        if ( Pool2 )
        {
          Pool2->List.Flink = 0LL;
          Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
          CmpSystemQuotaWarningPopupDisplayed = 1;
          Pool2->Parameter = Pool2;
          ExQueueWorkItem(Pool2, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
