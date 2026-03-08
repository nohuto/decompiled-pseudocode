/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802A62FC
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A6564 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800C1C30 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x18012CB9A (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A7B10 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderDirtyRegion(
        CHolographicInteropTarget *this,
        struct CHolographicInteropTexture *a2,
        struct CVisualTree *a3,
        const struct CDirtyRegion *a4,
        unsigned int a5,
        unsigned int a6,
        struct IRenderTargetBitmap *a7,
        struct CDrawingContext *a8)
{
  unsigned int v11; // edi
  char *v12; // rcx
  float v13; // xmm2_4
  float v14; // xmm3_4
  __int64 v15; // rcx
  unsigned int i; // ebx
  __int64 v17; // rdx
  __int64 v18; // r9
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  bool IsCurrent; // al
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD v29[2]; // [rsp+58h] [rbp-99h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-91h] BYREF
  __int64 v31; // [rsp+70h] [rbp-81h] BYREF
  float v32; // [rsp+78h] [rbp-79h]
  float v33; // [rsp+7Ch] [rbp-75h]
  float v34[4]; // [rsp+80h] [rbp-71h] BYREF
  float v35[6]; // [rsp+90h] [rbp-61h] BYREF

  v11 = 0;
  v12 = (char *)a7 + *(int *)(*((_QWORD *)a7 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, _DWORD *))v12)(v12, v29);
  v13 = (float)*((int *)a2 + 65);
  v14 = (float)*((int *)a2 + 66);
  v34[0] = v13 + 0.0;
  v34[1] = v14 + 0.0;
  v34[2] = (float)v29[0] + v13;
  v34[3] = (float)v29[1] + v14;
  CDirtyRegion::CalcOcclusion(a4);
  for ( i = 0; i < *((_DWORD *)a4 + 705); ++i )
  {
    v30[0] = 0LL;
    v30[1] = 0LL;
    CDirtyRegion::GetOptimizedRect((__int64)a4, &v31, i, v34, 0LL, 0LL, 0, v30, 0LL);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v31) )
    {
      v19 = v33;
      v20 = v32;
      v21 = *((float *)&v31 + 1);
      v22 = *(float *)&v31;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qdffff_EventWriteTransfer(v15, v17, i, v18, v31, SBYTE4(v31), SLOBYTE(v32), SLOBYTE(v33));
      IsCurrent = COcclusionContext::IsCurrent((const struct CDirtyRegion *)((char *)a4 + 16));
      v35[4] = 0.0;
      v35[5] = 0.0;
      v35[0] = v22;
      v35[1] = v21;
      v35[2] = v20;
      v35[3] = v19;
      v25 = CDrawingContext::DrawVisualTree(a8, a3, v35, (COcclusionContext *)(v24 & -(__int64)IsCurrent), 2, 0, 0LL);
      v11 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v25, 0x1F2u, 0LL);
        return v11;
      }
      CHolographicInteropTexture::NotifyRenderedRect(a2, v26, a6, &v31);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v15, (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a8);
  return v11;
}
