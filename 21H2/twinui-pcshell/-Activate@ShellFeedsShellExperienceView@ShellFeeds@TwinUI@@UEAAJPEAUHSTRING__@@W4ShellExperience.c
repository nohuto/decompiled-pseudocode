/*
 * XREFs of ?Activate@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800C6250
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001503C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18008AEA4 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??$ShellFeedsShellExperienceView_ForegroundFailure@AEAJ@ShellFeedsTelemetry@@SAXAEAJ@Z @ 0x1800C61BC (--$ShellFeedsShellExperienceView_ForegroundFailure@AEAJ@ShellFeedsTelemetry@@SAXAEAJ@Z.c)
 *     ?BringToForeground@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x1800C62F0 (-BringToForeground@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::Activate(__int64 a1, HSTRING a2, int a3)
{
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 48), a2);
  if ( *(_DWORD *)(a1 + 88) == 2 && a3 != 2 )
  {
    v10 = TwinUI::ShellFeeds::ShellFeedsShellExperienceView::BringToForeground((TwinUI::ShellFeeds::ShellFeedsShellExperienceView *)a1);
    if ( v10 < 0 )
      ShellFeedsTelemetry::ShellFeedsShellExperienceView_ForegroundFailure<long &>(&v10);
  }
  if ( a3 )
    v5 = a3 == 2;
  else
    v5 = 4;
  v6 = CSingleViewShellExperience::Show(
         a1 + 48,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v5 | 2u));
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
