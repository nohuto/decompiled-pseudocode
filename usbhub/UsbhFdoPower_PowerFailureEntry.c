/*
 * XREFs of UsbhFdoPower_PowerFailureEntry @ 0x1C003C0B8
 * Callers:
 *     UsbhFdoSxIoComplete_Action @ 0x1C000C140 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C000C6B0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C000CA40 (UsbhFdoS0IoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhReleasePowerContext @ 0x1C001BA68 (UsbhReleasePowerContext.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0020A80 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C00212F4 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C0036940 (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhSetFdoPowerState @ 0x1C003C87C (UsbhSetFdoPowerState.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

void __fastcall UsbhFdoPower_PowerFailureEntry(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbx
  bool v8; // al
  __int64 v9; // r8
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v5 = a3;
  v7 = FdoExt(a1);
  UsbhException(a1, 0, 85, (int)&v10, 4, v5, 0, usbfile_fdopwr_c, 1027, 0);
  v7[315] = v5;
  v8 = Usb_Disconnected(v5);
  v9 = 213LL;
  if ( !v8 )
    v9 = 212LL;
  UsbhSetFdoPowerState(a1, (unsigned int)v5, v9);
  Log(a1, 16, 1934645025, v5, 0LL);
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhReleaseFdoPwrLock(a1, *(_QWORD *)(a4 + 72));
  UsbhBusIoInvalidateDeviceRelations(a1, *(_QWORD *)(a4 + 72));
  UsbhReleasePowerContext(a1, a4);
  UsbhDisarmHubForWakeDetect(a1);
}
