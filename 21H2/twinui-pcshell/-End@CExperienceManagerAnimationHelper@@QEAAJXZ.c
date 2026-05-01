/*
 * XREFs of ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18000CD68
 * Callers:
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000C990 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CB40 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaked@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CD40 (-OnViewUncloaked@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CDA0 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BCFF0 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BD1B0 (-OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4900 (-OnViewHidden@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaked@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800C4B34 (-OnViewUncloaked@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator() @ 0x1800CEFA8 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--operator().c)
 *     ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180223C90 (-OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180223D60 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180234090 (-OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180234170 (-OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18023E320 (-OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaked@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18023E690 (-OnViewUncloaked@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180248250 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaked@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180248660 (-OnViewUncloaked@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_3bbf153ae8ca8cd098f14c7e321b666e_::operator() @ 0x180251E3C (_lambda_3bbf153ae8ca8cd098f14c7e321b666e_--operator().c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1802552C8 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027EAE4 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027F13C (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BFE08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::End(CExperienceManagerAnimationHelper *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)this )
    return 0LL;
  *(_BYTE *)this = 0;
  v1 = DwmpEndTransitionRequest(*((unsigned int *)this + 1));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
