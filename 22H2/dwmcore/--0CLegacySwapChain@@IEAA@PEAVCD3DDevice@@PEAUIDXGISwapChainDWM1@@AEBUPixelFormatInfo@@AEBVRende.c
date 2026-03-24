/*
 * XREFs of ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@W4Enum@FrontBufferRender@@@Z @ 0x1800257DC
 * Callers:
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IW4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x1800256A4 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRe.c)
 *     ??0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024D470 (--0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEB.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024DDA4 (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025A30 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x180025A64 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ??0ILegacySwapChain@@QEAA@XZ @ 0x180025A90 (--0ILegacySwapChain@@QEAA@XZ.c)
 */

__int64 __fastcall CLegacySwapChain::CLegacySwapChain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  __int64 v12; // r11
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // xmm1_8
  __int64 result; // rax

  v12 = a2;
  if ( a10 )
  {
    *(_QWORD *)(a1 + 24) = &CLegacySwapChain::`vbtable'{for `CDeviceResource'};
    *(_QWORD *)(a1 + 312) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 336) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 360) = &CLegacySwapChain::`vbtable'{for `ISwapChain'};
    ILegacySwapChain::ILegacySwapChain((ILegacySwapChain *)(a1 + 352));
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CMILCOMBase::`vftable';
  *(_QWORD *)(a1 + 16) = &CDeviceResource::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 4LL) + a1 + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 24) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 20) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = &CLegacySwapChain::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 16) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 56) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 4LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 8LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 12LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 16LL) + a1 + 24) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  v14 = *(int *)(*(_QWORD *)(a1 + 24) + 4LL);
  *(_DWORD *)(v14 + a1 + 20) = v14 - 264;
  v15 = *(int *)(*(_QWORD *)(a1 + 24) + 8LL);
  *(_DWORD *)(v15 + a1 + 20) = v15 - 280;
  v16 = *(int *)(*(_QWORD *)(a1 + 24) + 12LL);
  *(_DWORD *)(v16 + a1 + 20) = v16 - 304;
  *(_DWORD *)(*(int *)(*(_QWORD *)(a1 + 24) + 16LL) + a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) - 328;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(a1 + 64, v12);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    a1 + 72,
    a3);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 132) = *(_QWORD *)a4;
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a4 + 8);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)a5;
  v17 = *(_QWORD *)(a5 + 16);
  *(_QWORD *)(a1 + 168) = a8;
  *(_QWORD *)(a1 + 160) = v17;
  *(_DWORD *)(a1 + 176) = a6;
  *(_DWORD *)(a1 + 180) = a7;
  *(_DWORD *)(a1 + 184) = a9;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 192) = a1 + 200;
  *(_DWORD *)(a1 + 200) = 0;
  result = a1;
  *(_DWORD *)(a1 + 264) = 0;
  *(_WORD *)(a1 + 268) = 0;
  *(_QWORD *)(a1 + 272) = 0LL;
  return result;
}
