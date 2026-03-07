void __fastcall VidMmDelayedEvictionDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)DeferredContext + 3) + 4752LL), CriticalWorkQueue);
  _InterlockedExchange((volatile __int32 *)DeferredContext + 11212, 0);
}
