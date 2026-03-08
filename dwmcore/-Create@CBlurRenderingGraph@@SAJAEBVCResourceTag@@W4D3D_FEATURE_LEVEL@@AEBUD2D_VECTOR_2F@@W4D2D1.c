/*
 * XREFs of ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x1800D1764
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x180037E34 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapRealization@@M@Z @ 0x1802263E8 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV-$TMilR.c)
 * Callees:
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029D68 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGraph@@@Z @ 0x1800382DC (--0-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGr.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBlurRenderingGraph@@AEAA@AEBVCResourceTag@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800D181C (--0CBlurRenderingGraph@@AEAA@AEBVCResourceTag@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATI.c)
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x1800D1AE4 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 */

__int64 __fastcall CBlurRenderingGraph::Create(
        const struct CResourceTag *a1,
        enum D3D_FEATURE_LEVEL a2,
        const struct D2D_VECTOR_2F *a3,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a4,
        struct CBlurRenderingGraph **a5)
{
  CBlurRenderingGraph *v9; // rax
  __int64 v10; // rcx
  struct CBlurRenderingGraph *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct CBlurRenderingGraph *v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-18h]

  v9 = (CBlurRenderingGraph *)DefaultHeap::Alloc(0x640uLL);
  if ( v9 )
    v9 = CBlurRenderingGraph::CBlurRenderingGraph(v9, a1, a3, a4);
  wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
    &v16,
    (void (__fastcall ***)(_QWORD))v9);
  v11 = v16;
  if ( v16 )
  {
    v18 = 0;
    v17 = (__int64)v16;
    v12 = CBlurRenderingGraphBuilder::Build((CBlurRenderingGraphBuilder *)&v17, a2);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x74u, 0LL);
    }
    else
    {
      v16 = 0LL;
      *a5 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x70u, 0LL);
  }
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)&v16);
  return v14;
}
