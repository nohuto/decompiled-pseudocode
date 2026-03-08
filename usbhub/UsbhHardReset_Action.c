/*
 * XREFs of UsbhHardReset_Action @ 0x1C003D0C8
 * Callers:
 *     Usbh_HRS_Queued @ 0x1C003D9BC (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0004A1C (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhWait @ 0x1C002E204 (UsbhWait.c)
 *     UsbhSyncBusDisconnect @ 0x1C00317FC (UsbhSyncBusDisconnect.c)
 *     UsbhSyncBusPause @ 0x1C0031870 (UsbhSyncBusPause.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhHardReset_Action(struct _DEVICE_OBJECT *a1, __int64 a2)
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
  v4 = FdoExt((__int64)a1);
  Log((__int64)a1, 4, 1215460146, 0LL, (__int64)a1);
  v5 = (_QWORD *)UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1430418024, 0);
  if ( *((_BYTE *)v4 + 5268) )
    KeWaitForSingleObject(v4 + 846, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    if ( *((_BYTE *)v4 + 5268) )
      _InterlockedExchange(v4 + 1315, 0);
    v6 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v12);
    v7 = v6;
    if ( Usb_Disconnected(v6) )
      break;
    UsbhSyncBusPause((__int64)a1, a2, 6);
    UsbhSyncBusDisconnect((__int64)a1, a2);
    v4[640] &= ~0x10u;
    LODWORD(v7) = Usbh_SSH_Event((__int64)a1, 4u, a2);
    if ( (v7 & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    v9 = UsbhFdoSetD0Cold(a1, a2, 1);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v4[1238] = 0;
      goto LABEL_13;
    }
    UsbhException((int)a1, 0, 71, (int)&v11, 4, v9, 0, usbfile_reset_c, 1073, 0);
    if ( (_DWORD)v7 != -1073741637 )
    {
      Log((__int64)a1, 4, 1215460147, v7, (__int64)a1);
      ++v4[1238];
      v4[640] |= 0x10u;
      UsbhWait((__int64)a1, v11);
      v11 *= 2;
      if ( v4[1238] < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        continue;
    }
    goto LABEL_13;
  }
  Log((__int64)a1, 4, 1382314851, v7, v12);
LABEL_13:
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v7) )
      UsbhException((int)a1, 0, 126, 0, 0, v7, 0, usbfile_reset_c, 1109, 0);
    if ( *((_BYTE *)v4 + 5268) )
      KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 2uLL, 0LL);
  }
  UsbhDecHubBusy((__int64)a1, v8, v5);
  return (unsigned int)v7;
}
