/*
 * XREFs of _CmValidateInstallerClassName @ 0x1407871A0
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1406BD260 (_PnpDispatchInstallerClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1407871C4 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x140787620 (_PnpDispatchInterfaceClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140789718 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x14084C530 (_CmClassSubkeyCallback.c)
 * Callees:
 *     PnpIsValidGuidString @ 0x1406E87E8 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return !PnpIsValidGuidString(a2) ? 0xC0000033 : 0;
}
