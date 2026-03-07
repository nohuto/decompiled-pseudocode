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
