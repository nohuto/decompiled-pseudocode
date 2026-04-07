/*
 * XREFs of ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x1800886FC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C648 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x18008D4A4 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180052364 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
        CFullScreenMagnifier *this,
        double a2,
        int a3,
        int a4)
{
  int updated; // eax
  unsigned int v5; // ebx

  updated = CFullScreenMagnifier::UpdateSettings(this, a2, (double)a3, (double)a4);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x187u);
  return v5;
}
