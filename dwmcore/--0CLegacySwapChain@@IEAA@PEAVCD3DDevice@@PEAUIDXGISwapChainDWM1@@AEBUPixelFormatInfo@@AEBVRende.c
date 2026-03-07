__int64 __fastcall CLegacySwapChain::CLegacySwapChain(
        __int64 a1,
        struct CD3DDevice *a2,
        __int64 a3,
        __int64 a4,
        struct RenderTargetInfo *a5,
        struct _LUID a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        struct DXGI_RATIONAL *a10,
        unsigned __int64 a11,
        unsigned __int64 a12,
        UINT a13,
        int a14,
        int a15)
{
  __int64 v15; // rdi
  struct CD3DDevice *v18; // r11

  v15 = a1 + 8;
  v18 = a2;
  if ( a15 )
  {
    *(_QWORD *)v15 = &CLegacySwapChain::`vbtable'{for `ISwapChain's `COverlaySwapChainBase'};
    *(_QWORD *)(a1 + 48) = &CLegacySwapChain::`vbtable'{for `CDeviceResource'};
    *(_QWORD *)(a1 + 392) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 416) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 440) = &CSecondaryD2DBitmap::`vbtable'{for `IDeviceSurface'};
    ILegacySwapChain::ILegacySwapChain((ILegacySwapChain *)(a1 + 432));
  }
  COverlaySwapChainBase::COverlaySwapChainBase((COverlaySwapChainBase *)a1, v18, a5, a8, a9, a6);
  *(_QWORD *)a1 = &CLegacySwapChain::`vftable'{for `IOverlaySwapChain'};
  *(_QWORD *)(a1 + 16) = &CLegacySwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *(_QWORD *)(a1 + 40) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 216) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v15 + 4LL) + a1 + 8) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v15 + 8LL) + a1 + 8) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v15 + 12LL) + a1 + 8) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v15 + 16LL) + a1 + 8) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  *(_DWORD *)(*(int *)(*(_QWORD *)v15 + 4LL) + a1 + 4) = *(_DWORD *)(*(_QWORD *)v15 + 4LL) - 360;
  *(_DWORD *)(*(int *)(*(_QWORD *)v15 + 8LL) + a1 + 4) = *(_DWORD *)(*(_QWORD *)v15 + 8LL) - 376;
  *(_DWORD *)(*(int *)(*(_QWORD *)v15 + 12LL) + a1 + 4) = *(_DWORD *)(*(_QWORD *)v15 + 12LL) - 400;
  *(_DWORD *)(*(int *)(*(_QWORD *)v15 + 16LL) + a1 + 4) = *(_DWORD *)(*(_QWORD *)v15 + 16LL) - 424;
  wil::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>(
    a1 + 224,
    a3);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 276) = *(_QWORD *)a4;
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a4 + 8);
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_DWORD *)(a1 + 316) = a7;
  *(_DWORD *)(a1 + 320) = a14;
  *(_DWORD *)(a1 + 312) = 1;
  *(_QWORD *)(a1 + 336) = 1LL;
  *(_WORD *)(a1 + 344) = 0;
  *(_BYTE *)(a1 + 346) = 0;
  *(_QWORD *)(a1 + 352) = 0LL;
  CLegacySwapChain::CalcVBlankDuration(
    (struct DXGI_RATIONAL *)a1,
    a10,
    (struct DXGI_RATIONAL)a11,
    (struct DXGI_RATIONAL)a12,
    a13);
  return a1;
}
