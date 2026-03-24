/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x14063A994
 * Callers:
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x14063B2A4 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInterfaceClass @ 0x14063B450 (_PnpDispatchInterfaceClass.c)
 *     PiCMOpenClassKey @ 0x1406BEA68 (PiCMOpenClassKey.c)
 *     _CmCreateInterfaceClassWorker @ 0x14074BCD0 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140979930 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14097BF24 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140645374 (_CmOpenCommonClassRegKey.c)
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
