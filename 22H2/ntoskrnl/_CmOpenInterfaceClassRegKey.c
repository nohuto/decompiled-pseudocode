/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x1406B3774
 * Callers:
 *     PiCMOpenClassKey @ 0x1406A693C (PiCMOpenClassKey.c)
 *     IopGetDeviceInterfaces @ 0x1406B32E8 (IopGetDeviceInterfaces.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406B4084 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInterfaceClass @ 0x1406B4230 (_PnpDispatchInterfaceClass.c)
 *     _CmCreateInterfaceClassWorker @ 0x140748170 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140979980 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14097BF74 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1406BE154 (_CmOpenCommonClassRegKey.c)
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
