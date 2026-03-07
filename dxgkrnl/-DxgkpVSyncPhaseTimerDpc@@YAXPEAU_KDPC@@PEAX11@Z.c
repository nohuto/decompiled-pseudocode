void __fastcall DxgkpVSyncPhaseTimerDpc(
        struct _KDPC *Dpc,
        unsigned int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // r9
  __int64 v5; // rcx

  v4 = *(_QWORD *)DeferredContext;
  v5 = DeferredContext[2];
  if ( !_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)DeferredContext + 4152LL) + 4 * v5), 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(v4 + 4136) + 32 * v5), DelayedWorkQueue);
}
