/*
 * XREFs of ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800925F4
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800108C0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013830 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800300A0 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800B6320 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18021CDE0 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18024A460 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180252CC0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18007B9D0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(
        struct CSurfaceDrawListBrush *a1,
        __int16 *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  unsigned int v8; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v10; // rbx
  int v11; // r8d
  __int16 v12; // r12
  char v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v17; // ecx

  v8 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0x98uLL)) != 0LL )
  {
    v12 = *a2;
    v13 = *((_BYTE *)a2 + 2);
    *(_OWORD *)(v10 + 8) = *(_OWORD *)&_xmm;
    v10[52] = 0;
    *(_QWORD *)v10 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v10 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v14 = *(_QWORD *)a1;
    *((_QWORD *)v10 + 7) = *(_QWORD *)a1;
    if ( v14 )
    {
      v15 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
      v10 + 64,
      *((_QWORD *)a1 + 1));
    v10[72] = *((_BYTE *)a1 + 16);
    *((_WORD *)v10 + 40) = v12;
    v10[82] = v13;
    *((_DWORD *)v10 + 21) = *a3;
    *((_DWORD *)v10 + 22) = a3[1];
    *((_DWORD *)v10 + 23) = a3[2];
    *((_DWORD *)v10 + 24) = a3[3];
    *((_DWORD *)v10 + 25) = a3[4];
    *((_DWORD *)v10 + 26) = a3[5];
    *((_DWORD *)v10 + 27) = a3[6];
    *((_DWORD *)v10 + 28) = a3[7];
    *((_DWORD *)v10 + 29) = a3[8];
    *(_OWORD *)(v10 + 120) = _xmm;
    *((_DWORD *)v10 + 36) = 256;
    v10[148] = 0;
    *a4 = v10;
  }
  else
  {
    *a4 = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x3Au, 0LL);
  }
  return v8;
}
