/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x1406C4F44
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406C5750 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInterfaceClass @ 0x1406C59F0 (_PnpDispatchInterfaceClass.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     _CmCreateInterfaceClassWorker @ 0x14087BBB0 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A64CE8 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A674EC (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1406C4F8C (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 64, 0, a5, a6, a7, a8);
}
