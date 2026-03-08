/*
 * XREFs of ?DpiRuntimePowerIrpCompletion@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C001B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiRuntimePowerIrpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PVOID DeviceExtension; // rdi
  void *SystemState; // rbx
  struct _IO_WORKITEM *WorkItem; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  SystemState = (void *)(int)PowerState.SystemState;
  if ( !DeviceExtension || *((_DWORD *)DeviceExtension + 4) != 1953656900 || *((_DWORD *)DeviceExtension + 5) != 3 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 512, &LockHandle);
    Context[1] = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)Context + 5) = IoStatus->Status;
    WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)DeviceExtension + 3));
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, DpiReportDevicePowerStateWorkItemCallback, DelayedWorkQueue, SystemState);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0LL, 0x20u);
}
