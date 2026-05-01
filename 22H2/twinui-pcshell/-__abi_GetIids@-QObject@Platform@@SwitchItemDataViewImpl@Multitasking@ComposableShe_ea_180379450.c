/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180379450
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016B430 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@W.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016B440 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_18016B440.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016B450 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_18016B450.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016B460 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_18016B460.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x1800945E8 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  int v5; // [rsp+28h] [rbp-48h]
  int v6; // [rsp+2Ch] [rbp-44h]
  int v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+34h] [rbp-3Ch]
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  int v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+44h] [rbp-2Ch]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]

  v5 = 539926173;
  v6 = -60297364;
  v7 = 1080060051;
  v8 = 1276678669;
  v9 = 1623113873;
  v10 = -591271901;
  v11 = 653622313;
  v12 = 1254889378;
  v13 = -745902940;
  v14 = 141623087;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)4,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3A98661B708B7FDCLL);
}
