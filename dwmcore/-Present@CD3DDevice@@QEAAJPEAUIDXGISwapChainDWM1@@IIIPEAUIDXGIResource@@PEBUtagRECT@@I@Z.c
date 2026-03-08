/*
 * XREFs of ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180109F7C
 * Callers:
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180109EA0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?InternalPresentDFlip@CLegacySwapChain@@MEAAJ_N0IIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x180297D00 (-InternalPresentDFlip@CLegacySwapChain@@MEAAJ_N0IIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXG.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18029CBD0 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18029CCF0 (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_.c)
 *     ?Present@CDDASwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18029FF10 (-Present@CDDASwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1800C6754 (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::Present(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  int v2; // ebx
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 272);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v2, 0x305u, 0LL);
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 104LL))(*((_QWORD *)this + 28));
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v2, 0x311u, 0LL);
    }
    else
    {
      *((_QWORD *)this + 186) = GetCurrentFrameId();
      *((_BYTE *)this + 1507) = 0;
      if ( v2 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(a2);
    }
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 1);
}
