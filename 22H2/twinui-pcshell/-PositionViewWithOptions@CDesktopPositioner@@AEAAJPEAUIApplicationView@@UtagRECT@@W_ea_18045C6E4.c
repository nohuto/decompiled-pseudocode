/*
 * XREFs of ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x18045C6E4
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18004DC80 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?PositionView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x18045C0C0 (-PositionView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1802134A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215D98 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x18045C1A8 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::PositionViewWithOptions(
        __int64 a1,
        struct IApplicationView *a2,
        __int128 *a3,
        int a4,
        __int64 *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int128 v14; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&a5);
  if ( a5 )
  {
    v14 = *a3;
    v12 = CDesktopPositioner::PositionViewWithOptions(a1, a2, (unsigned int *)&v14, a4, a5, 6u, 0LL);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = (unsigned int)v12;
    v11 = 2687LL;
  }
  else
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 2686LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v10);
LABEL_7:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&a5);
  return v9;
}
