/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x14062F7A4
 * Callers:
 *     PiCMOpenClassKey @ 0x140622BDC (PiCMOpenClassKey.c)
 *     IopGetDeviceInterfaces @ 0x14062F318 (IopGetDeviceInterfaces.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406300B4 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInterfaceClass @ 0x140630260 (_PnpDispatchInterfaceClass.c)
 *     _CmCreateInterfaceClassWorker @ 0x14074BE90 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140979B10 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14097C104 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x14063A184 (_CmOpenCommonClassRegKey.c)
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
