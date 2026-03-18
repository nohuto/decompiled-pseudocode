/*
 * XREFs of ObpDeferObjectDeletion @ 0x14020B950
 * Callers:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8F0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExpFreeOwnerEntry @ 0x140260A40 (ExpFreeOwnerEntry.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2454 (ObDereferenceObjectExWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     ExReturnPoolQuota @ 0x1402ACCB0 (ExReturnPoolQuota.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall ObpDeferObjectDeletion(signed __int64 a1)
{
  signed __int64 v1; // rdx
  signed __int64 i; // rax

  _m_prefetchw(&ObpRemoveObjectList);
  v1 = ObpRemoveObjectList;
  *(_QWORD *)(a1 + 8) = ObpRemoveObjectList;
  for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, v1);
        i != v1;
        i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, i) )
  {
    v1 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v1 )
  {
    if ( (unsigned __int8)ObGetCurrentIrql() > 2u )
      KiInsertQueueDpc((ULONG_PTR)&ObpRemoveObjectDpc, 0);
    else
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
  }
}
