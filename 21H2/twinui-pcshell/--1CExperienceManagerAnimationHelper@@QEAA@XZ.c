/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1804E5A60
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1800BACA8 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x1800C1D90 (--1ShellFeedsDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18021DA68 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180222B6C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180230BF8 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18023D778 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$16 @ 0x1802422C7 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$16.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$17 @ 0x1802422DA (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$17.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1802423CC (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180245EB0 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x180251B5C (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1802791B8 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$20 @ 0x1803B7044 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$20.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$21 @ 0x1803B7057 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$21.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1803B758C (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(v1);
}
