/*
 * XREFs of ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x1800BB5DC
 * Callers:
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x1800BDE78 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x1800BDF18 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 *     ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x18023AEF0 (-IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x18023C240 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow(
        CBaseTrayFlyoutExperienceManager::DebounceDetection *this)
{
  return GetTickCount64() - *(_QWORD *)this > 0x64;
}
