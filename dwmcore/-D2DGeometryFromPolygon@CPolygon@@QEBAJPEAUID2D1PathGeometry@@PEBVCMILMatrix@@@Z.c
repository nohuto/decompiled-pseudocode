__int64 __fastcall CPolygon::D2DGeometryFromPolygon(
        const struct MilPoint4F **this,
        struct ID2D1PathGeometry *a2,
        const struct CMILMatrix *a3)
{
  __int128 v3; // xmm0
  int v4; // eax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __m128 v10; // xmm6
  __int64 v11; // rax
  __m128 v12; // xmm7
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25[2]; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v26[4]; // [rsp+48h] [rbp-49h] BYREF
  int v27; // [rsp+88h] [rbp-9h]
  float v28; // [rsp+98h] [rbp+7h] BYREF
  float v29; // [rsp+9Ch] [rbp+Bh]
  float v30; // [rsp+A4h] [rbp+13h]

  v3 = *(_OWORD *)a3;
  v4 = *((_DWORD *)a3 + 16);
  v6 = *((_OWORD *)a3 + 1);
  v25[0] = 0LL;
  v26[0] = v3;
  v8 = *((_OWORD *)a3 + 2);
  v27 = v4;
  v26[1] = v6;
  v9 = *((_OWORD *)a3 + 3);
  v26[2] = v8;
  v26[3] = v9;
  CMILMatrix::Multiply((const struct CMILMatrix *)(this + 18), (const struct CMILMatrix *)v26, (struct CMILMatrix *)v26);
  CMILMatrix::Transform((CMILMatrix *)v26, this[2], (struct MilPoint4F *)&v28, 1);
  v10 = (__m128)LODWORD(v28);
  v12 = (__m128)LODWORD(v29);
  v10.m128_f32[0] = v28 / v30;
  v11 = *(_QWORD *)a2;
  v12.m128_f32[0] = v29 / v30;
  v28 = v28 / v30;
  v29 = v29 / v30;
  v13 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(v11 + 136))(a2, v25);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x221u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v25[0] + 40LL))(
      v25[0],
      _mm_unpacklo_ps(v10, v12).m128_u64[0],
      0LL);
    v16 = *((_DWORD *)this + 10);
    if ( v16 > 1 )
    {
      v17 = 20LL;
      v18 = v16 - 1;
      do
      {
        CMILMatrix::Transform(
          (CMILMatrix *)v26,
          (const struct MilPoint4F *)((char *)this[2] + v17),
          (struct MilPoint4F *)&v28,
          1);
        v19 = (__m128)LODWORD(v28);
        v20 = (__m128)LODWORD(v29);
        v21 = *(_QWORD *)v25[0];
        v28 = v28 / v30;
        v19.m128_f32[0] = v28;
        v29 = v29 / v30;
        v20.m128_f32[0] = v29;
        (*(void (__fastcall **)(__int64, unsigned __int64))(v21 + 80))(v25[0], _mm_unpacklo_ps(v19, v20).m128_u64[0]);
        v17 += 20LL;
        --v18;
      }
      while ( v18 );
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25[0] + 64LL))(v25[0], 1LL);
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25[0] + 72LL))(v25[0]);
    v15 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x235u, 0LL);
  }
  ReleaseInterface<ID2D1GeometrySink>(v25);
  return v15;
}
