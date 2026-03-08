/*
 * XREFs of ??$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@1@V231@@Z @ 0x18028D8EC
 * Callers:
 *     ?Initialize@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@@Z @ 0x1802933DC (-Initialize@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Int.c)
 *     ?Lookup@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180293930 (-Lookup@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>(__int64 a1, __m128i *a2)
{
  char v2; // al
  __m128i v4; // [rsp+20h] [rbp-18h]

  v4 = *a2;
  v2 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  *(_BYTE *)(a1 + 8) = v2;
  if ( v2 )
  {
    *(_QWORD *)a1 = v4.m128i_i64[0];
    _InterlockedIncrement((volatile signed __int32 *)v4.m128i_i64[0]);
  }
  else
  {
    *(_QWORD *)a1 = v4.m128i_i64[0];
    if ( v4.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4.m128i_i64[0] + 8LL))(v4.m128i_i64[0]);
  }
  return 0LL;
}
