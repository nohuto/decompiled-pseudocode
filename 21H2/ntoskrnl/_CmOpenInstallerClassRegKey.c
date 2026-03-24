/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x140645BF0
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406A784C (_CmGetDeviceSoftwareKey.c)
 *     PiCMOpenClassKey @ 0x1406BEA68 (PiCMOpenClassKey.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140731240 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14073D774 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInstallerClass @ 0x14073EDE0 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14073F41C (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14073F90C (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074BFA4 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateInstallerClassWorker @ 0x140974C5C (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140975A50 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140979760 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140645374 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 0x20u, 0, a5, a6, a7, a8);
}
