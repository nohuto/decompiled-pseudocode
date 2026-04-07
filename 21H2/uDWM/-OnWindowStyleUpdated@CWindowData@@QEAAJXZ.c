/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180028998
 * Callers:
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800288E0 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002AA14 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x18004161C (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800289E8 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004506C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  unsigned int v2; // ebx
  CTopLevelWindow *v3; // rcx
  int v4; // eax
  CWindowIconic *v5; // rcx
  int v7; // eax

  v2 = 0;
  v3 = (CTopLevelWindow *)*((_QWORD *)this + 48);
  if ( v3 && (v4 = CTopLevelWindow::OnWindowStyleUpdated(v3), v2 = v4, v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1D19u);
  }
  else
  {
    v5 = (CWindowIconic *)*((_QWORD *)this + 53);
    if ( v5 )
    {
      v7 = CWindowIconic::OnWindowStyleUpdated(v5, 1);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1D1Eu);
    }
  }
  return v2;
}
