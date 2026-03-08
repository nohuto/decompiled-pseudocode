/*
 * XREFs of ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1801F01CC
 * Callers:
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D3304 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800347D0 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003493C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180091250 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorSpaceLayer::Create(
        struct IDeviceTarget *a1,
        const struct MilPointAndSizeL *a2,
        int a3,
        struct CColorSpaceLayer **a4)
{
  char v7; // al
  int v8; // r8d
  struct _LUID *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CExternalLayer *v13; // rax
  __int64 v14; // rcx
  CExternalLayer *v15; // rbx
  _DWORD v17[4]; // [rsp+30h] [rbp-40h] BYREF
  const char *v18; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+48h] [rbp-28h]
  _BYTE v20[32]; // [rsp+50h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v21; // [rsp+90h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = IsDXGIColorSpaceHDR(a3);
  v17[1] = 1;
  v17[2] = v8;
  v21 = 0LL;
  v17[0] = v7 != 0 ? 10 : 87;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v21);
  v9 = (struct _LUID *)(**(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a1)(a1, v20);
  v19 = 43;
  v18 = "DWM Scratch Rendertarget (colorspace layer)";
  v10 = CExternalLayer::CreateBitmap((CDeviceManager *)&v18, a2, (__int64)v17, v9, 1, &v21);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20u, 0LL);
  }
  else
  {
    v13 = (CExternalLayer *)operator new(0x80uLL);
    v15 = v13;
    if ( v13 )
    {
      CExternalLayer::CExternalLayer(v13, a2, v21);
      *((_BYTE *)v15 + 120) = 1;
      *(_QWORD *)v15 = &CColorSpaceLayer::`vftable';
      *a4 = v15;
    }
    else
    {
      *a4 = 0LL;
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x24u, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
  return v12;
}
