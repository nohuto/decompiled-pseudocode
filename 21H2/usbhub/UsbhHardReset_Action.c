/*
 * XREFs of UsbhHardReset_Action @ 0x1C003C838
 * Callers:
 *     Usbh_HRS_Queued @ 0x1C003D128 (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0002F00 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhFdoSetD0Cold @ 0x1C0009FA0 (UsbhFdoSetD0Cold.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhWait @ 0x1C002D834 (UsbhWait.c)
 *     UsbhSyncBusDisconnect @ 0x1C0030E28 (UsbhSyncBusDisconnect.c)
 *     UsbhSyncBusPause @ 0x1C0030E9C (UsbhSyncBusPause.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhHardReset_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  int v11; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 20;
  v12 = 0;
  v4 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 4, 1215460146, 0LL, (__int64)DeviceObject);
  v5 = (_QWORD *)UsbhIncHubBusy((__int64)DeviceObject, a2, (__int64)DeviceObject, 1430418024, 0);
  if ( *((_BYTE *)v4 + 5268) )
    KeWaitForSingleObject(v4 + 846, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    if ( *((_BYTE *)v4 + 5268) )
      _InterlockedExchange(v4 + 1315, 0);
    v6 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v12);
    v7 = v6;
    if ( Usb_Disconnected(v6) )
      break;
    UsbhSyncBusPause(DeviceObject, a2, 6);
    UsbhSyncBusDisconnect(DeviceObject, a2);
    v4[640] &= ~0x10u;
    LODWORD(v7) = Usbh_SSH_Event((__int64)DeviceObject, 4u, a2);
    if ( (v7 & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    v9 = UsbhFdoSetD0Cold(DeviceObject, a2, 1);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v4[1238] = 0;
      goto LABEL_13;
    }
    UsbhException((int)DeviceObject, 0, 71, (int)&v11, 4, v9, 0, usbfile_reset_c, 1073, 0);
    if ( (_DWORD)v7 != -1073741637 )
    {
      Log((__int64)DeviceObject, 4, 1215460147, v7, (__int64)DeviceObject);
      ++v4[1238];
      v4[640] |= 0x10u;
      UsbhWait((__int64)DeviceObject, v11);
      v11 *= 2;
      if ( v4[1238] < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        continue;
    }
    goto LABEL_13;
  }
  Log((__int64)DeviceObject, 4, 1382314851, v7, v12);
LABEL_13:
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v7) )
      UsbhException((int)DeviceObject, 0, 126, 0, 0, v7, 0, usbfile_reset_c, 1109, 0);
    if ( *((_BYTE *)v4 + 5268) )
      KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 2uLL, 0LL);
  }
  UsbhDecHubBusy((__int64)DeviceObject, v8, v5);
  return (unsigned int)v7;
}
