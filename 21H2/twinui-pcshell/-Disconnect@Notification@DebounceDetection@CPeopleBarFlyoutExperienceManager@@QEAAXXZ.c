/*
 * XREFs of ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1800BB868
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1800BACA8 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1800BB3A8 (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z @ 0x1800BC440 (-ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUt.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800BE51C (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x180239F18 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18023A5B8 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18023CDA8 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *this)
{
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_DWORD *)this + 14) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
    *((_DWORD *)this + 14) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
}
