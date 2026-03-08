/*
 * XREFs of IoAllocateController @ 0x1405542D0
 * Callers:
 *     DifIoAllocateControllerWrapper @ 0x1405DAA60 (DifIoAllocateControllerWrapper.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IoFreeController @ 0x140554450 (IoFreeController.c)
 *     KeInsertDeviceQueue @ 0x140570C90 (KeInsertDeviceQueue.c)
 */

void __stdcall IoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  DeviceObject->Queue.Wcb.DeviceRoutine = ExecutionRoutine;
  DeviceObject->Queue.Wcb.DeviceContext = Context;
  if ( !KeInsertDeviceQueue(&ControllerObject->DeviceWaitQueue, (PKDEVICE_QUEUE_ENTRY)&DeviceObject->Queue)
    && ((unsigned int (__fastcall *)(PDEVICE_OBJECT, struct _IRP *, _QWORD, PVOID))ExecutionRoutine)(
         DeviceObject,
         DeviceObject->CurrentIrp,
         0LL,
         Context) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
