/*
 * XREFs of ?OnPriorityBoostRequested@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C6410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::OnPriorityBoostRequested(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewChanged((char *)this - 40, 1LL);
}
