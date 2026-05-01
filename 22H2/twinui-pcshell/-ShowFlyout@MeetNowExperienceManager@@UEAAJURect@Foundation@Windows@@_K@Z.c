/*
 * XREFs of ?ShowFlyout@MeetNowExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x1800BE080
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x1800BDF18 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::ShowFlyout(
        CBaseTrayFlyoutExperienceManager **a1,
        const struct Windows::Foundation::Rect *a2,
        int a3)
{
  return MeetNowExperienceManager::ShowFlyout(a1, a2, a3, 0);
}
