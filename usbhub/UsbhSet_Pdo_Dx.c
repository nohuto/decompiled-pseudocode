POWER_STATE __fastcall UsbhSet_Pdo_Dx(struct _DEVICE_OBJECT *a1, POWER_STATE a2)
{
  _DWORD *DeviceExtension; // rax
  POWER_STATE result; // eax
  __int32 v6; // ebx
  __int32 v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *DeviceExtension != 1329877064 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  DeviceExtension[197] = a2.SystemState;
  result.SystemState = PoSetPowerState(a1, DevicePowerState, a2).SystemState;
  v6 = a2.SystemState - 1;
  if ( !v6 )
  {
    v8 = PdoExt(a1);
    v9 = PdoExt(a1);
    v10 = 2LL;
    return (POWER_STATE)UsbhSshSetPortsBusyState(*(_QWORD *)(v9 + 1184), *(unsigned __int16 *)(v8 + 1428), v10);
  }
  v7 = v6 - 1;
  if ( !v7 || (unsigned int)(v7 - 1) <= 1 )
  {
    v8 = PdoExt(a1);
    v9 = PdoExt(a1);
    v10 = 1LL;
    return (POWER_STATE)UsbhSshSetPortsBusyState(*(_QWORD *)(v9 + 1184), *(unsigned __int16 *)(v8 + 1428), v10);
  }
  return result;
}
