/*
 * XREFs of UsbhEtwRundown @ 0x1C005CC90
 * Callers:
 *     UsbhEtwEnableCallback @ 0x1C005C340 (UsbhEtwEnableCallback.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001CDA8 (UsbhAcquirePdoStateLock.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0032554 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0032618 (UsbhReleaseFdoPnpLock.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005C39C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005C4B8 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubInformation @ 0x1C005C820 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005C934 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogPortInformation @ 0x1C005CB0C (UsbhEtwLogPortInformation.c)
 */

LONG UsbhEtwRundown()
{
  __int64 *i; // rdi
  __int64 *v1; // rbx
  __int64 v2; // rsi
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 *j; // r14
  _DWORD *v7; // rax
  KIRQL v8; // dl
  _DWORD *v9; // rax

  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  for ( i = (__int64 *)qword_1C006C4A0; i != &qword_1C006C4A0; i = (__int64 *)*i )
  {
    v1 = i - 644;
    v2 = *(i - 494);
    v3 = FdoExt(v2);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(v2, (__int64)(v3 + 346), 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation((__int64)(i - 644), &USBHUB_ETW_EVENT_HUB_INFORMATION);
      UsbhEtwLogHubPastExceptions((__int64)(i - 644));
      UsbhEtwLogPortInformation(v2);
      v4 = FdoExt(v2);
      UsbhAcquirePdoStateLock(v5, (__int64)(v4 + 346), 25);
      for ( j = (__int64 *)v1[601]; j != v1 + 601; j = (__int64 *)*j )
      {
        UsbhEtwLogDeviceInformation((__int64)(j - 165), &USBHUB_ETW_EVENT_DEVICE_INFORMATION, 1);
        UsbhEtwLogDeviceDescription((__int64)(j - 165), &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v7 = FdoExt(v2) + 346;
      v7[34] = 0;
      qword_1C006C500 = 0LL;
      v8 = *((_BYTE *)v7 + 132);
      v7[22] = 1734964085;
      KeReleaseSpinLock(&HubG, v8);
    }
    v9 = FdoExt(v2);
    UsbhReleaseFdoPnpLock(v2, (__int64)(v9 + 346));
  }
  return KeSetEvent(&Event, 0, 0);
}
