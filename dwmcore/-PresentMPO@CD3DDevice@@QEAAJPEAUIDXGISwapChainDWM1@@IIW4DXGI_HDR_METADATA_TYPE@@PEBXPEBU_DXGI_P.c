/*
 * XREFs of ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800C69DC
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800C6910 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_.c)
 *     ?InternalPresentDFlip@CLegacySwapChain@@MEAAJ_N0IIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x180297D00 (-InternalPresentDFlip@CLegacySwapChain@@MEAAJ_N0IIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXG.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1800C6754 (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::PresentMPO(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = *((_DWORD *)this + 272);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v2, 0x334u, 0LL);
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 112LL))(*((_QWORD *)this + 28));
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v2, 0x33Eu, 0LL);
    }
    else
    {
      v6 = 0LL;
      if ( g_pComposition )
        v6 = *((_QWORD *)g_pComposition + 62);
      *((_QWORD *)this + 186) = v6;
      *((_BYTE *)this + 1507) = 0;
      if ( v2 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(a2);
    }
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 1);
}
