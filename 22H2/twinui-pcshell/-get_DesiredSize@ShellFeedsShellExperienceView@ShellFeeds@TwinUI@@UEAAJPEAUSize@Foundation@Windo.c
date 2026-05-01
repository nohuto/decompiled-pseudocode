/*
 * XREFs of ?get_DesiredSize@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18008D6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::get_DesiredSize(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)((char *)this + 92);
  return result;
}
