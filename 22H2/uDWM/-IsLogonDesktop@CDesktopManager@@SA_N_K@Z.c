/*
 * XREFs of ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180027ED4
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180027F14 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18002B5B0 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180036B50 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003927C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003F800 (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180052858 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopManager::IsLogonDesktop(__int64 a1)
{
  int DesktopID; // eax
  char v3; // dl
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  DesktopID = GetDesktopID(4LL, &v5);
  v3 = 0;
  if ( DesktopID )
    return v5 == a1;
  return v3;
}
