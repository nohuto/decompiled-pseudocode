/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180252CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18000A894 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800925F4 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800938E0 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800945A4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edi
  CSurfaceDrawListBrush *v7; // r8
  CSurfaceDrawListBrush *v8; // rax
  __int64 v9; // rcx
  __int16 v11; // [rsp+30h] [rbp-69h] BYREF
  char v12; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v13; // [rsp+40h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v14; // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v15; // [rsp+50h] [rbp-49h]
  CSurfaceDrawListBrush *v16; // [rsp+58h] [rbp-41h] BYREF
  char v17; // [rsp+60h] [rbp-39h]
  __int128 v18; // [rsp+70h] [rbp-29h] BYREF
  char v19; // [rsp+80h] [rbp-19h]
  __int128 v20; // [rsp+88h] [rbp-11h]
  char v21; // [rsp+9Dh] [rbp+4h]
  _OWORD v22[4]; // [rsp+A0h] [rbp+7h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v19 = 0;
  v18 = 0LL;
  v22[0] = 0LL;
  EffectInput::Reset((struct EffectInput *)&v18);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(CDrawingContext **)a2,
                                           (struct D2D_SIZE_F *)a2 + 1,
                                           (struct EffectInput *)&v18);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x30u, 0LL);
LABEL_15:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_16;
  }
  if ( v21 )
  {
    *(_OWORD *)((char *)a2 + 20) = v20;
    goto LABEL_16;
  }
  v13 = 0LL;
  v16 = 0LL;
  v15 = &v13;
  v11 = SamplerMode::k_ClampClampLinear;
  v12 = 1;
  v17 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((struct CSurfaceDrawListBrush *)&v18, &v11, v22, &v16);
  if ( v17 )
  {
    v5 = (__int64)v16;
    v7 = *v15;
    *v15 = v16;
    if ( v7 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v7, 1);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0x3Au, 0LL);
    if ( v13 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
    goto LABEL_15;
  }
  v8 = v13;
  v13 = 0LL;
  v14 = v8;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v14);
  if ( v14 )
    std::default_delete<CDrawListBrush>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v14);
  *((_DWORD *)a2 + 4) |= 0x800u;
  if ( v13 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
LABEL_16:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
  return 0LL;
}
