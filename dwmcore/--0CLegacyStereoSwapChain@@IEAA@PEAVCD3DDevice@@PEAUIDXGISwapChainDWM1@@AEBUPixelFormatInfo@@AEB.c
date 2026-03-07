CLegacyStereoSwapChain *__fastcall CLegacyStereoSwapChain::CLegacyStereoSwapChain(
        CLegacyStereoSwapChain *this,
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
  __int64 v17; // rcx
  CLegacyStereoSwapChain *result; // rax

  *((_QWORD *)this + 1) = &CLegacyStereoSwapChain::`vbtable'{for `ISwapChain's `COverlaySwapChainBase'};
  *((_QWORD *)this + 6) = &CLegacyStereoSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 50) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 53) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 56) = &CConversionSwapChain::`vbtable'{for `ISwapChain's `ILegacySwapChain'};
  ILegacySwapChain::ILegacySwapChain((CLegacyStereoSwapChain *)((char *)this + 440));
  CLegacySwapChain::CLegacySwapChain((__int64)this, a2, (__int64)a3, v13, a5, a6, a7, a8, a9, &a10, 0LL, 0LL, 1u, 0, 0);
  *(_QWORD *)this = &CLegacyStereoSwapChain::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &CLegacyStereoSwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &CLegacyStereoSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 27) = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CLegacyStereoSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CLegacyStereoSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 8) = &CLegacyStereoSwapChain::`vftable'{for `ILegacySwapChain'};
  v14 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v14 + 4) = v14 - 368;
  v15 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v15 + 4) = v15 - 384;
  v16 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v16 + 4) = v16 - 408;
  v17 = *(int *)(*((_QWORD *)this + 1) + 16LL);
  result = this;
  *(_DWORD *)((char *)this + v17 + 4) = v17 - 432;
  *((_QWORD *)this + 45) = 0LL;
  return result;
}
