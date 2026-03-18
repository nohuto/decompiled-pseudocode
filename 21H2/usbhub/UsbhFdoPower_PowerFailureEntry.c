/*
 * XREFs of UsbhFdoPower_PowerFailureEntry @ 0x1C003B740
 * Callers:
 *     UsbhFdoSxIoComplete_Action @ 0x1C00066A0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0006910 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0006D20 (UsbhFdoD0PoComplete_Action.c)
 * Callees:
 *     UsbhReleasePowerContext @ 0x1C00035EC (UsbhReleasePowerContext.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001D300 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C001DB84 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C0035F00 (UsbhBusIoInvalidateDeviceRelations.c)
 *     UsbhSetFdoPowerState @ 0x1C003BF08 (UsbhSetFdoPowerState.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
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
