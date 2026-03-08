/*
 * XREFs of ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1801AEEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800332C0 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180061F00 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180092148 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800C3EE0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800C4E30 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::GetUnOccludedWorldShape(
        FastRegion::Internal::CRgnData **a1,
        const __m128i *a2,
        CMILMatrix *a3,
        CRectanglesShape **a4)
{
  unsigned int v4; // edi
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v10; // rcx
  int v11; // edx
  CRectanglesShape *v12; // rax
  CRectanglesShape *v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  FastRegion::Internal::CRgnData *v24; // rcx
  __m128i v26; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v27[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-51h]
  _DWORD *v29; // [rsp+50h] [rbp-49h]
  __int64 v30; // [rsp+58h] [rbp-41h]
  int v31; // [rsp+60h] [rbp-39h]
  __int128 v32; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v33[4]; // [rsp+80h] [rbp-19h]
  _DWORD v34[4]; // [rsp+90h] [rbp-9h] BYREF

  v4 = 0;
  *a4 = 0LL;
  ObjectCache = CThreadContext::GetObjectCache((struct CRectanglesShape *)a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( (v10 || (v10 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL)
    && (v12 = CRectanglesShape::CRectanglesShape(v10), (v13 = v12) != 0LL) )
  {
    v14 = (unsigned __int64)v12 + 16;
    FastRegion::Internal::CRgnData::BeginIterator(a1[2], (struct FastRegion::CRegion::Iterator *)v27);
    while ( (unsigned __int64)v29 < v28 )
    {
      v33[1] = *v29;
      v33[3] = v29[2];
      v15 = 2 * v31;
      v33[0] = *(_DWORD *)(v30 + 4 * v15);
      v33[2] = *(_DWORD *)(v30 + 4 * v15 + 4);
      v16 = 0LL;
      v32 = 0LL;
      do
      {
        *(float *)&v34[v16] = (float)(int)v33[v16];
        ++v16;
      }
      while ( v16 < 4 );
      CMILMatrix::Transform2DBoundsHelper<0>(a3, (struct MilRectF *)v34, (float *)&v32);
      v17 = _mm_loadu_si128(a2);
      v26 = v17;
      v26.m128i_i32[0] = v17.m128i_i32[0];
      if ( *(float *)&v32 > *(float *)v17.m128i_i32 )
      {
        v26.m128i_i32[0] = v32;
        v17.m128i_i32[0] = v32;
      }
      v18 = *(float *)&v26.m128i_i32[1];
      if ( *((float *)&v32 + 1) > *(float *)&v26.m128i_i32[1] )
      {
        v26.m128i_i32[1] = DWORD1(v32);
        v18 = *((float *)&v32 + 1);
      }
      v19 = *(float *)&v26.m128i_i32[2];
      if ( *(float *)&v26.m128i_i32[2] > *((float *)&v32 + 2) )
      {
        v26.m128i_i32[2] = DWORD2(v32);
        v19 = *((float *)&v32 + 2);
      }
      v20 = *(float *)&v26.m128i_i32[3];
      if ( *(float *)&v26.m128i_i32[3] > *((float *)&v32 + 3) )
      {
        v26.m128i_i32[3] = HIDWORD(v32);
        v20 = *((float *)&v32 + 3);
      }
      if ( v19 <= *(float *)v17.m128i_i32 || v20 <= v18 )
      {
        DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          v14,
          &v32,
          1u);
      }
      else
      {
        v21 = DynArrayImpl<0>::Grow(v14, 0x10u, 4, 0, 0LL);
        v4 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xB3u, 0LL);
          CRectanglesShape::`scalar deleting destructor'(v13, 1);
          return v4;
        }
        *(_DWORD *)(v14 + 24) += TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                                   (int *)&v32,
                                   (__int64)&v26,
                                   v23,
                                   *(_QWORD *)v14 + 16LL * *(unsigned int *)(v14 + 24));
      }
      FastRegion::Internal::CRgnData::StepIterator(v24, (struct FastRegion::CRegion::Iterator *)v27);
    }
    *a4 = v13;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, -2147024882, 0x9Eu, 0LL);
  }
  return v4;
}
