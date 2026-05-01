/*
 * XREFs of ?OnSetForegroundFailed@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C6470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::OnSetForegroundFailed(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewChanged((char *)this - 40, 3LL);
}
