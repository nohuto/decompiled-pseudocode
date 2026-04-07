/*
 * XREFs of ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18002AAD0
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180029BEC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x18002AAF8 (-NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x180094724 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
        CTopLevelWindow *this,
        struct CWindowData *a2)
{
  struct CWindowData *v2; // rcx
  float CorrectionScaleForUniformSpaceWindow; // xmm0_4
  __int64 v4; // r9

  if ( CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(a2) )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v2);
    CVisual::SetScale(
      *(CVisual **)(v4 + 264),
      CorrectionScaleForUniformSpaceWindow,
      CorrectionScaleForUniformSpaceWindow);
  }
}
