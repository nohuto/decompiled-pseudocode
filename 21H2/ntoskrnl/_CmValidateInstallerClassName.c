/*
 * XREFs of _CmValidateInstallerClassName @ 0x140645BCC
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x14063B450 (_PnpDispatchInterfaceClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140644FE0 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInstallerClass @ 0x14073EDE0 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140748C70 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x1407BD170 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x140644C70 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return !PnpIsValidGuidString(a2) ? 0xC0000033 : 0;
}
