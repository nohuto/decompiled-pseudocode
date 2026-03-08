/*
 * XREFs of LinkNodeAddLinkNode @ 0x1C005CE38
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0010780 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeAddLinkNode(_QWORD *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(RootDeviceExtension + 768));
  Context[31] = WorkItem;
  if ( !WorkItem )
    return 3221225626LL;
  IoQueueWorkItem(WorkItem, LinkNodepAddLinkNodeWorker, DelayedWorkQueue, Context);
  return 0LL;
}
