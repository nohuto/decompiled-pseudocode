/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1406084A0
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140607E80 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406083EC (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x1407CC930 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1403D40B0 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x140639A80 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !(unsigned __int8)PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
