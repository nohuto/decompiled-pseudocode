/*
 * XREFs of ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800C6910
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18011B970 (-PresentMPO@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800C69DC (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800C6AC0 (-PostPresent@CLegacySwapChain@@MEAAJ_N0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::PresentMPO(
        CD3DDevice **this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        void *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  bool v11; // si
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx

  if ( (a3 & 2) != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    (*((void (__fastcall **)(CD3DDevice **))*this + 3))(this);
  }
  v12 = CD3DDevice::PresentMPO(this[10], this[28], a2, a3, a4, a5, a6, a7);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x452u, 0LL);
  else
    CLegacySwapChain::PostPresent((CLegacySwapChain *)this, v11, v12 == 142213121);
  return v14;
}
