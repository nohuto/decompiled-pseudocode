/*
 * XREFs of IoRegisterShutdownNotification @ 0x1408198A0
 * Callers:
 *     DifIoRegisterShutdownNotificationWrapper @ 0x1405DE840 (DifIoRegisterShutdownNotificationWrapper.c)
 *     RawInitialize @ 0x140B53CA0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B53F10 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x140389054 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140819914 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
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
