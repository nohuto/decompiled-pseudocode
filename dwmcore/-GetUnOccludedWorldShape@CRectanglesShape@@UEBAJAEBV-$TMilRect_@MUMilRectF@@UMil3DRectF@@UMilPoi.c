/*
 * XREFs of ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800330B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800332C0 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180061F00 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180092148 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800C3EE0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800C4E30 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CRectanglesShape::GetUnOccludedWorldShape(
        __int64 a1,
        const __m128i *a2,
        CMILMatrix *a3,
        CRectanglesShape **a4)
{
  unsigned int v4; // edi
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v8; // rcx
  int v9; // edx
  CRectanglesShape *v10; // rax
  CRectanglesShape *v11; // rbx
  unsigned int v12; // r14d
  char *v13; // r15
  CRectanglesShape *i; // rsi
  struct MilRectF *v15; // rdx
  __m128i v16; // xmm1
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r8
  __m128i v24; // [rsp+30h] [rbp-48h] BYREF
  CMILMatrix *v25; // [rsp+40h] [rbp-38h]
  const __m128i *v26; // [rsp+48h] [rbp-30h]
  __int128 v27; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v25 = a3;
  *a4 = 0LL;
  v26 = a2;
  ObjectCache = CThreadContext::GetObjectCache((struct CRectanglesShape *)a1);
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( (v8 || (v8 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL)
    && (v10 = CRectanglesShape::CRectanglesShape(v8), (v11 = v10) != 0LL) )
  {
    v12 = 0;
    v13 = (char *)v10 + 16;
    for ( i = v10; v12 < *(_DWORD *)(a1 + 40); ++v12 )
    {
      v15 = (struct MilRectF *)(*(_QWORD *)(a1 + 16) + 16LL * v12);
      v27 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v25, v15);
      v16 = _mm_loadu_si128(v26);
      v24 = v16;
      v24.m128i_i32[0] = v16.m128i_i32[0];
      if ( *(float *)&v27 > *(float *)v16.m128i_i32 )
      {
        v24.m128i_i32[0] = v27;
        v16.m128i_i32[0] = v27;
      }
      v17 = *(float *)&v24.m128i_i32[1];
      if ( *((float *)&v27 + 1) > *(float *)&v24.m128i_i32[1] )
      {
        v24.m128i_i32[1] = DWORD1(v27);
        v17 = *((float *)&v27 + 1);
      }
      v18 = *(float *)&v24.m128i_i32[2];
      if ( *(float *)&v24.m128i_i32[2] > *((float *)&v27 + 2) )
      {
        v24.m128i_i32[2] = DWORD2(v27);
        v18 = *((float *)&v27 + 2);
      }
      v19 = *(float *)&v24.m128i_i32[3];
      if ( *(float *)&v24.m128i_i32[3] > *((float *)&v27 + 3) )
      {
        v24.m128i_i32[3] = HIDWORD(v27);
        v19 = *((float *)&v27 + 3);
      }
      if ( v18 <= *(float *)v16.m128i_i32 || v19 <= v17 )
      {
        DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          v13,
          &v27,
          1LL);
      }
      else
      {
        v20 = DynArrayImpl<0>::Grow((_DWORD)v13, 16, 4, 0, 0LL);
        v4 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC5u, 0LL);
          CRectanglesShape::`scalar deleting destructor'(v11, 1u);
          return v4;
        }
        *((_DWORD *)v13 + 6) += TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                                  &v27,
                                  &v24,
                                  v22,
                                  *(_QWORD *)v13 + 16LL * *((unsigned int *)v13 + 6));
      }
    }
    *a4 = i;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0xB5u, 0LL);
  }
  return v4;
}
