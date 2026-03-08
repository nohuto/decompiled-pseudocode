/*
 * XREFs of PipRecordOpenHandleVeto @ 0x14096ECA4
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14096ED2C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1402409C0 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PnpCollectOpenHandles @ 0x14096114C (PnpCollectOpenHandles.c)
 */

void __fastcall PipRecordOpenHandleVeto(unsigned int a1, PVOID **a2, struct _DEVICE_OBJECT *a3, __int64 a4, __int64 a5)
{
  char *DeviceNode; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v8; // rbx

  *(_DWORD *)a5 = 5;
  PnpCollectOpenHandles(a2, a1, a4);
  DeviceNode = 0LL;
  if ( a3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v8 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 8), (PCUNICODE_STRING)(DeviceNode + 40));
    ObfDereferenceObject(v8);
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(a5 + 8), 0LL);
  }
}
