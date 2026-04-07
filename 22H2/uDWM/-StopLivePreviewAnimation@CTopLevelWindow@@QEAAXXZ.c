/*
 * XREFs of ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180040C58
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800161A4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180017098 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180082444 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180082504 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180094AF0 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180094B68 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180095540 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E00C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180094A98 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StopLivePreviewAnimation(CTopLevelWindow *this)
{
  struct CVisual *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al

  if ( *((_DWORD *)this + 61) )
  {
    *((_DWORD *)this + 61) = 0;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
    v3 = *((_QWORD *)this + 85);
    if ( v3 )
    {
      v4 = (*(_DWORD *)(v3 + 8))-- == 1;
      v5 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v5 = 1;
      *((_QWORD *)this + 85) = 0LL;
      CDesktopManager::s_fTimelineDirty = v5;
    }
  }
}
