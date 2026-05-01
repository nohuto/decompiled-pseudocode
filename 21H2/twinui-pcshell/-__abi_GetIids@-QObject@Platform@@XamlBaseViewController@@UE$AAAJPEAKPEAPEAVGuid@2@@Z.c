/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@XamlBaseViewController@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1803986E0
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@XamlBaseViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016DA00 (-__abi_GetIids@-QObject@Platform@@XamlBaseViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlBaseViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016DA10 (-__abi_GetIids@-QObject@Platform@@XamlBaseViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlBaseViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016DA20 (-__abi_GetIids@-QObject@Platform@@XamlBaseViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlBaseViewController@@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18016DA30 (-__abi_GetIids@-QObject@Platform@@XamlBaseViewController@@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180094608 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__XamlBaseViewController__UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = 1139304602;
  v6 = 319010492;
  v7 = -1879262123;
  v8 = 1070415964;
  v9 = -246965827;
  v10 = -1283348586;
  v11 = -915487802;
  v12 = 975874190;
  v13 = -1501101903;
  v14 = -411912443;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)4,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3CD66AA00E559D08LL);
}
