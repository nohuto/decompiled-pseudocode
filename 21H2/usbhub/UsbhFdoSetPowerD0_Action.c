/*
 * XREFs of UsbhFdoSetPowerD0_Action @ 0x1C000CD2C
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C0005910 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhFdoSetPowerD0_Action(__int64 a1, __int64 a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // rbp
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r11
  _DWORD *v9; // rsi
  __int64 Options; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r10

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  v6 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 16, 1885291568, a2, (__int64)a3);
  v7 = FdoExt(a1);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    Log(a1, 16, 1347374641, *(_QWORD *)&v9[2 * Options + 210], (__int64)a3);
    Log(a1, 16, 1347374642, *(_QWORD *)&v9[2 * v11 + 214], v12);
    *(_QWORD *)&v9[2 * v13 + 210] = 0LL;
    *(_QWORD *)&v9[2 * v13 + 214] = 0LL;
    v9[v13 + 218] = 4559;
    PoStartNextPowerIrp(a3);
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  }
  ++a3->CurrentLocation;
  a3->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return PoCallDriver(v6[151], a3);
}
