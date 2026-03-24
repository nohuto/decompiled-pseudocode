/*
 * XREFs of ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C5EC4
 * Callers:
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800F1D48 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800F1E5C (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180249DA4 (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024A014 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18024D9CC (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 *     ?HasPendingScribble@CLegacySwapChain@@QEBA_NXZ @ 0x180249BE4 (-HasPendingScribble@CLegacySwapChain@@QEBA_NXZ.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x18024A0E8 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 *     ?SetFrontBufferRenderingMode@CLegacySwapChain@@IEAAJ_N@Z @ 0x18024A1FC (-SetFrontBufferRenderingMode@CLegacySwapChain@@IEAAJ_N@Z.c)
 */

void __fastcall CLegacySwapChain::PostPresent(CLegacySwapChain *this, char a2)
{
  bool v2; // di
  __int64 v4; // rcx
  int v5; // eax

  v2 = 0;
  if ( !a2 )
  {
    *((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 256LL))(*((_QWORD *)this + 9));
    **((_DWORD **)this + 24) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0q_EventWriteTransfer(v4, &EVTDESC_LEGACYSWAPCHAIN_BUFFERFLIP, *((unsigned int *)this + 32));
    v5 = *((_DWORD *)this + 66);
    if ( v5 )
    {
      *((_DWORD *)this + 66) = v5 - 1;
      CLegacySwapChain::ReleaseD3D12Resources(this);
    }
  }
  if ( *((_DWORD *)this + 46) )
  {
    if ( *((_BYTE *)this + 269) || CLegacySwapChain::HasPendingScribble(this) )
      v2 = 1;
    CLegacySwapChain::SetFrontBufferRenderingMode(this, v2);
  }
}
