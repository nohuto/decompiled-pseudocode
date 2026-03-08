/*
 * XREFs of UsbhHubResetIrqPipeWorker @ 0x1C0038B00
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhPostInterrupt @ 0x1C001F320 (UsbhPostInterrupt.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhResetIrqPipe @ 0x1C00393AC (UsbhResetIrqPipe.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

int __fastcall UsbhHubResetIrqPipeWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  _DWORD *v6; // rdi
  _QWORD *v7; // r14
  _UNKNOWN **v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  struct _KEVENT *v11; // r9
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v16; // [rsp+28h] [rbp-50h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x1Fu, (__int64)"FKh&", a2);
  Log((__int64)DeviceObject, 4, 1769107794, a3, v4);
  v6 = FdoExt((__int64)DeviceObject);
  v7 = (_QWORD *)UsbhIncHubBusy((__int64)DeviceObject, a3, (__int64)DeviceObject, 1380086643, 0);
  _InterlockedAdd(v6 + 684, 1u);
  LODWORD(v8) = v6[640];
  if ( ((unsigned __int16)v8 & 0x1000) != 0 )
  {
    v6[640] = (unsigned int)v8 & 0xFFFFEFFF;
    Log((__int64)DeviceObject, 4, 1769107794, 0LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v16) = v4;
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x20u, (__int64)"FKh&", v16);
    }
    v9 = (int)UsbhResetIrqPipe(DeviceObject);
    Log((__int64)DeviceObject, 4, 1766999379, 0LL, v9);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      if ( Usb_Disconnected(v9) )
      {
        KeSetEvent(v11, 0, 0);
        _InterlockedDecrement(v6 + 684);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_14;
        v13 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_14;
        v14 = 33;
      }
      else
      {
        _InterlockedDecrement(v6 + 684);
        KeSetEvent(v11, 0, 0);
        if ( !*((_BYTE *)v6 + 5268) )
          UsbhException((int)DeviceObject, 0, 7, 0, 0, v9, 0, usbfile_bus_c, 2768, 1);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_14;
        v13 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_14;
        v14 = 34;
      }
      LODWORD(v16) = v4;
      WPP_RECORDER_SF_d((__int64)v13->DeviceExtension, 0, 1u, v14, (__int64)"FKh&", v16);
LABEL_14:
      LODWORD(v8) = UsbhDecHubBusy((__int64)DeviceObject, v12, v7);
      return (int)v8;
    }
    _InterlockedDecrement(v6 + 684);
    UsbhDecHubBusy((__int64)DeviceObject, v10, v7);
    UsbhPostInterrupt(DeviceObject);
    v8 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v16) = v4;
      LODWORD(v8) = WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 0, 1u, 0x23u, (__int64)"FKh&", v16);
    }
  }
  return (int)v8;
}
