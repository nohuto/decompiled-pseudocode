__int64 __fastcall CPathSegmentsShape::GetD2DGeometry(
        CPathSegmentsShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v3; // r14
  struct ID2D1Geometry *v6; // rdi
  int v7; // ebx
  __int64 *v8; // r15
  struct ID2D1Geometry *v9; // rdi
  struct ID2D1Geometry *v10; // rcx
  struct ID2D1Geometry *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64 *, struct ID2D1Geometry **); // rbx
  int v17; // eax
  __int64 v18; // rcx
  struct ID2D1Geometry *v19; // rbx
  __int64 (__fastcall *v20)(struct ID2D1Geometry *, struct ID2D1GeometrySink **); // rsi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  struct ID2D1Geometry *v27; // [rsp+80h] [rbp+40h] BYREF
  struct ID2D1GeometrySink *v28; // [rsp+98h] [rbp+58h] BYREF

  v3 = *((_QWORD *)this + 2);
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = *(__int64 **)(v3 + 40);
  if ( *(_QWORD *)(v3 + 64) )
  {
    v9 = *(struct ID2D1Geometry **)(v3 + 64);
    if ( v27 != v9 )
    {
      if ( v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v3 + 64));
      v10 = v27;
      v27 = v9;
      if ( v10 )
        (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v10 + 16LL))(v10);
    }
LABEL_7:
    v6 = v27;
    v27 = 0LL;
    goto LABEL_8;
  }
  v15 = *v8;
  v28 = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64 *, struct ID2D1Geometry **))(v15 + 80);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v27);
  v17 = v16(v8, &v27);
  v7 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x67u, 0LL);
  }
  else
  {
    v19 = v27;
    v20 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v27 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    v21 = v20(v19, &v28);
    v7 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x68u, 0LL);
    }
    else
    {
      v23 = CPathData::PushIntoSink((CPathData *)v3, v28);
      v7 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x6Au, 0LL);
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v28 + 72LL))(v28);
        v7 = v25;
        if ( v25 >= 0 )
        {
          if ( v8 == *(__int64 **)(v3 + 40) )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 64), (signed __int64)v27, 0LL) )
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=(&v27, *(_QWORD *)(v3 + 64));
            else
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 64) + 8LL))(*(_QWORD *)(v3 + 64));
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
          goto LABEL_7;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x6Cu, 0LL);
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
LABEL_8:
  v11 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v7, 0x1Au, 0LL);
  }
  else
  {
    v12 = CTransformedGeometryHelper::TransformGeometry(a2, v6, a3);
    v7 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Cu, 0LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
