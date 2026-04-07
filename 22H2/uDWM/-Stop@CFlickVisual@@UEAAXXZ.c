/*
 * XREFs of ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800A65C0
 * Callers:
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A6154 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800A6680 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020250 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180085058 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18009FD58 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800A6630 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 */

void __fastcall CFlickVisual::Stop(CFlickVisual *this)
{
  __int64 v2; // rcx

  CFlickVisual::StopTimer(this);
  CContactManager::PostFlickFeedbackUpdate(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
    *((_DWORD *)this + 74),
    *((_DWORD *)this + 75),
    (_QWORD *)this + 39,
    0);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v2, (__int64)&UdwmFlickVisual_End, *((unsigned int *)this + 75));
}
