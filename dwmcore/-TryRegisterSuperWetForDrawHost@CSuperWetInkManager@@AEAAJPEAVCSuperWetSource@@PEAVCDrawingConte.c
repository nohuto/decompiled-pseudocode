__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawHost(
        struct CSuperWetSource **this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        unsigned __int8 a4,
        bool *a5)
{
  struct CSuperWetInkManager::VailSuperWetStroke *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  struct CSuperWetInkManager::VailSuperWetStroke *v11; // rbx
  CVisual *v13; // rax
  __int64 **TreeData; // rax
  __m128 v15; // xmm3
  unsigned __int32 v16; // xmm0_4
  unsigned __int32 v17; // xmm1_4
  int v18; // eax
  unsigned int v19; // ebx
  _BYTE v20[16]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a5 = 0;
  if ( a2 != this[1] || !this[11] )
    return 0LL;
  v8 = CSuperWetInkManager::TryLookupVailDataForSource((CSuperWetInkManager *)this, a2);
  v11 = v8;
  if ( !*((_QWORD *)v8 + 1) )
  {
    *((_QWORD *)v8 + 1) = v10;
    *((_QWORD *)v8 + 3) = (***(__int64 (__fastcall ****)(_QWORD))(v9 + 88))(*(_QWORD *)(v9 + 88));
  }
  if ( *((struct CSuperWetSource **)v11 + 1) != this[11] )
    return 0LL;
  *((_QWORD *)v11 + 2) = *((_QWORD *)a3 + 5);
  if ( !TryFillRenderState(a3, a4, 0, (__int64)v11 + 32) )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  v13 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24);
  TreeData = CVisual::FindTreeData(v13, *((const struct CVisualTree **)a3 + 1007));
  if ( TreeData )
  {
    v15 = (__m128)_mm_loadu_si128((const __m128i *)CTreeData::GetSuperWetInkClip(TreeData, v20));
    v16 = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
    v17 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  }
  else
  {
    v16 = _mm_shuffle_ps(
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            85).m128_u32[0];
    v15 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v17 = _mm_shuffle_ps(
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
            170).m128_u32[0];
  }
  *((_DWORD *)v11 + 22) = v15.m128_i32[0];
  *((_DWORD *)v11 + 23) = v16;
  *((_DWORD *)v11 + 24) = v17;
  *((_DWORD *)v11 + 25) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  v18 = CSuperWetInkManager::RegisterStrokeOnHost((struct ID3D12Device *)this, v11, a5);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33B,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
