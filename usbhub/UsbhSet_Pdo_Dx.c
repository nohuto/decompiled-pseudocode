/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C0009CFC
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C001A0F0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001AA00 (UsbhPdoSetD0_Finish.c)
 *     UsbhSshPropagateResume @ 0x1C0021BE4 (UsbhSshPropagateResume.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C003A2F8 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003CB44 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000ABD0 (UsbhSshSetPortsBusyState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

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
