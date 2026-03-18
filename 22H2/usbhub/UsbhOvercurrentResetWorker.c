/*
 * XREFs of UsbhOvercurrentResetWorker @ 0x1C0030700
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C0030500 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhWmiResetOvercurrent @ 0x1C004B120 (UsbhWmiResetOvercurrent.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhWait @ 0x1C001853C (UsbhWait.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001A550 (UsbhDispatch_HardResetEvent.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhSetPortPower @ 0x1C002E61C (UsbhSetPortPower.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C002FAA8 (UsbhDispatch_PindicatorEvent.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C0030C60 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0034C58 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Enable @ 0x1C0035028 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C00352EC (UsbhPCE_Resume.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0035938 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rsi
  __int64 PortData; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r10d
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // r10
  int v17; // r11d
  int v18; // r11d
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = 0;
  v6 = a2;
  FdoExt(a1);
  PortData = UsbhGetPortData(a1, v6);
  Log(a1, 0x4000, 1870033495, a3, v6);
  UsbhWait(a1, 0x1F4u);
  Log(a1, 0x4000, 1870016848, a3, (unsigned __int16)v6);
  v9 = UsbhGetPortData(a1, v6);
  if ( v9 )
    UsbhDispatch_PindicatorEvent(a1, v9, 3, a3);
  UsbhPCE_BusDisconnect(a1, a3, (unsigned __int16)v6);
  v10 = (int)UsbhSetPortPower(a1, v6);
  Log(a1, 0x4000, 1870017104, v10, (unsigned __int16)v6);
  if ( v11 < 0 )
  {
    if ( !Usb_Disconnected(v11) )
    {
      Log(a1, v18, 1870017569, a3, v6);
      UsbhDispatch_HardResetEvent(a1, a3, 3);
    }
  }
  else
  {
    UsbhWait(a1, dword_1C006C4F4);
    UsbhPCE_Resume(a1, a3, (unsigned __int16)v6);
    Log(a1, 0x4000, 1870025299, v10, (unsigned __int16)v6);
    v12 = UsbhQueryPortState(a1, v6, (__int64)&v20, &v21);
    if ( !Usb_Disconnected(v12) )
    {
      Log(a1, 16, 1870017616, (unsigned __int16)v20, HIWORD(v20));
      Log(a1, v15, 1870017582, v14, (unsigned __int16)v6);
      if ( (int)v16 >= 0 && (v20 & 1) != 0 && (v20 & 0x10000) == 0 )
      {
        Log(a1, v17, 1870017872, (unsigned __int16)v6, v16);
        UsbhQueueSoftConnectChange(a1);
      }
      *(_DWORD *)(PortData + 2404) = 0;
      Log(a1, 0x4000, 1870017381, a3, (unsigned __int16)v6);
      UsbhPCE_Enable(a1, a3, (unsigned __int16)v6);
    }
  }
  LOBYTE(v13) = a4;
  return Usbh_OvercurrentDerefHubBusy(a1, PortData, v13);
}
