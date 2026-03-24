/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9774
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018489C (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018C710 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018D710 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F96D0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800084D8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800680DC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B5CC (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009BA90 (--1CRegionShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801F95C0 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, __int64 a2)
{
  int *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  int v8; // ebx
  __int64 v9; // rcx
  struct CShape *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-59h]
  struct CShape *v16; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v17; // [rsp+38h] [rbp-41h] BYREF
  struct CShape *v18; // [rsp+40h] [rbp-39h] BYREF
  char v19; // [rsp+48h] [rbp-31h]
  _QWORD v20[3]; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+68h] [rbp-11h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+2Fh]

  v16 = 0LL;
  v20[1] = 0LL;
  v20[0] = &CRegionShape::`vftable';
  v20[2] = &v21;
  v21 = 0;
  v22 = 0LL;
  v3 = CMilRectLFromMilRectF((int *)&v17, a2);
  CRegionShape::BuildFromRects((__int64)v20, (__int64)v3, 1);
  if ( !*((_QWORD *)this + 20) )
  {
    v5 = DefaultHeap::Alloc(0x60uLL);
    v7 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x60uLL);
      *v7 = &CRegionShape::`vftable';
      v6 = (__int64)(v7 + 3);
      v7[2] = v7 + 3;
      *((_DWORD *)v7 + 6) = 0;
      v7[11] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = v7;
    if ( v4 )
    {
      std::default_delete<CShape>::operator()(v6, v4);
      v7 = (_QWORD *)*((_QWORD *)this + 20);
    }
    if ( !v7 )
    {
      v8 = -2147024882;
      v15 = 112;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v8, v15, 0LL);
      goto LABEL_17;
    }
  }
  v9 = *((_QWORD *)this + 2);
  v17 = &v16;
  v18 = 0LL;
  v19 = 1;
  v8 = CShape::Combine(v9, (__int64)v4, (__int64)v20, (__int64)this + 92, 1, &v18);
  if ( v19 )
  {
    v10 = *v17;
    *v17 = v18;
    if ( v10 )
      std::default_delete<CShape>::operator()(v6, (__int64 (__fastcall ***)(_QWORD, __int64))v10);
  }
  if ( v8 < 0 )
  {
    v15 = 121;
    goto LABEL_16;
  }
  v11 = CComposeTop::AddShapeToLifetime(this, v16);
  v8 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x7Fu, 0LL);
LABEL_17:
  CRegionShape::~CRegionShape((CRegionShape *)v20);
  if ( v16 )
    std::default_delete<CShape>::operator()(v13, (__int64 (__fastcall ***)(_QWORD, __int64))v16);
  return (unsigned int)v8;
}
