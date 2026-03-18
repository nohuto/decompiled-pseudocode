/*
 * XREFs of _CmValidateInstallerClassName @ 0x140787D8C
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14069AE50 (_PnpDispatchInstallerClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1407881B4 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x1407C5F48 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInterfaceClass @ 0x1407C6330 (_PnpDispatchInterfaceClass.c)
 *     _CmClassSubkeyCallback @ 0x140843910 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1407882EC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
