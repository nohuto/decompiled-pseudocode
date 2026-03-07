void __fastcall EtwpCoverageFlushTimerCallback(__int64 a1, __int64 a2)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), 1, 0) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 376), NormalWorkQueue);
}
