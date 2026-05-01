/*
 * XREFs of ?CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107220
 * Callers:
 *     _lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5_::operator() @ 0x1801070A0 (_lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5_--operator().c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x180108328 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180107EF8 (-IsBrowserReplacementFeaturePresent@@YA_NXZ.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108180 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 */

__int64 __fastcall ShellFeedsAvailability::CheckEdgeAvailability(unsigned __int8 *a1, char *a2)
{
  unsigned __int8 v4; // al
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = IsBrowserReplacementFeaturePresent();
  *a1 = v4;
  if ( !v4 )
  {
    std::wstring::assign(a2, L"AnaheimEdgeNotInstalled", 0x17uLL);
    v4 = *a1;
  }
  v7 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
         (ShellFeedsExperienceHelpers *)L"IsAnaheimEdgeInstalled",
         (const unsigned __int16 *)v4,
         v5,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
