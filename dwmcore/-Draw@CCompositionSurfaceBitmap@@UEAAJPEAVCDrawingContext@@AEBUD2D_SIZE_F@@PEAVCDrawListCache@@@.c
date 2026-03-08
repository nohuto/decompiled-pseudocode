/*
 * XREFs of ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CC70
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180118110 (-Draw@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x18000D1AC (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18000D2DC (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18000D468 (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?BeginStatsInstance@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x18000D4C4 (-BeginStatsInstance@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x18000D500 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D87F0 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?IsProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801115E0 (-IsProtected@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18012E2F4 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     McTemplateU0pppffff_EventWriteTransfer @ 0x18012E414 (McTemplateU0pppffff_EventWriteTransfer.c)
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x1802237F8 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Draw(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CCompositionSurfaceBitmap *v5; // rsi
  unsigned int v9; // ebx
  char v10; // dl
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  float v16; // xmm7_4
  float v17; // xmm6_4
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  float height; // xmm1_4
  float v24; // xmm0_4
  struct _D3DCOLORVALUE *BorderColor; // rax
  int v26; // eax
  unsigned int v27; // ecx
  _BYTE v28[64]; // [rsp+58h] [rbp-B0h] BYREF
  int v29; // [rsp+98h] [rbp-70h]
  __int128 v30; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v32[4]; // [rsp+C8h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v33; // [rsp+D8h] [rbp-30h] BYREF

  v5 = (CCompositionSurfaceBitmap *)((char *)this - 224);
  v9 = 0;
  v29 = 0;
  v31 = 0LL;
  CCompositionSurfaceBitmap::CalcImageTransform(
    (CCompositionSurfaceBitmap *)((char *)this - 224),
    a3,
    (CMILMatrix *)v28);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v31) )
  {
    v30 = 0LL;
    if ( v10 )
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v28, (struct MilRectF *)&v31);
    else
      v30 = v31;
    CDrawingContext::EtwLogCurrentState(a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v16 = *((float *)&v30 + 3) - *((float *)&v30 + 1);
      v17 = *((float *)&v30 + 2) - *(float *)&v30;
      v18 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
      McTemplateU0pppffff_EventWriteTransfer(v20, v19, v18, (_DWORD)v5, (char)v5, 0, 0, SLOBYTE(v17), SLOBYTE(v16));
    }
    if ( *(_BYTE *)(*((_QWORD *)this - 26) + 1274LL) && CCompositionSurfaceBitmap::IsProtected(v5) )
    {
      v21 = (*(__int64 (__fastcall **)(char *, __int128 *, const struct _D3DCOLORVALUE *))(*((_QWORD *)a2 + 2) + 16LL))(
              (char *)a2 + 16,
              &v30,
              &stru_180383220);
      v9 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xF7u, 0LL);
        return v9;
      }
      *((_BYTE *)a2 + 8095) = 1;
    }
    else
    {
      CDrawingContext::BeginStatsInstance(
        a2,
        (struct IBitmapResource *)(((unsigned __int64)this - 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64)));
      if ( !CDrawingContext::DrawAsOverlay(
              a2,
              (struct IBitmapResource *)(((unsigned __int64)this - 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64))) )
      {
        v11 = CContent::Draw((CCompositionSurfaceBitmap *)((char *)this - 128), a2, a3, a4);
        v9 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xEEu, 0LL);
          return v9;
        }
      }
    }
    if ( !(unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v5) )
      goto LABEL_10;
    if ( !CCompositionSurfaceBitmap::UseLayoutSizeForBounds(v5, a3) )
      goto LABEL_10;
    height = a3->height;
    v24 = a3->width + 0.0;
    v32[0] = 0;
    v32[1] = 0;
    *(float *)&v32[2] = v24;
    *(float *)&v32[3] = height + 0.0;
    BorderColor = CCompositionSurfaceBitmap::GetBorderColor(v5, &v33);
    v26 = CCompositionSurfaceBitmap::DrawContentBorders(a2, v32, &v30, BorderColor);
    v9 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x108u, 0LL);
    }
    else
    {
LABEL_10:
      v13 = CCompositionSurfaceBitmap::DrawLetterboxingMarginsInternal(v5, a2, &v31, v28);
      v9 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x10Cu, 0LL);
    }
  }
  return v9;
}
