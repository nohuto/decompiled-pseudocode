/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012BB8
 * Callers:
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180012C04 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18002F8D4 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800337A0 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x180037AFC (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800412E4 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180045DFC (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x180046680 (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180046B84 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x180046D90 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800860C8 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z @ 0x18008805C (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097B60 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800999E8 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800BA228 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800BBFB8 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
