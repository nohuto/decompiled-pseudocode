/*
 * XREFs of ?LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C0130
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180082058 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ??$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18009DB18 (--$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C023C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 *     ?SearchAppDesktopExperienceView_LowLevelKeyboardHookProc@CortanaProactiveTelemetry@@SAXXZ @ 0x1800C0664 (-SearchAppDesktopExperienceView_LowLevelKeyboardHookProc@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0924 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0AA0 (-StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NXZ @ 0x1800C0C8C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@@QEAA_NXZ @ 0x1800C0CCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@@QEAA_NXZ.c)
 */

LRESULT __fastcall SearchAppDesktopExperienceView::LowLevelKeyboardHookProc(int code, WPARAM wParam, _DWORD *lParam)
{
  unsigned int v6; // r8d
  SearchAppDesktopExperienceView *v7; // rcx
  SearchAppDesktopExperienceView *v8; // rcx

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49219968>::GetImpl'::`2'::impl) )
  {
    if ( `anonymous namespace'::g_searchAppExperienceView )
    {
      CortanaProactiveTelemetry::SearchAppDesktopExperienceView_LowLevelKeyboardHookProc();
      if ( wParam == 256 )
      {
        if ( *lParam == 91 )
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_51607638>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_51607638>::GetImpl'::`2'::impl) )
            SearchAppDesktopExperienceView::StartNewSearchInputTest(v7);
          else
            SearchAppDesktopExperienceView::StartSearchInputTest(v7);
        }
        else if ( *lParam == 27 )
        {
          SearchAppDesktopExperienceView::DismissCortanaApp(`anonymous namespace'::g_searchAppExperienceView);
          CortanaProactiveTelemetry::SearchApp_Dismiss<unsigned short const (&)[11]>((__int64)L"EscPressed");
        }
      }
      v8 = (SearchAppDesktopExperienceView *)(unsigned int)*lParam;
      if ( (unsigned int)((_DWORD)v8 - 48) <= 9
        || (unsigned int)((_DWORD)v8 - 65) <= 0x19
        || (unsigned int)((_DWORD)v8 - 97) <= 9 )
      {
        SearchAppDesktopExperienceView::MonitorSearchInputTest(v8, wParam, v6);
      }
    }
  }
  else if ( wParam == 256 )
  {
    if ( `anonymous namespace'::g_searchAppExperienceView )
    {
      CortanaProactiveTelemetry::SearchAppDesktopExperienceView_LowLevelKeyboardHookProc();
      if ( *lParam == 27 )
      {
        SearchAppDesktopExperienceView::DismissCortanaApp(`anonymous namespace'::g_searchAppExperienceView);
        CortanaProactiveTelemetry::SearchApp_Dismiss<unsigned short const (&)[11]>((__int64)L"EscPressed");
      }
    }
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}
