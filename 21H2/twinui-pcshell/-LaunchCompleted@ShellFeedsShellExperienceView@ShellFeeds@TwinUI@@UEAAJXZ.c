/*
 * XREFs of ?LaunchCompleted@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x18008CCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180050430 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::LaunchCompleted(HSTRING *this)
{
  CSingleViewShellExperience::LaunchCompleted(this + 4);
  return 0LL;
}
