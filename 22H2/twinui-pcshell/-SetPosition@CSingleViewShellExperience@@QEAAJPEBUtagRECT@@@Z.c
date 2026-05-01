/*
 * XREFs of ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18001DF20
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18001BC58 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180080434 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x1800BD424 (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180223F68 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18022E4B0 (-OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@.c)
 *     ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x18022F534 (-PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180234354 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180235B0C (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18023CE28 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18023E6D4 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x180240030 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180246BF4 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18025048C (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180253CA0 (-OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience.c)
 *     ?SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z @ 0x180259A9C (-SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z.c)
 *     ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x1802603BC (-SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::SetPosition(CSingleViewShellExperience *this, const struct tagRECT *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(**((_QWORD **)this + 10) + 96LL))(
         *((_QWORD *)this + 10),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v2,
      v5);
  return v3;
}
