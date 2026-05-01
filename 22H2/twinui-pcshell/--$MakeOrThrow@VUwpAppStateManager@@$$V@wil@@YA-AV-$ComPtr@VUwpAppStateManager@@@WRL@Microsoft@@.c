/*
 * XREFs of ??$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA?AV?$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@XZ @ 0x1804C76C0
 * Callers:
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x1804C691C (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A40 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpAppStateManager@@@12@XZ @ 0x1804C75D8 (--$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VUwpAppStateManager@@@12@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<UwpAppStateManager,>(__int64 *a1)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<UwpAppStateManager,>(a1);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v2);
    __debugbreak();
  }
  return a1;
}
