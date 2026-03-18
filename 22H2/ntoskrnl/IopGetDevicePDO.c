/*
 * XREFs of IopGetDevicePDO @ 0x1403029B8
 * Callers:
 *     IoAllowExecution @ 0x140302A4C (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140558380 (IoRevokeHandlesForProcess.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IoRegisterContainerNotification @ 0x140948280 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x14094B170 (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140302A1C (IopGetDeviceAttachmentBase.c)
 */

_DWORD *__fastcall IopGetDevicePDO(__int64 a1)
{
  KIRQL v2; // di
  _DWORD *DeviceAttachmentBase; // rax
  _DWORD *v4; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (_DWORD *)IopGetDeviceAttachmentBase(a1);
  v4 = DeviceAttachmentBase;
  if ( (DeviceAttachmentBase[12] & 0x1000) != 0 )
    ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  else
    v4 = 0LL;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v4;
}
