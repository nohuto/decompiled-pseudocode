/*
 * XREFs of IoRegisterShutdownNotification @ 0x1408110B0
 * Callers:
 *     DifIoRegisterShutdownNotificationWrapper @ 0x1405E0CF0 (DifIoRegisterShutdownNotificationWrapper.c)
 *     RawInitialize @ 0x140B3C2E0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B3C550 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x140374ECC (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140811124 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi

  Pool2 = ExAllocatePool2(64LL, 24LL, 1750298441LL);
  v3 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 16) = DeviceObject;
  ObfReferenceObject(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION);
  return 0;
}
