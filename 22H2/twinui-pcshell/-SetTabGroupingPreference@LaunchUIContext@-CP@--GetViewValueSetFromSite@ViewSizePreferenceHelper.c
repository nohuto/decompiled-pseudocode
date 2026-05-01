/*
 * XREFs of ?SetTabGroupingPreference@LaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@UEAAJK@Z @ 0x18043F1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1800689F8 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall `ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext::SetTabGroupingPreference(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  HSTRING_HEADER *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  HSTRING_HEADER v10; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, (const WCHAR **)off_180540FB0, a3);
  v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)(a1 + 48),
         (HSTRING)v5[1].Reserved.Reserved1,
         v6,
         a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v7);
  return v8;
}
