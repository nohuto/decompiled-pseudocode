/*
 * XREFs of UsbhRemoveAndDeletePdo @ 0x1C0058428
 * Callers:
 *     UsbhDeleteOrphanPdo @ 0x1C0054C78 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0054E1C (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhFreeID @ 0x1C0051094 (UsbhFreeID.c)
 */

void __fastcall UsbhRemoveAndDeletePdo(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  KIRQL v3; // bl
  KIRQL v4; // bp

  v2 = PdoExt((__int64)DeviceObject);
  RtlFreeUnicodeString((PUNICODE_STRING)v2 + 167);
  v3 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  UsbhFreeID((__int64)(v2 + 524));
  UsbhFreeID((__int64)(v2 + 520));
  UsbhFreeID((__int64)(v2 + 528));
  UsbhFreeID((__int64)(v2 + 536));
  UsbhFreeID((__int64)(v2 + 532));
  UsbhFreeID((__int64)(v2 + 540));
  UsbhFreeID((__int64)(v2 + 544));
  UsbhFreeID((__int64)(v2 + 548));
  UsbhFreeID((__int64)(v2 + 556));
  UsbhFreeID((__int64)(v2 + 552));
  qword_1C006C500 = 0LL;
  KeReleaseSpinLock(&HubG, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 351);
  if ( v2[704] == 1 )
  {
    v2[704] = 0;
    USBD_RemoveDeviceFromGlobalList(DeviceObject);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 351, v4);
  IoDeleteDevice(DeviceObject);
}
