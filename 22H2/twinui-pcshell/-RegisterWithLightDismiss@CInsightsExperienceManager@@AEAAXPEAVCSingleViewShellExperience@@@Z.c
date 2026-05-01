/*
 * XREFs of ?RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1802600B4
 * Callers:
 *     ?EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x18025EA5C (-EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18025FD80 (-OnViewShown@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000C364 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CInsightsExperienceManager::RegisterWithLightDismiss(
        CInsightsExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (CInsightsExperienceManager *)((char *)this + 280),
         (struct ILightDismissNotification *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2[3]);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
