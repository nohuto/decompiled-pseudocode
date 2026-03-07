__int64 __fastcall CRegionShape::GetD2DGeometry(
        FastRegion::Internal::CRgnData **this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  struct ID2D1Geometry *v9; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  struct ID2D1GeometrySink *v20; // [rsp+30h] [rbp-39h] BYREF
  struct ID2D1Geometry *v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v23[4]; // [rsp+48h] [rbp-21h]
  _BYTE v24[8]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-9h]
  _DWORD *v26; // [rsp+68h] [rbp-1h]
  __int64 v27; // [rsp+70h] [rbp+7h]
  int v28; // [rsp+78h] [rbp+Fh]
  _DWORD v29[4]; // [rsp+88h] [rbp+1Fh] BYREF

  v22 = 0LL;
  v6 = CRegionShape::EnsureD2DGeometry((CRegionShape *)this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xE6u, 0LL);
    goto LABEL_6;
  }
  if ( !a2 )
  {
    v9 = this[11];
    if ( v9 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v9 + 8LL))(v9);
    goto LABEL_5;
  }
  v20 = 0LL;
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(*g_DeviceManager + 80LL))(g_DeviceManager, &v21);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xF6u, 0LL);
    goto LABEL_19;
  }
  v13 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v21 + 136LL))(
          v21,
          &v20);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xF8u, 0LL);
    goto LABEL_19;
  }
  FastRegion::Internal::CRgnData::BeginIterator(this[2], (struct FastRegion::CRegion::Iterator *)v24);
  while ( (unsigned __int64)v26 < v25 )
  {
    v23[1] = *v26;
    v23[3] = v26[2];
    v15 = 2 * v28;
    v23[0] = *(_DWORD *)(v27 + 4 * v15);
    v23[2] = *(_DWORD *)(v27 + 4 * v15 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)&v29[i] = (float)(int)v23[i];
    AddTransformedRectToD2DRgnGeometrySink((const struct MilRectF *)v29, a2, v20);
    FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v24);
  }
  v18 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v20 + 72LL))(v20);
  v8 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x107u, 0LL);
LABEL_19:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    goto LABEL_6;
  }
  v9 = v21;
  v21 = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_5:
  v22 = 0LL;
  *a3 = v9;
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  return v8;
}
