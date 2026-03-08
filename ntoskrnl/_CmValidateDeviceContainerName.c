/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1406C3EDC
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140682AC0 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406C11CC (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406C3AD8 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x14085C100 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1403D5DD0 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1406C5480 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !(unsigned __int8)PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
