/*
 * XREFs of ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1800195A8
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180068150 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x18004FA8C (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180057F2C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059518 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180081640 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800CC534 (--0CRectanglesShape@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::IntersectWithRect(__int64 a1, float *a2, CRectanglesShape **a3)
{
  char *v3; // rdi
  unsigned int v4; // r12d
  FastRegion::Internal::CRgnData *v6; // rcx
  char *v7; // r14
  struct CRectanglesShape *v9; // rcx
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
  CRectanglesShape *v22; // rsi
  CRectanglesShape *v23; // rbx
  int v24; // eax
  unsigned int v25; // ecx
  char *v27; // [rsp+30h] [rbp-39h] BYREF
  char *v28; // [rsp+38h] [rbp-31h]
  char *v29; // [rsp+40h] [rbp-29h]
  char v30[8]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-19h]
  int *v32; // [rsp+58h] [rbp-11h]
  __int64 v33; // [rsp+60h] [rbp-9h]
  int v34; // [rsp+68h] [rbp-1h]
  __int128 v35; // [rsp+78h] [rbp+Fh] BYREF

  v3 = 0LL;
  v4 = 0;
  *a3 = 0LL;
  v6 = *(FastRegion::Internal::CRgnData **)(a1 + 16);
  v27 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  FastRegion::Internal::CRgnData::BeginIterator(v6, (struct FastRegion::CRegion::Iterator *)v30);
  while ( (unsigned __int64)v32 < v31 )
  {
    v10 = *a2;
    v11 = (FastRegion::Internal::CRgnData *)(2 * v34);
    v12 = (float)*v32;
    v13 = (float)*(int *)(v33 + 4LL * (_QWORD)v11);
    v14 = (float)*(int *)(v33 + 4LL * (_QWORD)v11 + 4);
    v15 = (float)v32[2];
    *(float *)&v35 = v13;
    *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(LODWORD(v14), LODWORD(v12));
    *((float *)&v35 + 3) = v15;
    if ( v10 > v13 )
    {
      *(float *)&v35 = v10;
      v13 = v10;
    }
    v16 = a2[1];
    if ( v16 > v12 )
    {
      *((float *)&v35 + 1) = a2[1];
      v12 = v16;
    }
    v17 = a2[2];
    if ( v14 > v17 )
    {
      *((float *)&v35 + 2) = a2[2];
      v14 = v17;
    }
    v18 = a2[3];
    if ( v15 > v18 )
    {
      *((float *)&v35 + 3) = a2[3];
      v15 = v18;
    }
    if ( v14 <= v13 || v15 <= v12 )
    {
      v35 = 0uLL;
    }
    else if ( v7 == v3 )
    {
      std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        &v27,
        v3,
        &v35);
      v7 = v29;
      v3 = v28;
    }
    else
    {
      *(_OWORD *)v3 = v35;
      v3 += 16;
      v28 = v3;
    }
    FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v30);
  }
  ObjectCache = CThreadContext::GetObjectCache(v9);
  v20 = 0LL;
  v21 = *((_DWORD *)ObjectCache + 1);
  if ( v21 )
  {
    v20 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v20;
    *((_DWORD *)ObjectCache + 1) = v21 - 1;
  }
  if ( v20 || (v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    v22 = CRectanglesShape::CRectanglesShape(v20);
  else
    v22 = 0LL;
  v23 = v22;
  if ( v22 )
  {
    if ( v27 == v3
      || (v24 = CRectanglesShape::BuildFromRectFs(v22, v27, (unsigned int)((v3 - v27) >> 4)), v4 = v24, v24 >= 0) )
    {
      v23 = 0LL;
      *a3 = v22;
      v22 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x8Au, 0LL);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, -2147024882, 0x85u, 0LL);
  }
  if ( v22 )
    CRectanglesShape::`scalar deleting destructor'(v23, 1u);
  if ( v27 )
    std::_Deallocate<16,0>(v27, (v7 - v27) & 0xFFFFFFFFFFFFFFF0uLL);
  return v4;
}
