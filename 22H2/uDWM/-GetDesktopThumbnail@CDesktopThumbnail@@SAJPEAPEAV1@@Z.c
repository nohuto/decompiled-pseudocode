/*
 * XREFs of ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B678C
 * Callers:
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180097240 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA34C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800B0380 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800B04E0 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B65AC (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800B6210 (-Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnail::GetDesktopThumbnail(struct CDesktopThumbnail **a1)
{
  unsigned int v1; // ebx
  struct CDesktopThumbnail *v2; // rax
  int v4; // eax

  *a1 = 0LL;
  v1 = 0;
  v2 = CDesktopThumbnail::s_pThumbnailNoRef;
  if ( CDesktopThumbnail::s_pThumbnailNoRef )
  {
    *a1 = CDesktopThumbnail::s_pThumbnailNoRef;
    _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
  }
  else
  {
    v4 = CDesktopThumbnail::Create(a1);
    v1 = v4;
    if ( v4 >= 0 )
      *a1 = CDesktopThumbnail::s_pThumbnailNoRef;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xD0u);
  }
  return v1;
}
