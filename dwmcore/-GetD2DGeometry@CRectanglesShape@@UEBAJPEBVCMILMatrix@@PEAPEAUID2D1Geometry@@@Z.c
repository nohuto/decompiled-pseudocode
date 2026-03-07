__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int i; // ebx
  __int64 v15; // rax
  int v16; // xmm2_4
  int v17; // xmm0_4
  int v18; // eax
  __int64 v19; // rcx
  struct ID2D1Geometry *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-29h] BYREF
  struct ID2D1Geometry *v22; // [rsp+38h] [rbp-21h] BYREF
  int v23; // [rsp+40h] [rbp-19h] BYREF
  int v24; // [rsp+44h] [rbp-15h]
  int v25; // [rsp+48h] [rbp-11h]
  int v26; // [rsp+4Ch] [rbp-Dh]
  int v27; // [rsp+50h] [rbp-9h]
  int v28; // [rsp+54h] [rbp-5h]
  int v29; // [rsp+58h] [rbp-1h]
  int v30; // [rsp+5Ch] [rbp+3h]
  _DWORD v31[8]; // [rsp+60h] [rbp+7h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(*g_DeviceManager + 80LL))(g_DeviceManager, &v22);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x38u, 0LL);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v22 + 136LL))(v22, &v21);
      v8 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3Au, 0LL);
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)this + 10); ++i )
        {
          v15 = *((_QWORD *)this + 2);
          v16 = *(_DWORD *)(v15 + 16LL * i);
          v17 = *(_DWORD *)(v15 + 16LL * i + 8);
          v24 = *(_DWORD *)(v15 + 16LL * i + 4);
          v26 = v24;
          v28 = *(_DWORD *)(v15 + 16LL * i + 12);
          v30 = v28;
          v23 = v16;
          v25 = v17;
          v27 = v17;
          v29 = v16;
          CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v23, (struct MilPoint2F *)v31, 4u);
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v21 + 40LL))(
            v21,
            _mm_unpacklo_ps((__m128)v31[0], (__m128)v31[1]).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 80LL))(
            v21,
            _mm_unpacklo_ps((__m128)v31[2], (__m128)v31[3]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 80LL))(
            v21,
            _mm_unpacklo_ps((__m128)v31[4], (__m128)v31[5]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 80LL))(
            v21,
            _mm_unpacklo_ps((__m128)v31[6], (__m128)v31[7]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL))(v21, 1LL);
        }
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21);
        v8 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x5Cu, 0LL);
        }
        else
        {
          v20 = v22;
          v22 = 0LL;
          *a3 = v20;
        }
      }
    }
  }
  else
  {
    v6 = CRectanglesShape::EnsureD2DGeometry(this);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x31u, 0LL);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
    }
  }
  ReleaseInterface<ID2D1PathGeometry>(&v22);
  ReleaseInterface<ID2D1GeometrySink>(&v21);
  return v8;
}
