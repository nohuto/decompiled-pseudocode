/*
 * XREFs of PopFanAdd @ 0x140853EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PopSqmFanEnumeration @ 0x140853F68 (PopSqmFanEnumeration.c)
 */

void __fastcall PopFanAdd(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 56);
  *(_BYTE *)(a1 + 64) = 1;
  *(_DWORD *)(v1 + 48) = -1073741667;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 1;
  KeInitializeEvent((PRKEVENT)(a1 + 416), NotificationEvent, 0);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 384) = PopFanWorker;
  *(_QWORD *)(a1 + 392) = a1;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  PopSqmFanEnumeration();
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
}
