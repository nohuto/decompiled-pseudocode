/*
 * XREFs of ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007ECB0
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000C550 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x180092C64 (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x1800B45F0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800B45F0.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021BCA0 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180225F30 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1802475C8 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1802481CC (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268430 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18007B9D0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithContentRect(
        CDrawListBitmap *a1,
        __int16 *a2,
        float *a3,
        __int64 *a4)
{
  unsigned int v8; // edi
  float v9; // xmm7_4
  float v10; // xmm6_4
  struct CSurfaceDrawListBrush *v11; // rcx
  struct CObjectCache *ObjectCache; // rax
  char *v13; // rbx
  int v14; // edx
  __int16 v15; // r12
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // rax
  unsigned int v23; // xmm1_4
  unsigned int v24; // xmm7_4
  unsigned int v25; // xmm6_4
  unsigned int v27; // ecx
  int v28; // [rsp+30h] [rbp-98h]
  __int128 v29; // [rsp+30h] [rbp-98h]
  int v30; // [rsp+34h] [rbp-94h]

  v8 = 0;
  CDrawListBitmap::GetSize(a1);
  v9 = 1.0 / (float)v28;
  v10 = 1.0 / (float)v30;
  ObjectCache = CThreadContext::GetObjectCache(v11);
  v13 = 0LL;
  v14 = *((_DWORD *)ObjectCache + 1);
  if ( v14 )
  {
    v13 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v13;
    *((_DWORD *)ObjectCache + 1) = v14 - 1;
  }
  if ( v13 || (v13 = (char *)DefaultHeap::Alloc(0x98uLL)) != 0LL )
  {
    v15 = *a2;
    v16 = *((_BYTE *)a2 + 2);
    *(_OWORD *)(v13 + 8) = *(_OWORD *)&_xmm;
    v13[52] = 0;
    *(_QWORD *)v13 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v13 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v17 = *(_QWORD *)a1;
    *((_QWORD *)v13 + 7) = *(_QWORD *)a1;
    if ( v17 )
    {
      v18 = v17 + 8 + *(int *)(*(_QWORD *)(v17 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
    v19 = *((_QWORD *)a1 + 1);
    *((_QWORD *)v13 + 8) = v19;
    if ( v19 )
    {
      v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    }
    v13[72] = *((_BYTE *)a1 + 16);
    *((_WORD *)v13 + 40) = v15;
    v13[82] = v16;
    *((float *)v13 + 21) = v9;
    *((float *)v13 + 25) = v10;
    *((float *)v13 + 27) = 0.0 - (float)(v9 * 0.0);
    *((float *)v13 + 28) = 0.0 - (float)(v10 * 0.0);
    *((_QWORD *)v13 + 11) = 0LL;
    *((_DWORD *)v13 + 24) = 0;
    *((_DWORD *)v13 + 26) = 0;
    *((_DWORD *)v13 + 29) = 1065353216;
    *(_OWORD *)(v13 + 120) = _xmm;
    *((_DWORD *)v13 + 36) = 1;
    v13[148] = 0;
    *a4 = (__int64)v13;
    v13[52] = 1;
    v21 = *(_OWORD *)a3;
    *((_DWORD *)v13 + 12) = 50529027;
    *((_OWORD *)v13 + 2) = v21;
    v22 = *a4;
    *(float *)&v23 = v9 * *a3;
    *(float *)&v21 = v10 * a3[1];
    *(float *)&v24 = v9 * a3[2];
    *(float *)&v25 = v10 * a3[3];
    *(_BYTE *)(v22 + 145) = 0;
    *(_QWORD *)&v29 = __PAIR64__(v21, v23);
    *((_QWORD *)&v29 + 1) = __PAIR64__(v25, v24);
    *(_OWORD *)(v22 + 120) = v29;
  }
  else
  {
    v8 = -2147024882;
    *a4 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  }
  return v8;
}
