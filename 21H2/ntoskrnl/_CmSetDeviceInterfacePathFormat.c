/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x14063A94C
 * Callers:
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x1406E1E98 (PiUEventCopyEventData.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x140749D10 (PiDmObjectCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x14074D430 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14074D5BC (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1406419CC (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, __int64 *a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = CmValidateDeviceInterfaceName();
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)L"\\\\?\\";
    if ( a3 )
      v6 = 0x5C003F003F005CLL;
    *a2 = v6;
  }
  return result;
}
