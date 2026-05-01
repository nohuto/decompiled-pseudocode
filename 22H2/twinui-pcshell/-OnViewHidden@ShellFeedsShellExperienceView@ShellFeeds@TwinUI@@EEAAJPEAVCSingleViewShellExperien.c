/*
 * XREFs of ?OnViewHidden@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C64D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::OnViewHidden(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewChanged((char *)this - 40, 7LL);
}
