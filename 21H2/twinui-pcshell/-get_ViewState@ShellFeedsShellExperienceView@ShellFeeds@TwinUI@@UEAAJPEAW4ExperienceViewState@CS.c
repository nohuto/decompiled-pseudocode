/*
 * XREFs of ?get_ViewState@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x18008D6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::get_ViewState(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        enum CSingleViewShellExperience::ExperienceViewState *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 18);
  return 0LL;
}
