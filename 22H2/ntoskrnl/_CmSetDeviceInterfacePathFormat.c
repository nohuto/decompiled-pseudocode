/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x14077DE20
 * Callers:
 *     PiUEventCopyEventData @ 0x14077F9B4 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081C690 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081DAC4 (PiSwDeviceInterfaceSetState.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14086BC2C (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1406CEA70 (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, __int64 *a2, char a3)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx

  result = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( result >= 0 )
  {
    v6 = *(_QWORD *)L"\\\\?\\";
    if ( a3 )
      v6 = 0x5C003F003F005CLL;
    *a2 = v6;
  }
  return result;
}
