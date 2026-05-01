/*
 * XREFs of ?get_Visible@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAE@Z @ 0x180089A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::get_Visible(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        bool *a2)
{
  *a2 = *((_DWORD *)this + 22) == 2;
  return 0LL;
}
