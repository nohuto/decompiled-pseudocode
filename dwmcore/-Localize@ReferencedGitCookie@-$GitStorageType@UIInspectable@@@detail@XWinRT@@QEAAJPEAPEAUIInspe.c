/*
 * XREFs of ?Localize@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspectable@@@Z @ 0x1802938EC
 * Callers:
 *     ?Lookup@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180293930 (-Lookup@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 *     ?get_Value@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1802957F0 (-get_Value@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Inte.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Localize(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_1803E2E60 + 40LL))(
           qword_1803E2E60,
           *(unsigned int *)(a1 + 4),
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
}
