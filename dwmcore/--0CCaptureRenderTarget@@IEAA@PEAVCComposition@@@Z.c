CCaptureRenderTarget *__fastcall CCaptureRenderTarget::CCaptureRenderTarget(
        CCaptureRenderTarget *this,
        struct CComposition *a2,
        int a3)
{
  char *v3; // rdi
  CCaptureRenderTarget *result; // rax
  const char *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v3 = (char *)this + 80;
  if ( a3 )
  {
    *(_QWORD *)v3 = &CCaptureRenderTarget::`vbtable'{for `IVisualTreeClient'};
    *((_QWORD *)this + 262) = &CInk::`vbtable'{for `IContent'};
    *((_QWORD *)this + 265) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
    *((_QWORD *)this + 264) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 265) + 4LL) + 2120) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  }
  v7 = 26;
  v6 = "DWM Rendertarget (capture)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v6);
  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 233) = &CCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 4LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 8LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 12LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 4LL) + 76) = *(_DWORD *)(*(_QWORD *)v3 + 4LL) - 1992;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 8LL) + 76) = *(_DWORD *)(*(_QWORD *)v3 + 8LL) - 2008;
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v3 + 12LL) + 76) = *(_DWORD *)(*(_QWORD *)v3 + 12LL) - 2032;
  *((_QWORD *)this + 234) = 0LL;
  *((_QWORD *)this + 239) = 0LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 241) = 0LL;
  *((_QWORD *)this + 243) = 0LL;
  *((_QWORD *)this + 245) = 0LL;
  *((_QWORD *)this + 246) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = 0LL;
  *((_QWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 254) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  *((_QWORD *)this + 256) = 0LL;
  *((_QWORD *)this + 257) = 0LL;
  *((_BYTE *)this + 140) = 0;
  *(_WORD *)((char *)this + 1897) = 1;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 484) = -1;
  *((_DWORD *)this + 475) = 0;
  *((_DWORD *)this + 438) = 0;
  *((_DWORD *)this + 476) = 0x40000000;
  return result;
}
