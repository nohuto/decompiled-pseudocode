/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1406B372C
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1406B32E8 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x140715738 (PiUEventCopyEventData.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x1407461B0 (PiDmObjectCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x14076E65C (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140773010 (PiSwDeviceInterfacesUpdateState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1406BA7AC (_CmValidateDeviceInterfaceName.c)
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
