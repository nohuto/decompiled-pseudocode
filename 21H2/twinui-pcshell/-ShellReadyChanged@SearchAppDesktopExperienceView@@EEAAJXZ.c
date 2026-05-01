/*
 * XREFs of ?ShellReadyChanged@SearchAppDesktopExperienceView@@EEAAJXZ @ 0x180277C70
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1802776F0 (-PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShellReadyChanged(SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView::PostTargetedMessage((__int64)this - 56, 1u, 0);
  return 0LL;
}
