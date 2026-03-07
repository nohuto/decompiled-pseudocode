void KiScheduleBugcheckRecoveryWorkItem()
{
  LOWORD(KiBugcheckBlockingEvent.Header.Lock) = 1;
  KiBugcheckBlockingEvent.Header.SignalState = 0;
  KiBugcheckBlockingEvent.Header.WaitListHead.Blink = &KiBugcheckBlockingEvent.Header.WaitListHead;
  KiBugcheckBlockingEvent.Header.WaitListHead.Flink = &KiBugcheckBlockingEvent.Header.WaitListHead;
  KiDeferredBugcheckRecoveryWorkItem.Parameter = 0LL;
  KiDeferredBugcheckRecoveryWorkItem.List.Flink = 0LL;
  KiBugcheckBlockingEvent.Header.Size = 6;
  KiDeferredBugcheckRecoveryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KiDeferredBugcheckRecoveryWorker;
  ExQueueWorkItem(&KiDeferredBugcheckRecoveryWorkItem, RealTimeWorkQueue);
}
