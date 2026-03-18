/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x140788E8C
 * Callers:
 *     PiSwDeviceInterfaceSetState @ 0x14076341C (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1407635A4 (PiSwDeviceInterfacesUpdateState.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PiDmObjectCreate @ 0x14078BF98 (PiDmObjectCreate.c)
 *     PiUEventCopyEventData @ 0x14078C7F4 (PiUEventCopyEventData.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x14077F150 (_CmValidateDeviceInterfaceName.c)
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
