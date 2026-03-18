/*
 * XREFs of _CmValidateDeviceContainerName @ 0x14079B890
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x14079AF90 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14079B4C0 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B574 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x140860000 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1403DB2F0 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1407882EC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
