/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x1C0002F00
 * Callers:
 *     UsbhSyncSendCommandToDevice @ 0x1C0002110 (UsbhSyncSendCommandToDevice.c)
 *     UsbhSshResumeDownstream @ 0x1C0009090 (UsbhSshResumeDownstream.c)
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C003C838 (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C00426A0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0043FE0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0002F60 (UsbhSyncSendInternalIoctl.c)
 *     Log @ 0x1C0009F20 (Log.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  unsigned int v5; // r10d

  v3 = a1;
  v4 = UsbhSyncSendInternalIoctl(a1, 2228243LL, a2, 0LL);
  Log(v3, 8, 1970303827, *a2, v4);
  return v5;
}
