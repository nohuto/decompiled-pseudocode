__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  CPathData *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct ID2D1SimplifiedGeometrySink *v11; // rbx
  CPathSegmentsShape *v12; // rax
  __int64 v13; // rcx
  CPathSegmentsShape *v14; // rdi
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct CPathData *v17[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+40h] [rbp-18h] BYREF
  struct ID2D1SimplifiedGeometrySink *v19; // [rsp+78h] [rbp+20h] BYREF

  v17[0] = 0LL;
  v19 = 0LL;
  v5 = (__int64)DefaultHeap::Alloc(0x50uLL);
  if ( v5 )
  {
    v18 = 0uLL;
    v5 = CPathData::CPathData(v5, g_DeviceManager, &v18);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)v17, v5);
  v7 = v17[0];
  if ( !v17[0] )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x53u, 0LL);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v9 = CPathData::Open(v7, &v19);
  v8 = v9;
  if ( v9 < 0 )
  {
    v16 = 85;
    goto LABEL_13;
  }
  v11 = v19;
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, unsigned __int64, __int64))(*(_QWORD *)v19 + 40LL))(
    v19,
    _mm_unpacklo_ps((__m128)*((unsigned int *)this + 36), (__m128)*((unsigned int *)this + 37)).m128_u64[0],
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v11 + 48LL))(
    v11,
    (char *)this + 152,
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, 0LL);
  v9 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v11 + 72LL))(v11);
  v8 = v9;
  if ( v9 < 0 )
  {
    v16 = 91;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v16, 0LL);
    goto LABEL_14;
  }
  v12 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
  if ( v12 && (v14 = CPathSegmentsShape::CPathSegmentsShape(v12, v7)) != 0LL )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v14;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x5Eu, 0LL);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)v17);
  return v8;
}
