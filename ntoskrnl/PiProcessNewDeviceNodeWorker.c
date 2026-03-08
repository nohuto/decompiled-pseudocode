/*
 * XREFs of PiProcessNewDeviceNodeWorker @ 0x140956520
 * Callers:
 *     <none>
 * Callees:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140202804 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiProcessNewDeviceNodeWorker(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx

  v1 = *(void **)(a1 + 24);
  *(_DWORD *)(a1 + 40) = PiProcessNewDeviceNode(*(_QWORD *)(a1 + 16));
  PnpDeviceCompletionQueueDispatchedEntryCompleted(v3, (_QWORD *)a1);
  ExFreePoolWithTag(v1, 0);
}
