/*
 * XREFs of ExpHpGCTimerCallback @ 0x1402FA460
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall ExpHpGCTimerCallback(__int64 a1, void *a2)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  v2 = (struct _WORK_QUEUE_ITEM *)&ExpHpGCWorkItemNonPaged;
  if ( (_DWORD)a2 != 1 )
    v2 = &ExpHpGCWorkItemPaged;
  v2->List.Flink = 0LL;
  v2->Parameter = a2;
  v2->WorkerRoutine = (void (__fastcall *)(void *))ExpHpCompactionRoutine;
  ExQueueWorkItem(v2, NormalWorkQueue);
}
