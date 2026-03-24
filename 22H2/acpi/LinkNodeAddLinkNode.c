/*
 * XREFs of LinkNodeAddLinkNode @ 0x1C00308D8
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001A380 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeAddLinkNode(_QWORD *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(RootDeviceExtension + 728));
  Context[31] = WorkItem;
  if ( !WorkItem )
    return 3221225626LL;
  IoQueueWorkItem(WorkItem, LinkNodepAddLinkNodeWorker, DelayedWorkQueue, Context);
  return 0LL;
}
