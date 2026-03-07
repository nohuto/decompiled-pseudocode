void __fastcall HalpCmcDeferredRoutine(__int64 a1, __int64 a2)
{
  if ( !_InterlockedExchange((volatile __int32 *)(a2 + 168), 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 136), DelayedWorkQueue);
}
