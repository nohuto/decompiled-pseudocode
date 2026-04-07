/*
 * XREFs of ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180013E98
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001A20C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800292D4 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003E47C (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x1800529E0 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow::OnBlurBehindUpdated(CTopLevelWindow *this)
{
  CRenderDataVisual *v2; // rcx

  v2 = (CRenderDataVisual *)*((_QWORD *)this + 37);
  if ( v2 )
    CRenderDataVisual::ClearInstructions(v2);
  CVisual::SetDirtyFlags(this, 0x80000u);
}
