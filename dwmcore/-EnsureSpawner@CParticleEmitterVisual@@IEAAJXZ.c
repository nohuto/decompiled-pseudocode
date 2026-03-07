__int64 __fastcall CParticleEmitterVisual::EnsureSpawner(CParticleEmitterVisual *this)
{
  unsigned int v2; // edi
  __int64 *v3; // rcx
  int v4; // r15d
  __int64 v5; // rax
  char v6; // r14
  char v7; // al
  _DWORD *v8; // rcx
  int v9; // xmm1_4
  unsigned int v10; // xmm0_4
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rax
  int v15; // xmm1_4
  unsigned int v16; // xmm0_4
  CGeometry *v17; // rcx
  int BoundsSafe; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  CGeometry *v21; // rcx
  int ShapeData; // eax
  __int64 v23; // rcx
  const struct CMILMatrix *v24; // rdx
  int D2DGeometry; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  struct EmitterShapes::CPathEmitterArea *v42; // [rsp+30h] [rbp-40h] BYREF
  struct EmitterShapes::CPathEmitterArea *v43; // [rsp+38h] [rbp-38h] BYREF
  struct ID2D1Geometry *v44; // [rsp+40h] [rbp-30h] BYREF
  __int64 v45; // [rsp+48h] [rbp-28h] BYREF
  char v46; // [rsp+50h] [rbp-20h]
  __int128 v47; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 800) )
    return v2;
  v3 = (__int64 *)*((_QWORD *)this + 102);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 180);
    v5 = *v3;
    LODWORD(v44) = v4;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v5 + 56))(v3, 138LL)
      || (v6 = 1, !CRectangleGeometry::IsRoundedRectangleGeometry(*((CRectangleGeometry **)this + 102))) )
    {
      v6 = 0;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 102) + 56LL))(*((_QWORD *)this + 102), 59LL);
    v8 = (_DWORD *)*((_QWORD *)this + 102);
    if ( v7 )
    {
      v9 = v8[39];
      LODWORD(v42) = v8[38];
      v10 = v8[36];
      HIDWORD(v42) = v9;
      *(_QWORD *)&v47 = __PAIR64__(v8[37], v10);
      v11 = std::make_unique<EmitterShapes::CEllipseSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,enum EmitterShapes::EmitFrom const &,0>(
              &v43,
              &v47,
              (__int64 *)&v42,
              (int *)&v44);
LABEL_8:
      v12 = *v11;
      *v11 = 0LL;
      v13 = *((_QWORD *)this + 800);
      *((_QWORD *)this + 800) = v12;
      if ( v13 )
        std::default_delete<EmitterShapes::CSpawner>::operator()(v12, v13);
      if ( v43 )
        (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *, __int64))(*(_QWORD *)v43 + 8LL))(v43, 1LL);
      return v2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 56LL))(v8, 102LL) )
    {
      v14 = (_DWORD *)*((_QWORD *)this + 102);
      v15 = v14[39];
      LODWORD(v47) = v14[38];
      v16 = v14[36];
      DWORD1(v47) = v15;
      v42 = (struct EmitterShapes::CPathEmitterArea *)__PAIR64__(v14[37], v16);
      v11 = std::make_unique<EmitterShapes::CLineSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,0>(
              (__int64 *)&v43,
              &v42,
              &v47);
      goto LABEL_8;
    }
    if ( !v6
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 102) + 56LL))(
           *((_QWORD *)this + 102),
           138LL) )
    {
      v17 = (CGeometry *)*((_QWORD *)this + 102);
      v47 = 0LL;
      BoundsSafe = CGeometry::GetBoundsSafe(v17, 0LL, &v47);
      v2 = BoundsSafe;
      if ( BoundsSafe >= 0 )
      {
        if ( v4 )
          v11 = std::make_unique<EmitterShapes::CRectangleVolumeSpawner,float &,float &,float &,float &,0>(
                  &v43,
                  (int *)&v47,
                  (int *)&v47 + 1,
                  (int *)&v47 + 2,
                  (_DWORD *)&v47 + 3);
        else
          v11 = std::make_unique<EmitterShapes::CRectangleEdgeSpawner,float &,float &,float &,float &,0>(
                  (__int64 *)&v43,
                  (float *)&v47,
                  (float *)&v47 + 1,
                  (float *)&v47 + 2,
                  (float *)&v47 + 3);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, BoundsSafe, 0x1A5u, 0LL);
      goto LABEL_41;
    }
    v21 = (CGeometry *)*((_QWORD *)this + 102);
    v45 = 0LL;
    v46 = 0;
    v44 = 0LL;
    ShapeData = CGeometry::GetShapeData(v21, 0LL, (struct CShapePtr *)&v45);
    v2 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, ShapeData, 0x1B6u, 0LL);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v44);
      D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v45, v24, &v44);
      v2 = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, D2DGeometry, 0x1B7u, 0LL);
      }
      else
      {
        v42 = 0LL;
        if ( v4 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
          v32 = EmitterShapes::CPathEmitterArea::CreatePathEmitterArea(v44, &v42);
          v2 = v32;
          if ( v32 >= 0 )
          {
            v43 = v42;
            v34 = std::make_unique<EmitterShapes::CPathAreaSpawner,EmitterShapes::CPathEmitterArea *,0>(
                    &v47,
                    (__int64 *)&v43);
            v35 = *v34;
            *v34 = 0LL;
            v36 = *((_QWORD *)this + 800);
            *((_QWORD *)this + 800) = v35;
            if ( v36 )
              std::default_delete<EmitterShapes::CSpawner>::operator()(v35, v36);
            if ( (_QWORD)v47 )
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v47 + 8LL))(v47, 1LL);
            goto LABEL_36;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1C2u, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
        }
        else
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
          v27 = EmitterShapes::CPathEmitterEdge::CreatePathEmitterShape(v44, &v42);
          v2 = v27;
          if ( v27 >= 0 )
          {
            v43 = v42;
            v29 = std::make_unique<EmitterShapes::CPathEdgeSpawner,EmitterShapes::CPathEmitterEdge *,0>(
                    &v47,
                    (__int64 *)&v43);
            v30 = *v29;
            *v29 = 0LL;
            v31 = *((_QWORD *)this + 800);
            *((_QWORD *)this + 800) = v30;
            if ( v31 )
              std::default_delete<EmitterShapes::CSpawner>::operator()(v30, v31);
            if ( (_QWORD)v47 )
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v47 + 8LL))(v47, 1LL);
LABEL_36:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v44);
            CShapePtr::Release((CShapePtr *)&v45);
            return v2;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1BCu, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
        }
      }
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v44);
    CShapePtr::Release((CShapePtr *)&v45);
LABEL_41:
    v37 = *((_QWORD *)this + 800);
    *((_QWORD *)this + 800) = 0LL;
    if ( v37 )
      std::default_delete<EmitterShapes::CSpawner>::operator()(v20, v37);
    return v2;
  }
  v38 = std::make_unique<EmitterShapes::CPointSpawner,,0>(&v43);
  v39 = *v38;
  *v38 = 0LL;
  v40 = *((_QWORD *)this + 800);
  *((_QWORD *)this + 800) = v39;
  if ( v40 )
    std::default_delete<EmitterShapes::CSpawner>::operator()(v39, v40);
  if ( v43 )
    (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *, __int64))(*(_QWORD *)v43 + 8LL))(v43, 1LL);
  return v2;
}
