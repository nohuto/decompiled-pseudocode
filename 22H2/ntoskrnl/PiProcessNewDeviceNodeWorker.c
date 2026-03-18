/*
 * XREFs of PiProcessNewDeviceNodeWorker @ 0x140959540
 * Callers:
 *     <none>
 * Callees:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1403228D4 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
