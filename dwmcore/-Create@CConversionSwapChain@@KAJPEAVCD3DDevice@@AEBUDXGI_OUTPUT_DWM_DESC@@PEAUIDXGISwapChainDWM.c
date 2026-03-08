/*
 * XREFs of ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029E67C
 * Callers:
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18028C284 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ @ 0x180102C1C (-InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIUDXGI_RATIONAL@@@Z @ 0x18029D1A0 (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x18029ED80 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18029EEB0 (-IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::Create(
        struct CD3DDevice *a1,
        struct _LUID *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacySwapChain **a6)
{
  struct ILegacySwapChain *v6; // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rcx
  CConversionSwapChain *v15; // rax
  CConversionSwapChain *v16; // rax
  CConversionSwapChain *v17; // rbx
  CConversionSwapChain *v18; // rbp
  int v19; // eax
  __int64 v20; // rcx
  _BYTE v22[8]; // [rsp+60h] [rbp-98h] BYREF
  struct DXGI_RATIONAL v23; // [rsp+68h] [rbp-90h]
  unsigned int v24; // [rsp+88h] [rbp-70h]

  v6 = 0LL;
  *a6 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v22);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x39u, 0LL);
  }
  else if ( CConversionSwapChain::IsSupportedFakeOverlayColorSpace(*((enum DXGI_COLOR_SPACE_TYPE *)a4 + 2)) )
  {
    v15 = (CConversionSwapChain *)operator new(0x368uLL);
    if ( v15 )
    {
      v16 = CConversionSwapChain::CConversionSwapChain(
              v15,
              a1,
              a3,
              a4,
              a5,
              *a2,
              v24,
              a2[1].LowPart,
              a2[1].HighPart,
              v23);
      v17 = v16;
      v18 = v16;
      if ( v16 )
        CMILRefCountImpl::AddReference((CConversionSwapChain *)((char *)v16 + 24));
    }
    else
    {
      v18 = 0LL;
      v17 = 0LL;
    }
    v19 = CConversionSwapChain::Initialize(v18);
    v13 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x4Bu, 0LL);
      if ( v17 )
        CMILCOMBaseWeakRef::InternalRelease((CConversionSwapChain *)((char *)v17 + 16));
    }
    else
    {
      if ( v18 )
        v6 = (CConversionSwapChain *)((char *)v18 + *(int *)(*((_QWORD *)v18 + 1) + 16LL) + 8);
      *a6 = v6;
    }
  }
  else
  {
    v13 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003292288, 0x51u, 0LL);
  }
  return v13;
}
