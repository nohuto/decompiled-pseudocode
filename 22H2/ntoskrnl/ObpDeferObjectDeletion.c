/*
 * XREFs of ObpDeferObjectDeletion @ 0x140315484
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     NtCancelTimer @ 0x140248470 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x14024BF80 (ObDereferenceObjectEx.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x140277500 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ExTimerRundown @ 0x140342758 (ExTimerRundown.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 *     IopDropIrp @ 0x14035A9A4 (IopDropIrp.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     ObGetCurrentIrql @ 0x14025EDF0 (ObGetCurrentIrql.c)
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
    if ( ObGetCurrentIrql() > 2u )
      KiInsertQueueDpc((ULONG_PTR)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
  }
}
