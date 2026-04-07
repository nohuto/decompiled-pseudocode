/*
 * XREFs of ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800346D8
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180030EB4 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800335E4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x1800063AC (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18001544C (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800220C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTransitionVisualController::_StopAnimations(CTransitionVisualController *this, HWND *a2)
{
  struct CWindowData *WindowDataByHwnd; // rbx
  unsigned __int64 v3; // rcx
  int v4; // ecx
  CTransitionVisualController *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  WindowDataByHwnd = (struct CWindowData *)a2;
  if ( !a2[49] && !a2[3] )
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                         a2[5]);
  if ( WindowDataByHwnd )
  {
    v3 = *((_QWORD *)WindowDataByHwnd + 49);
    if ( v3 )
    {
      CTopLevelWindow3D::StopAnimation(v3);
      v4 = *((_DWORD *)WindowDataByHwnd + 154);
      if ( (v4 & 0x30000000) == 0x30000000 || (v4 & 0x100000) != 0 )
      {
        LOBYTE(v5) = 0;
        CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___(
          (__int64)WindowDataByHwnd,
          (__int64)&v5,
          1);
      }
    }
  }
}
