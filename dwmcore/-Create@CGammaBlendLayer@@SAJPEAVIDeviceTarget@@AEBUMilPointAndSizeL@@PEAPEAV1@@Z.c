/*
 * XREFs of ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x1801F1DD0
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801D35EC (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800347D0 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003493C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGammaBlendLayer::Create(
        struct IDeviceTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CGammaBlendLayer **a3)
{
  int v3; // eax
  struct _LUID *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  CExternalLayer *v11; // rax
  __int64 v12; // rcx
  struct CGammaBlendLayer *v13; // rbx
  _DWORD v15[4]; // [rsp+30h] [rbp-40h] BYREF
  const char *v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  _BYTE v18[32]; // [rsp+50h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+90h] [rbp+20h] BYREF

  *a3 = 0LL;
  v3 = 87;
  v15[2] = 0;
  if ( CCommonRegistryData::GammaBlendWithFP16 )
    v3 = 10;
  v19 = 0LL;
  v15[0] = v3;
  v15[1] = 1;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v19);
  v7 = (struct _LUID *)(**(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a1)(a1, v18);
  v17 = 44;
  v16 = "DWM Scratch Rendertarget (gamma blend layer)";
  v8 = CExternalLayer::CreateBitmap((CDeviceManager *)&v16, a2, (__int64)v15, v7, 1, &v19);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x27u, 0LL);
  }
  else
  {
    v11 = (CExternalLayer *)operator new(0x78uLL);
    v13 = v11;
    if ( v11 )
    {
      CExternalLayer::CExternalLayer(v11, a2, v19);
      *a3 = v13;
      *(_QWORD *)v13 = &CGammaBlendLayer::`vftable';
    }
    else
    {
      *a3 = 0LL;
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x2Bu, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  return v10;
}
