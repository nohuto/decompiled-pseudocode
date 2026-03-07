NTSTATUS __fastcall UsbhFdoSetPowerD0_Action(__int64 a1, __int64 a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // rbp
  _DWORD *v7; // rax
  __int64 CurrentStackLocation; // rsi
  _DWORD *v9; // r11
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r11

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
  CurrentStackLocation = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  v10 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v10 <= 1 )
  {
    Log(a1, 16, 1347374641, *(_QWORD *)&v9[2 * v10 + 210], (__int64)a3);
    Log(a1, 16, 1347374642, *(_QWORD *)(v12 + 8 * v11 + 856), CurrentStackLocation);
    *(_QWORD *)(v14 + 8 * v13 + 840) = 0LL;
    *(_QWORD *)(v14 + 8 * v13 + 856) = 0LL;
    *(_DWORD *)(v14 + 4 * v13 + 872) = 4559;
    PoStartNextPowerIrp(a3);
  }
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v6[151], a3);
}
