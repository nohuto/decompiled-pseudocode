/*
 * XREFs of UsbhAssertBusLock @ 0x1C00367A4
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0022424 (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C004CAEC (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004CFC0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C004DC10 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C004DDA0 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C004DE80 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004DF70 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C004E0F0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004E300 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C004E400 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C004E470 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004E560 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C004E6E0 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004E8C0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
