/*
 * XREFs of UsbhPdoSetD0_Finish @ 0x1C0001A6C
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C00018F0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhAcquireFdoPwrLock @ 0x1C00019E0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhDisableDeviceForWake @ 0x1C0001BF8 (UsbhDisableDeviceForWake.c)
 *     UsbhSetPdoPowerState @ 0x1C0002CC0 (UsbhSetPdoPowerState.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000AFE0 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoSetD0_Finish(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // r15d
  int v9; // r8d
  __int64 v10; // rbx
  KIRQL v11; // dl
  unsigned int v12; // edx
  int v14; // edx
  int v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = 0;
  v6 = PdoExt(a2);
  v7 = FdoExt(*(_QWORD *)(a1 + 8));
  v8 = *(_DWORD *)(*(_QWORD *)(a3 + 184) + 24LL);
  UsbhAcquireFdoPwrLock(*(_QWORD *)(a1 + 8), a1, 126, 1852401232);
  PdoExt(a2);
  UsbhSetPdoPowerState(a1, a2, v9, 1, 8);
  Log(*(_QWORD *)(a1 + 8), 16, 1884769123, a1, a2);
  *(_DWORD *)(v6 + 2384) = *(_DWORD *)(v7 + 4216);
  v10 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 32) = 1734964085;
  v11 = *(_BYTE *)(v10 + 5064);
  *(_QWORD *)(v10 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 5056), v11);
  if ( (*(_DWORD *)(v6 + 1420) & 0x100) != 0 )
  {
    v12 = UsbhDisableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v15);
    if ( (v12 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v12) )
      UsbhException(*(_QWORD *)(a1 + 8), *(unsigned __int16 *)(v6 + 1428), 49, 0, 0, v14, v15, usbfile_pdopwr_c, 842, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *(_WORD *)(v6 + 1428));
  UsbhSet_Pdo_Dx(a2, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *(_WORD *)(v6 + 1428));
  return 0LL;
}
