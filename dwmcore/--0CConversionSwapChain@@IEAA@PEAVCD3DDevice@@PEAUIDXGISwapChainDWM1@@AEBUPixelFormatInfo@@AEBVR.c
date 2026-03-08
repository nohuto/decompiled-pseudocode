/*
 * XREFs of ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x18029D1A0
 * Callers:
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029E67C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x1800CA640 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x1800CA8E4 (--0ILegacySwapChain@@QEAA@XZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

CConversionSwapChain *__fastcall CConversionSwapChain::CConversionSwapChain(
        CConversionSwapChain *this,
        struct CD3DDevice *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct _LUID a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct DXGI_RATIONAL a10)
{
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CConversionSwapChain *result; // rax

  *((_QWORD *)this + 1) = &CConversionSwapChain::`vbtable'{for `ISwapChain's `COverlaySwapChainBase'};
  *((_QWORD *)this + 6) = &CConversionSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 46) = &CConversionSwapChain::`vbtable';
  *((_QWORD *)this + 102) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 105) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 108) = &CConversionSwapChain::`vbtable'{for `ISwapChain's `ILegacySwapChain'};
  ILegacySwapChain::ILegacySwapChain((CConversionSwapChain *)((char *)this + 856));
  CLegacySwapChain::CLegacySwapChain((__int64)this, a2, (__int64)a3, v13, a5, a6, a7, a8, a9, &a10, 0LL, 0LL, 1u, 0, 0);
  *((_QWORD *)this + 45) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 46) + 4LL) + 368) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CConversionSwapChain::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &CConversionSwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &CConversionSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 27) = &CConversionSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 45) = &CConversionSwapChain::`vftable'{for `IConversionSwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CConversionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CConversionSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CConversionSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 8) = &CConversionSwapChain::`vftable'{for `ILegacySwapChain'};
  v14 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v14 + 4) = v14 - 784;
  v15 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v15 + 4) = v15 - 800;
  v16 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v16 + 4) = v16 - 824;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                         - 848;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 99) = 0;
  memset_0((char *)this + 400, 0, 0x110uLL);
  *((_QWORD *)this + 84) = (char *)this + 680;
  *((_DWORD *)this + 170) = 0;
  result = this;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_BYTE *)this + 776) = 0;
  *((_DWORD *)this + 96) = 10;
  *((_DWORD *)this + 97) = 3;
  *((_DWORD *)this + 98) = 1;
  return result;
}
