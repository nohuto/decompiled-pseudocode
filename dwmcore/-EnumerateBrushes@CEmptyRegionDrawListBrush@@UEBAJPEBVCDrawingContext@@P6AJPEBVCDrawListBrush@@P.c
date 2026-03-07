__int64 __fastcall CEmptyRegionDrawListBrush::EnumerateBrushes(
        CEmptyRegionDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  __int64 v4; // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __m128i v13; // xmm1
  __int64 v14; // rax
  unsigned int v15; // xmm0_4
  int v16; // eax
  FastRegion::Internal::CRgnData *v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-58h]
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]
  unsigned __int64 v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+60h] [rbp-28h]

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 3);
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this + 11),
      (struct FastRegion::CRegion::Iterator *)v19);
    while ( v21 < v20 )
    {
      *((float *)&v18 + 1) = (float)*(int *)v21;
      v13 = _mm_cvtsi32_si128(*(_DWORD *)(v21 + 8));
      *(float *)&v18 = (float)*(int *)(v22 + 8LL * v23);
      v14 = *((_QWORD *)this + 10);
      *(float *)&v15 = (float)*(int *)(v22 + 8LL * v23 + 4);
      *(_DWORD *)(v14 + 48) = 0;
      *(_BYTE *)(v14 + 52) = 1;
      *((_QWORD *)&v18 + 1) = __PAIR64__(_mm_cvtepi32_ps(v13).m128_u32[0], v15);
      *(_OWORD *)(v14 + 32) = v18;
      v16 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 10), a4);
      v11 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v17, 0LL, 0, v16, 0x92u, 0LL);
        return v11;
      }
      FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v19);
    }
  }
  v8 = *((_QWORD *)this + 9);
  *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
  v9 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x98u, 0LL);
  return v11;
}
