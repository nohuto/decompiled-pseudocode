/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1801F14D8
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D36A0 (-PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800347D0 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003493C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        _OWORD *a3,
        CExternalLayer **a4)
{
  void (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  struct _LUID *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CExternalLayer *v13; // rax
  __int64 v14; // rcx
  CExternalLayer *v15; // rbx
  struct IRenderTargetBitmap *v17; // [rsp+30h] [rbp-50h] BYREF
  const char *v18; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  char v20[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v21[4]; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+64h] [rbp-1Ch]

  *a4 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, _BYTE *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v8)(v8, v21);
  v17 = 0LL;
  v22 = 1;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v17);
  v9 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, char *))a1)(a1, v20);
  v19 = 52;
  v18 = "DWM Scratch Rendertarget (linear interpolation layer";
  v10 = CExternalLayer::CreateBitmap((CDeviceManager *)&v18, a2, (__int64)v21, v9, 1, &v17);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x18u, 0LL);
  }
  else
  {
    v13 = (CExternalLayer *)operator new(0x88uLL);
    v15 = v13;
    if ( v13 )
    {
      CExternalLayer::CExternalLayer(v13, a2, v17);
      *(_QWORD *)v15 = &CLinearInterpolationLayer::`vftable';
      *(_OWORD *)((char *)v15 + 120) = *a3;
      *a4 = v15;
    }
    else
    {
      *a4 = 0LL;
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x1Du, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  return v12;
}
