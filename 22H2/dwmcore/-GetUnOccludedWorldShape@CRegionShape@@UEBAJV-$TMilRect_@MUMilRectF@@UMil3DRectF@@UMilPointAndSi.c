/*
 * XREFs of ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18025F650
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEBV2@@Z @ 0x18004FA8C (--$_Emplace_reallocate@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180057F2C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059518 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180081640 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180094E70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800C7E74 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800CC534 (--0CRectanglesShape@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::GetUnOccludedWorldShape(
        __int64 a1,
        const __m128i *a2,
        CMILMatrix *a3,
        CRectanglesShape **a4)
{
  __int128 *v4; // rdi
  unsigned int v5; // r12d
  FastRegion::Internal::CRgnData *v6; // rcx
  __int128 *v8; // r14
  __int64 v10; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v12; // rcx
  __m128i v13; // xmm0
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  char v17; // al
  __int64 v18; // r8
  unsigned int v19; // eax
  char *v20; // rbx
  __int64 v21; // rsi
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v23; // rcx
  int v24; // r8d
  unsigned int v25; // r8d
  CRectanglesShape *v26; // rsi
  __int128 *v27; // r15
  CRectanglesShape *v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  __m128i v32; // [rsp+30h] [rbp-D0h] BYREF
  __int128 *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v34; // [rsp+48h] [rbp-B8h]
  __int128 *v35; // [rsp+50h] [rbp-B0h]
  CRectanglesShape **v36; // [rsp+58h] [rbp-A8h]
  char v37[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-98h]
  struct CRectanglesShape *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h]
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v43[4]; // [rsp+A0h] [rbp-60h]
  _DWORD v44[4]; // [rsp+B0h] [rbp-50h] BYREF
  char v45[64]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v36 = a4;
  *a4 = 0LL;
  v5 = 0;
  v6 = *(FastRegion::Internal::CRgnData **)(a1 + 16);
  v33 = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  FastRegion::Internal::CRgnData::BeginIterator(v6, (struct FastRegion::CRegion::Iterator *)v37);
  while ( (unsigned __int64)v39 < v38 )
  {
    v43[1] = *(_DWORD *)v39;
    v43[3] = *((_DWORD *)v39 + 2);
    v10 = 2 * v41;
    v42 = 0LL;
    v43[0] = *(_DWORD *)(v40 + 4 * v10);
    v43[2] = *(_DWORD *)(v40 + 4 * v10 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)&v44[i] = (float)(int)v43[i];
    CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)v44, (float *)&v42);
    v13 = _mm_loadu_si128(a2);
    v32 = v13;
    v32.m128i_i32[0] = v13.m128i_i32[0];
    if ( *(float *)&v42 > *(float *)v13.m128i_i32 )
    {
      v32.m128i_i32[0] = v42;
      v13.m128i_i32[0] = v42;
    }
    v14 = *(float *)&v32.m128i_i32[1];
    if ( *((float *)&v42 + 1) > *(float *)&v32.m128i_i32[1] )
    {
      v32.m128i_i32[1] = DWORD1(v42);
      v14 = *((float *)&v42 + 1);
    }
    v15 = *(float *)&v32.m128i_i32[2];
    if ( *(float *)&v32.m128i_i32[2] > *((float *)&v42 + 2) )
    {
      v32.m128i_i32[2] = DWORD2(v42);
      v15 = *((float *)&v42 + 2);
    }
    v16 = *(float *)&v32.m128i_i32[3];
    if ( *(float *)&v32.m128i_i32[3] > *((float *)&v42 + 3) )
    {
      v32.m128i_i32[3] = HIDWORD(v42);
      v16 = *((float *)&v42 + 3);
    }
    if ( v15 <= *(float *)v13.m128i_i32 || v16 <= v14 )
    {
      v32 = 0uLL;
      v17 = 0;
    }
    else
    {
      v17 = 1;
    }
    if ( v17 )
    {
      `vector constructor iterator'(
        v45,
        16LL,
        4LL,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
      v19 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
              (float *)&v42,
              (__int64)&v32,
              v18,
              (__int64)v45);
      if ( v19 )
      {
        v20 = v45;
        v21 = v19;
        do
        {
          if ( v8 == v4 )
          {
            std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
              (__int64 *)&v33,
              v4,
              v20);
            v8 = v35;
            v4 = v34;
          }
          else
          {
            *v4++ = *(_OWORD *)v20;
            v34 = v4;
          }
          v20 += 16;
          --v21;
        }
        while ( v21 );
      }
    }
    else if ( v8 == v4 )
    {
      std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
        (__int64 *)&v33,
        v4,
        &v42);
      v8 = v35;
      v4 = v34;
    }
    else
    {
      *v4++ = v42;
      v34 = v4;
    }
    FastRegion::Internal::CRgnData::StepIterator(v12, (struct FastRegion::CRegion::Iterator *)v37);
  }
  ObjectCache = CThreadContext::GetObjectCache(v39);
  v23 = 0LL;
  v24 = *((_DWORD *)ObjectCache + 1);
  if ( v24 )
  {
    v23 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v23;
    *((_DWORD *)ObjectCache + 1) = v24 - 1;
  }
  if ( v23 || (v23 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    v26 = CRectanglesShape::CRectanglesShape(v23);
  else
    v26 = 0LL;
  v27 = v33;
  v28 = v26;
  if ( v26 )
  {
    if ( v33 == v4 || (v29 = CRectanglesShape::BuildFromRectFs(v26, (__int64)v33, v4 - v33), v5 = v29, v29 >= 0) )
    {
      v28 = 0LL;
      *v36 = v26;
      v26 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC1u, 0LL);
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, -2147024882, 0xBDu, 0LL);
  }
  if ( v26 )
    CRectanglesShape::`scalar deleting destructor'(v28, 1, v25);
  if ( v27 )
    std::_Deallocate<16,0>(v27, ((char *)v8 - (char *)v27) & 0xFFFFFFFFFFFFFFF0uLL);
  return v5;
}
