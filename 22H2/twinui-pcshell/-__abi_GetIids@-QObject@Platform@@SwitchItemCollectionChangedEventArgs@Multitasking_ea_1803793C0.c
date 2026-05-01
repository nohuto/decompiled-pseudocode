/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1803793C0
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016B400 (-__abi_GetIids@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableSh.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016B410 (-__abi_GetIids@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking_ea_18016B410.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016B420 (-__abi_GetIids@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking_ea_18016B420.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x1800945E8 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__SwitchItemCollectionChangedEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  int v6; // [rsp+2Ch] [rbp-34h]
  int v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+34h] [rbp-2Ch]
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]

  v5 = -277616230;
  v6 = -1915733274;
  v7 = -776018380;
  v8 = 1203367472;
  v9 = 1139203467;
  v10 = 1701046345;
  v11 = 56LL;
  v12 = 192;
  v13 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)3,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x30DB8597B2B4A21FLL);
}
