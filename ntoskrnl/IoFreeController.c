/*
 * XREFs of IoFreeController @ 0x140554450
 * Callers:
 *     IoAllocateController @ 0x1405542D0 (IoAllocateController.c)
 *     DifIoFreeControllerWrapper @ 0x1405DCDD0 (DifIoFreeControllerWrapper.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeRemoveDeviceQueue @ 0x140570ED0 (KeRemoveDeviceQueue.c)
 */

void __stdcall IoFreeController(PCONTROLLER_OBJECT ControllerObject)
{
  struct _KDEVICE_QUEUE *p_DeviceWaitQueue; // rbx
  PKDEVICE_QUEUE_ENTRY v2; // rax

  p_DeviceWaitQueue = &ControllerObject->DeviceWaitQueue;
  do
    v2 = KeRemoveDeviceQueue(p_DeviceWaitQueue);
  while ( v2
       && ((unsigned int (__fastcall *)(ULONG *, struct _LIST_ENTRY *, _QWORD, struct _LIST_ENTRY *))v2[1].DeviceListEntry.Flink)(
            &v2[-4].SortKey,
            v2[-2].DeviceListEntry.Flink,
            0LL,
            v2[1].DeviceListEntry.Blink) == 2 );
}
