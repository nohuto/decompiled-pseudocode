/*
 * XREFs of ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009B790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B938 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800BA5EC (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180247370 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspe.c)
 */

int __fastcall JumpViewExperienceManagerFactory::GetExperienceManager(
        JumpViewExperienceManagerFactory *this,
        const unsigned __int16 *a2,
        struct IServiceProvider *a3,
        struct IInspectable **a4)
{
  const wchar_t *v6; // rsi
  int v8; // eax
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a2;
  *a4 = 0LL;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MeetNow>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MeetNow>::GetImpl'::`2'::impl,
    a2);
  if ( _o__wcsicmp(v6, L"Windows.Internal.ShellExperience.MeetNow") )
  {
    if ( _o__wcsicmp(v6, L"Windows.Internal.ShellExperience.JumpView") )
      return -2147023728;
    else
      return JumpViewExperienceManagerFactory::GetExperienceManager(
               (JumpViewExperienceManagerFactory *)((char *)this - 8),
               a3,
               a4);
  }
  else
  {
    v8 = Microsoft::WRL::Details::MakeAndInitialize<MeetNowExperienceManager,IInspectable,IServiceProvider * &>((void **)a4);
    v9 = v8;
    if ( v8 >= 0 )
      return 0;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
