/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x14078D67C
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x14071C224 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14078D724 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfStartKernelDispatcher(int a1)
{
  if ( a1 )
  {
    ExpWnfDispatchKernelSubscription();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(ExpWnfDispatcher + 40), 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpWnfDispatcher + 8), DelayedWorkQueue);
  }
}
