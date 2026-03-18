/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x140789460
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1406BD260 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1406BD83C (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1406BDC58 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406BDEE4 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406C7604 (_CmGetDeviceSoftwareKey.c)
 *     PpForEachDeviceInstanceDriver @ 0x14076B788 (PpForEachDeviceInstanceDriver.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 *     _CmCreateInstallerClassWorker @ 0x140A23130 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A255C0 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140A2A470 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A2C910 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140787E30 (_CmOpenCommonClassRegKey.c)
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
