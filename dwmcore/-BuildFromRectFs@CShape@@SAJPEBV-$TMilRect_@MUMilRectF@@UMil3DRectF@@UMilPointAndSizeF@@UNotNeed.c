/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801AE5EC
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4874 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180061F00 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180092148 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800CA19C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800E45D8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800F0A30 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1801AF46C (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(__int64 a1, __int64 a2, CRectanglesShape **a3)
{
  unsigned int v3; // edi
  CRectanglesShape *v4; // rbx
  unsigned int v5; // r9d
  struct CRectanglesShape *v8; // rcx
  int v9; // r9d
  CRectanglesShape *v10; // rax
  __int64 v11; // rcx
  CRectanglesShape *v12; // rsi
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v14; // rax
  int v15; // r8d
  CRectanglesShape *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-88h]
  int v21[4]; // [rsp+30h] [rbp-78h] BYREF
  struct tagRECT v22[4]; // [rsp+40h] [rbp-68h] BYREF

  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  while ( IsPixelAligned((const struct MilRectF *)(a1 + 16LL * v5)) )
  {
    v5 = v9 + 1;
    if ( v5 )
    {
      `vector constructor iterator'(
        (char *)v22,
        16LL,
        4LL,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
      v22[0] = *(struct tagRECT *)CMilRectLFromMilRectF(v21, a1);
      v10 = (CRectanglesShape *)DefaultHeap::Alloc(0x60uLL);
      v12 = v10;
      if ( v10 )
      {
        *((_QWORD *)v10 + 1) = 0LL;
        *(_QWORD *)v10 = &CRegionShape::`vftable';
        *((_QWORD *)v10 + 2) = (char *)v10 + 24;
        *((_DWORD *)v10 + 6) = 0;
        *((_QWORD *)v10 + 11) = 0LL;
        CRegionShape::BuildFromRects((__int64)v10, v22, 1u);
        *a3 = v12;
        goto LABEL_17;
      }
      v20 = 74;
      goto LABEL_16;
    }
  }
  ObjectCache = CThreadContext::GetObjectCache(v8);
  v14 = 0LL;
  v15 = *((_DWORD *)ObjectCache + 1);
  if ( v15 )
  {
    v14 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v14;
    *((_DWORD *)ObjectCache + 1) = v15 - 1;
  }
  if ( !v14 && (v14 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) == 0LL
    || (v16 = CRectanglesShape::CRectanglesShape(v14), (v4 = v16) == 0LL) )
  {
    v20 = 82;
LABEL_16:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, v20, 0LL);
    goto LABEL_17;
  }
  v17 = CRectanglesShape::BuildFromRectFs(v16, a1, 1LL);
  v3 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x57u, 0LL);
  }
  else
  {
    *a3 = v4;
    v4 = 0LL;
  }
LABEL_17:
  operator delete(0LL);
  if ( v4 )
    CRectanglesShape::`scalar deleting destructor'(v4, 1);
  return v3;
}
