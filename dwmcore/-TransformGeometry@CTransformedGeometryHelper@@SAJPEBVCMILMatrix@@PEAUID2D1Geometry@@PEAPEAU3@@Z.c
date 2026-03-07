__int64 __fastcall CTransformedGeometryHelper::TransformGeometry(
        const struct CMILMatrix *a1,
        struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  struct ID2D1Geometry *v3; // rdi
  unsigned int v4; // esi
  struct ID2D1Geometry *v6; // r14
  struct ID2D1Geometry *v8; // rax
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm1_4
  int (__fastcall **v12)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __int64 v13; // rbx
  void (__fastcall *v14)(__int64, struct ID2D1Geometry **); // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  CTransformedGeometryHelper *v19; // rax
  CTransformedGeometryHelper *v20; // rbx
  int D2DGeometry; // eax
  __int64 v22; // rcx
  struct ID2D1Geometry *v23; // [rsp+30h] [rbp-49h] BYREF
  __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  struct ID2D1Geometry *v25; // [rsp+40h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  __int128 v27; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+60h] [rbp-19h]
  __int128 v29; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h]
  __int128 v31; // [rsp+80h] [rbp+7h] BYREF
  int v32; // [rsp+90h] [rbp+17h]
  int v33; // [rsp+94h] [rbp+1Bh]

  v3 = 0LL;
  v4 = 0;
  v23 = 0LL;
  v6 = a2;
  if ( !a2 )
    goto LABEL_4;
  if ( !a1 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    v3 = v6;
LABEL_4:
    v8 = v3;
    v3 = 0LL;
    *a3 = v8;
    goto LABEL_5;
  }
  LOBYTE(a2) = 1;
  if ( CMILMatrix::Is2DAffine<1>((__int64)a1, (__int64)a2) )
  {
    v25 = v6;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v25);
    v10 = *(_DWORD *)a1;
    v11 = *((_DWORD *)a1 + 1);
    v24 = 0LL;
    v12 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))v6;
    *(_QWORD *)&v29 = __PAIR64__(v11, v10);
    *((_QWORD *)&v29 + 1) = *((_QWORD *)a1 + 2);
    v30 = *((_QWORD *)a1 + 6);
    if ( (*v12)(v6, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v24) >= 0 )
    {
      v13 = v24;
      v14 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v24 + 136LL);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
      v14(v13, &v25);
      v32 = 0;
      v33 = 0;
      v31 = *(_OWORD *)&_xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 144LL))(v24, &v31);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v27,
        (const struct D2D1::Matrix3x2F *)&v31,
        (const struct D2D1::Matrix3x2F *)&v29);
      v29 = v27;
      v30 = v28;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry *, __int128 *, __int64 *))(*g_DeviceManager + 72LL))(
            g_DeviceManager,
            v25,
            &v29,
            &v26);
    v4 = v15;
    if ( v15 >= 0 )
    {
      Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach(&v23, v26);
      v17 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
LABEL_24:
      v3 = v23;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2Eu, 0LL);
    v18 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
  }
  else
  {
    v19 = (CTransformedGeometryHelper *)operator new(0x40uLL);
    v20 = v19;
    if ( v19 )
    {
      *((_DWORD *)v19 + 2) = 0;
      *((_QWORD *)v19 + 3) = 0LL;
      *((_QWORD *)v19 + 4) = 0LL;
      *(_QWORD *)v19 = &CTransformedGeometryHelper::`vftable';
      *((_QWORD *)v19 + 5) = 0LL;
      *((_QWORD *)v19 + 6) = 0LL;
      *((_QWORD *)v19 + 7) = 0LL;
      *((_QWORD *)v19 + 2) = a1;
      ((void (__fastcall *)(CTransformedGeometryHelper *))*(&CTransformedGeometryHelper::`vftable' + 1))(v19);
    }
    else
    {
      v20 = 0LL;
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v23);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v20, v6, &v23);
    v4 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( v20 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v20 + 16LL))(v20);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D2DGeometry, 0x36u, 0LL);
    if ( v20 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v20 + 16LL))(v20);
    v3 = v23;
  }
LABEL_5:
  if ( v3 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
