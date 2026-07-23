/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x14063A9DC
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406052CC (_CmGetDeviceSoftwareKey.c)
 *     PiCMOpenClassKey @ 0x140622BDC (PiCMOpenClassKey.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140731400 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14073D934 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInstallerClass @ 0x14073EFA0 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14073F5DC (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14073FACC (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074C164 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateInstallerClassWorker @ 0x140974E3C (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140975C30 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140979940 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x14063A184 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 0x20u, 0, a5, a6, a7, a8);
}
