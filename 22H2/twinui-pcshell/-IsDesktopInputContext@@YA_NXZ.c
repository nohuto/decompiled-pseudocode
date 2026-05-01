/*
 * XREFs of ?IsDesktopInputContext@@YA_NXZ @ 0x1803F63E4
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x1803F64A0 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 *     ?v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804067C0 (-v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1802319A8 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x1802B6E6C (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803F6574 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHidi.c)
 */

bool __fastcall IsDesktopInputContext(__int64 a1, __int64 a2)
{
  enum Windows::Internal::Shell::Holographic::UserInputContext *v2; // rdx
  int UserInputContext; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v4; // rdx
  int UserDisplayContext; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding>::GetImpl'::`2'::impl,
    a2);
  v8 = 0;
  UserInputContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                       (Windows::Internal::Shell::Holographic *)&v8,
                       v2);
  if ( UserInputContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"internal\\shell\\private\\inc\\InputContextHelper.h",
      (const char *)(unsigned int)UserInputContext);
  if ( !v8 )
    return 1;
  v9 = 1;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v9,
                         v4);
  if ( UserDisplayContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"internal\\shell\\private\\inc\\InputContextHelper.h",
      (const char *)(unsigned int)UserDisplayContext);
  return v9 != 1;
}
