void __fastcall TdrResetFromTimeoutAsync(struct _TDR_RECOVERY_CONTEXT *BugCheckParameter1)
{
  __int64 v2; // rax
  struct _WORK_QUEUE_ITEM *v3; // r8

  v2 = operator new[](0x28uLL, 0x4B677844u, 64LL);
  if ( !v2 )
    TdrBugcheckOnTimeout((ULONG_PTR)BugCheckParameter1);
  *(_QWORD *)(v2 + 32) = BugCheckParameter1;
  TdrReferenceRecoveryContext(BugCheckParameter1);
  v3->List.Flink = 0LL;
  v3->WorkerRoutine = (PWORKER_THREAD_ROUTINE)TdrResetFromTimeoutWorkItem;
  v3->Parameter = v3;
  ExQueueWorkItem(v3, CriticalWorkQueue);
}
