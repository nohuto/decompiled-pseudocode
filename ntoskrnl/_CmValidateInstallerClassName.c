/*
 * XREFs of _CmValidateInstallerClassName @ 0x1406C4F20
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x1406C5348 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x1406C54F8 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInterfaceClass @ 0x1406C59F0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x14074D6F0 (_PnpDispatchInstallerClass.c)
 *     _CmClassSubkeyCallback @ 0x1408412C0 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1406C5480 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
