/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1406C3E94
 * Callers:
 *     PiUEventCopyEventData @ 0x14068E1A4 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140807AF0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x140808E84 (PiSwDeviceInterfaceSetState.c)
 *     PiDmObjectCreate @ 0x140868FFC (PiDmObjectCreate.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1406D3FF0 (_CmValidateDeviceInterfaceName.c)
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
