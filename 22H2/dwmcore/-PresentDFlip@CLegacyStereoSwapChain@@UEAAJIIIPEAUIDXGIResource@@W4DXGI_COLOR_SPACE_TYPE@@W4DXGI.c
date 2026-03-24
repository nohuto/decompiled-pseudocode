/*
 * XREFs of ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18024D9CC
 * Callers:
 *     ?PresentDFlip@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1800F7300 (-PresentDFlip@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18009279C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C5EC4 (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180153F28 (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::PresentDFlip(__int64 a1, unsigned int a2, char a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi

  v4 = CD3DDevice::Present(*(CD3DDevice **)(a1 - 312), *(struct IDXGISwapChainDWM1 **)(a1 - 304), a2, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xABu, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v5, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *(unsigned int *)(a1 - 196));
    CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 376), 0);
  }
  return v6;
}
