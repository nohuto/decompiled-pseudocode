/*
 * XREFs of ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18029FA80
 * Callers:
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18028C668 (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDDASwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18029F790 (--0CDDASwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z.c)
 *     ??4?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDASwapChain@@@Z @ 0x18029F960 (--4-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDASwapChain@@@.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x18029FCE0 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDDASwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct IDDASwapChain **a5)
{
  CDDASwapChain *v9; // rax
  __int64 v10; // rcx
  CDDASwapChain *v11; // rbx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  struct IDDASwapChain *v15; // rcx
  CDDASwapChain *v16; // rcx
  CDDASwapChain *v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = 0LL;
  *a5 = 0LL;
  v9 = (CDDASwapChain *)DefaultHeap::Alloc(0xD8uLL);
  if ( v9 )
    v9 = CDDASwapChain::CDDASwapChain(v9, a2, a3, a4);
  wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::operator=(
    (volatile signed __int32 **)&v18,
    (volatile signed __int32 *)v9);
  v11 = v18;
  if ( v18 )
  {
    v13 = CDDASwapChain::Initialize(v18, a1);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1Du, 0LL);
    }
    else
    {
      v15 = v11;
      v11 = 0LL;
      v18 = 0LL;
      *a5 = v15;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CDDASwapChain *)((char *)v11 + 16));
      (*(void (__fastcall **)(CDDASwapChain *))(*(_QWORD *)v18 + 64LL))(v18);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
      {
        v16 = v18;
        --*((_DWORD *)v11 + 4);
        (*(void (__fastcall **)(CDDASwapChain *, __int64))(*(_QWORD *)v16 + 56LL))(v16, 1LL);
      }
    }
  }
  return v12;
}
