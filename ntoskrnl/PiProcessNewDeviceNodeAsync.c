/*
 * XREFs of PiProcessNewDeviceNodeAsync @ 0x140793334
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140202C70 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140688CA4 (PnpDeviceCompletionRequestCreate.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNodeAsync(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  bool v4; // di
  __int64 i; // rdx
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rcx

  v3 = 259;
  if ( (_DWORD)InitSafeBootMode )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  v4 = a2 == 0;
  if ( (PnpAsyncOptions & 4) == 0 || a2 )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 8) + 16LL) & 0x1000) == 0 )
      return (unsigned int)PiProcessNewDeviceNode(a1);
  }
  Pool2 = ExAllocatePool2(64LL, 32LL, 829451856LL);
  v8 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( !Pool2 )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  v9 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, 772, Pool2);
  if ( v9 )
  {
    v8->List.Flink = 0LL;
    v8->WorkerRoutine = (void (__fastcall *)(void *))PiProcessNewDeviceNodeWorker;
    v8->Parameter = v9;
    PipSetDevNodeState(a1, 770);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v10, v9);
    ExQueueWorkItem(v8, DelayedWorkQueue);
  }
  else
  {
    v4 = 0;
    ExFreePoolWithTag(v8, 0);
  }
  if ( !v4 )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  return v3;
}
