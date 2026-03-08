/*
 * XREFs of ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18029CCF0
 * Callers:
 *     ?PresentDFlip@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18011C9F0 (-PresentDFlip@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800C6AC0 (-PostPresent@CLegacySwapChain@@MEAAJ_N0@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180109F7C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::PresentDFlip(CD3DDevice **this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CD3DDevice::Present(this[10], this[28]);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xB1u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0x_EventWriteTransfer(
        v3,
        (__int64)&EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT,
        *((unsigned int *)this + 24));
    CLegacySwapChain::PostPresent((CLegacySwapChain *)this, 0, v4 == 142213121);
  }
  return v4;
}
