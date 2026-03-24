/*
 * XREFs of ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x18024F308
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x18024F6A0 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x18024FDCC (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180060D74 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConversionSwapChain::EnsureTargetBitmap(CConversionSwapChain *this)
{
  struct IRenderTargetBitmap **v1; // rsi
  unsigned int v3; // ebx
  CD3DDevice *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, char *); // rcx
  const struct D2D_SIZE_U *v6; // rax
  int RenderTargetBitmap; // eax
  __int64 v8; // rcx
  const char *v10; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp-10h]
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct IRenderTargetBitmap **)((char *)this + 296);
  if ( *((_QWORD *)this + 37) )
  {
    return 0;
  }
  else
  {
    v4 = (CD3DDevice *)*((_QWORD *)this + 8);
    *v1 = 0LL;
    v5 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)this + 10)
                                                  + 8LL
                                                  + *(int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL) + 16LL));
    v6 = (const struct D2D_SIZE_U *)(**v5)(v5, &v12);
    v11 = 37;
    v10 = "Conversion intermediate target bitmap";
    RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap(
                           v4,
                           (const struct CResourceTag *)&v10,
                           v6,
                           (CConversionSwapChain *)((char *)this + 304),
                           (CConversionSwapChain *)((char *)this + 144),
                           0,
                           v1);
    v3 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, RenderTargetBitmap, 0x1AEu, 0LL);
  }
  return v3;
}
