/*
 * XREFs of ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801AF0E4
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180061F00 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180092148 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x180129AE6 (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1801AF46C (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 */

__int64 __fastcall CRegionShape::IntersectWithRect(__int64 a1, float *a2, CRectanglesShape **a3)
{
  char *v3; // rsi
  FastRegion::Internal::CRgnData *v5; // rcx
  unsigned int v6; // r15d
  struct CRectanglesShape *v8; // rcx
  char *v9; // rdi
  float v10; // xmm0_4
  FastRegion::Internal::CRgnData *v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v20; // rcx
  int v21; // r8d
  CRectanglesShape *v22; // rax
  CRectanglesShape *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  __int128 v27; // [rsp+30h] [rbp-29h] BYREF
  char *v28; // [rsp+40h] [rbp-19h]
  char v29[8]; // [rsp+48h] [rbp-11h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-9h]
  int *v31; // [rsp+58h] [rbp-1h]
  __int64 v32; // [rsp+60h] [rbp+7h]
  int v33; // [rsp+68h] [rbp+Fh]
  __int128 v34; // [rsp+78h] [rbp+1Fh] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v5 = *(FastRegion::Internal::CRgnData **)(a1 + 16);
  v6 = 0;
  v28 = 0LL;
  v27 = 0LL;
  FastRegion::Internal::CRgnData::BeginIterator(v5, (struct FastRegion::CRegion::Iterator *)v29);
  v9 = 0LL;
  while ( (unsigned __int64)v31 < v30 )
  {
    v10 = *a2;
    v11 = (FastRegion::Internal::CRgnData *)(2 * v33);
    v12 = (float)*v31;
    v13 = (float)*(int *)(v32 + 4LL * (_QWORD)v11);
    v14 = (float)*(int *)(v32 + 4LL * (_QWORD)v11 + 4);
    v15 = (float)v31[2];
    *(float *)&v34 = v13;
    *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(LODWORD(v14), LODWORD(v12));
    *((float *)&v34 + 3) = v15;
    if ( v10 > v13 )
    {
      *(float *)&v34 = v10;
      v13 = v10;
    }
    v16 = a2[1];
    if ( v16 > v12 )
    {
      *((float *)&v34 + 1) = a2[1];
      v12 = v16;
    }
    v17 = a2[2];
    if ( v14 > v17 )
    {
      *((float *)&v34 + 2) = a2[2];
      v14 = v17;
    }
    v18 = a2[3];
    if ( v15 > v18 )
    {
      *((float *)&v34 + 3) = a2[3];
      v15 = v18;
    }
    if ( v14 <= v13 || v15 <= v12 )
    {
      v34 = 0uLL;
    }
    else if ( v9 == v3 )
    {
      std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        (char **)&v27,
        v9,
        &v34);
      v3 = v28;
      v9 = (char *)*((_QWORD *)&v27 + 1);
    }
    else
    {
      *(_OWORD *)v9 = v34;
      v9 += 16;
      *((_QWORD *)&v27 + 1) = v9;
    }
    FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v29);
  }
  ObjectCache = CThreadContext::GetObjectCache(v8);
  v20 = 0LL;
  v21 = *((_DWORD *)ObjectCache + 1);
  if ( v21 )
  {
    v20 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v20;
    *((_DWORD *)ObjectCache + 1) = v21 - 1;
  }
  if ( (v20 || (v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL)
    && (v22 = CRectanglesShape::CRectanglesShape(v20), (v23 = v22) != 0LL) )
  {
    if ( (char *)v27 == v9
      || (v24 = CRectanglesShape::BuildFromRectFs(v22, v27, (unsigned int)((__int64)&v9[-v27] >> 4)), v6 = v24, v24 >= 0) )
    {
      *a3 = v23;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x8Au, 0LL);
      CRectanglesShape::`scalar deleting destructor'(v23, 1);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0, -2147024882, 0x85u, 0LL);
  }
  if ( (_QWORD)v27 )
    std::_Deallocate<16,0>((void *)v27, (unsigned __int64)&v3[-v27] & 0xFFFFFFFFFFFFFFF0uLL);
  return v6;
}
