/*
 * XREFs of _CmValidateInstallerClassName @ 0x1406184E0
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140630260 (_PnpDispatchInterfaceClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140639DF0 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInstallerClass @ 0x14073EFA0 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140748E30 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x1407BD900 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x140639A80 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
