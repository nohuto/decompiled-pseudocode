/*
 * XREFs of ?ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z @ 0x1800BC420
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1800BB848 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::ObservedMouseButtonUp(
        __int64 a1,
        __int64 a2,
        int a3)
{
  if ( !a3 && *(_QWORD *)(a1 + 32) )
  {
    **(_QWORD **)(a1 + 32) = GetTickCount64();
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect((CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)(a1 - 8));
  }
  return 0LL;
}
