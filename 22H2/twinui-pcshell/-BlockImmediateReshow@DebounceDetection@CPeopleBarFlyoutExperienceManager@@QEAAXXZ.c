/*
 * XREFs of ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18023A408
 * Callers:
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18023CBF8 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1800BB848 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x18023956C (--$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEA.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow(
        CPeopleBarFlyoutExperienceManager::DebounceDetection *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v2; // rcx
  struct CPeopleBarFlyoutExperienceManager::DebounceDetection *v3; // [rsp+38h] [rbp+10h] BYREF

  if ( GetAsyncKeyState(1) < 0 )
  {
    v3 = this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
    Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection *>(
      (__int64 *)this + 1,
      &v3);
    if ( GetAsyncKeyState(1) < 0 )
      return;
    v2 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 1);
    *(_QWORD *)this = 0LL;
    if ( v2 )
    {
      CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
    }
  }
  *(_QWORD *)this = GetTickCount64();
}
