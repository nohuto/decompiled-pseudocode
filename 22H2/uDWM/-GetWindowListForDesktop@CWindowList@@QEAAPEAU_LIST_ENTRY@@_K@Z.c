/*
 * XREFs of ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018ACC
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x1800070B0 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 *     ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x180007550 (-ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000A0D4 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000EBF4 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ED30 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType@1@@Z @ 0x18000F604 (-IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800187FC (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002AD18 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180030EB4 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18003C580 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18003C810 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180046384 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18008263C (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x1800827EC (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082D38 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180093A28 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800AFA34 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B77D8 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CWindowList::GetWindowListForDesktop(CWindowList *this, __int64 a2)
{
  char *v2; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v5; // [rsp+30h] [rbp-58h]
  __int128 v6; // [rsp+40h] [rbp-48h]
  __int128 v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+60h] [rbp-28h]
  char v9; // [rsp+68h] [rbp-20h]

  v4[1] = 0LL;
  v8 = -1LL;
  v4[0] = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = 0;
  v2 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v4);
  if ( v2 )
    return (struct _LIST_ENTRY *)(v2 + 80);
  else
    return (struct _LIST_ENTRY *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
}
