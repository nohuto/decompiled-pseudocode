/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x140787DE8
 * Callers:
 *     _CmCreateInterfaceClassWorker @ 0x14076AB18 (_CmCreateInterfaceClassWorker.c)
 *     _PnpDispatchInterfaceClass @ 0x140787620 (_PnpDispatchInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140787818 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A2A640 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A2CD54 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140787E30 (_CmOpenCommonClassRegKey.c)
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
