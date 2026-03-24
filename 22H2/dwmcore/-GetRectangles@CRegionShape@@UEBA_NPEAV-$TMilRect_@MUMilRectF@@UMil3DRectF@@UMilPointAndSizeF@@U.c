/*
 * XREFs of ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800188A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18009B798 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

char __fastcall CRegionShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  char v3; // r10
  unsigned int RectangleCount; // eax
  FastRegion::Internal::CRgnData **v6; // r9
  int v7; // r11d
  unsigned int v8; // r10d
  FastRegion::Internal::CRgnData *v9; // rcx
  float v10; // xmm0_4
  __m128i v11; // xmm1
  _BYTE v13[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-28h]

  v3 = 0;
  if ( a3 )
  {
    RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 16));
    if ( v7 == RectangleCount )
    {
      FastRegion::Internal::CRgnData::BeginIterator(*v6, (struct FastRegion::CRegion::Iterator *)v13);
      while ( v15 < v14 )
      {
        v9 = (FastRegion::Internal::CRgnData *)(2 * v17);
        v10 = (float)*(int *)(v16 + 4LL * (_QWORD)v9);
        *((float *)&v18 + 1) = (float)*(int *)v15;
        v11 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 8));
        *(float *)&v18 = v10;
        *((float *)&v18 + 2) = (float)*(int *)(v16 + 4LL * (_QWORD)v9 + 4);
        HIDWORD(v18) = _mm_cvtepi32_ps(v11).m128_u32[0];
        *(_OWORD *)(a2 + 16LL * v8) = v18;
        FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)v13);
      }
      return 1;
    }
  }
  return v3;
}
