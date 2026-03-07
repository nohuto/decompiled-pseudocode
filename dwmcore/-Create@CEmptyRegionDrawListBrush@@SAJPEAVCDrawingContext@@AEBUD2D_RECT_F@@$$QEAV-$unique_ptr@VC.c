__int64 __fastcall CEmptyRegionDrawListBrush::Create(
        struct CDrawingContext *a1,
        struct D2D_RECT_F *a2,
        __int64 *a3,
        _QWORD *a4)
{
  struct CObjectCache *ObjectCache; // rax
  char *v9; // rbx
  int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v16; // ecx

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = (char *)DefaultHeap::Alloc(0xA0uLL)) != 0LL )
  {
    *(_OWORD *)(v9 + 8) = *(_OWORD *)&_xmm;
    *(_QWORD *)v9 = &CEmptyRegionDrawListBrush::`vftable';
    v9[52] = 0;
    v9[64] = 0;
    *((_QWORD *)v9 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v11 = *a3;
    *a3 = 0LL;
    *((_QWORD *)v9 + 9) = v11;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = v9 + 96;
    *((_DWORD *)v9 + 24) = 0;
    v12 = CEmptyRegionDrawListBrush::Initialize((CEmptyRegionDrawListBrush *)v9, a1, a2);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Du, 0LL);
      CEmptyRegionDrawListBrush::`scalar deleting destructor'((CEmptyRegionDrawListBrush *)v9, 1);
    }
    else
    {
      *a4 = v9;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v14;
}
