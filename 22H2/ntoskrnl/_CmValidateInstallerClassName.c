/*
 * XREFs of _CmValidateInstallerClassName @ 0x14069BFB8
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1406B4230 (_PnpDispatchInterfaceClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1406BDDC0 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInstallerClass @ 0x14073B280 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140745110 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x1407BD930 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1406BDA50 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
