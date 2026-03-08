/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180283F20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UID2D1GeometrySink@@@@YAXAEAPEAUID2D1GeometrySink@@@Z @ 0x1800E73CC (--$ReleaseInterface@UID2D1GeometrySink@@@@YAXAEAPEAUID2D1GeometrySink@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PathGeometry@@@@YAXAEAPEAUID2D1PathGeometry@@@Z @ 0x1800E73F0 (--$ReleaseInterface@UID2D1PathGeometry@@@@YAXAEAPEAUID2D1PathGeometry@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1801176EC (ceilf_0.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __m128 v25; // xmm6
  float v26; // xmm7_4
  __m128 v27; // xmm8
  float v28; // xmm1_4
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // [rsp+48h] [rbp-89h] BYREF
  __int64 v36; // [rsp+50h] [rbp-81h] BYREF
  __int64 v37; // [rsp+58h] [rbp-79h] BYREF
  __int64 v38; // [rsp+60h] [rbp-71h] BYREF
  __int64 v39; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-61h] BYREF
  float X; // [rsp+80h] [rbp-51h] BYREF
  float v42; // [rsp+84h] [rbp-4Dh]
  unsigned int v43; // [rsp+88h] [rbp-49h]
  float v44; // [rsp+8Ch] [rbp-45h]

  v36 = 0LL;
  v37 = 0LL;
  *a6 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 176) + 80LL))(**(_QWORD **)(a1 + 176), &v36);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x559u, 0LL);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 176) + 80LL))(
            **(_QWORD **)(a1 + 176),
            &v38);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x55Au, 0LL);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 136LL))(v36, &v37);
      v12 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x55Bu, 0LL);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 136LL))(v38, &v35);
        v12 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x55Cu, 0LL);
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a3 + 88LL))(
                  a3,
                  a2,
                  1LL,
                  a4,
                  LODWORD(FLOAT_0_25),
                  v37);
          v12 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x564u, 0LL);
          }
          else
          {
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 72LL))(v37);
            v12 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x566u, 0LL);
            }
            else
            {
              v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v36 + 32LL))(v36, 0LL, &X);
              v12 = v23;
              if ( v23 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x56Bu, 0LL);
              }
              else
              {
                v25 = (__m128)LODWORD(X);
                v26 = *(float *)&v43;
                if ( X <= *(float *)&v43 )
                {
                  if ( COERCE_FLOAT(LODWORD(X) & _xmm) < 8388608.0 )
                    v25 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(X));
                  v27 = (__m128)LODWORD(v42);
                  if ( COERCE_FLOAT(LODWORD(v42) & _xmm) < 8388608.0 )
                    v27 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(v42));
                  if ( COERCE_FLOAT(LODWORD(v26) & _xmm) < 8388608.0 )
                    v26 = (float)(int)ceilf_0(v26);
                  v28 = v44;
                  if ( COERCE_FLOAT(LODWORD(v44) & _xmm) < 8388608.0 )
                    v28 = (float)(int)ceilf_0(v44);
                  if ( a5 )
                  {
                    *(_DWORD *)a5 = v25.m128_i32[0];
                    *(float *)(a5 + 8) = v26;
                    *(_DWORD *)(a5 + 4) = v27.m128_i32[0];
                    *(float *)(a5 + 12) = v28;
                  }
                  v25.m128_f32[0] = v25.m128_f32[0] - 1.0;
                  v27.m128_f32[0] = v27.m128_f32[0] - 1.0;
                  X = v25.m128_f32[0];
                  v42 = v27.m128_f32[0];
                  *(float *)&v43 = v26 + 1.0;
                  v44 = v28 + 1.0;
                  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v35 + 40LL))(
                    v35,
                    _mm_unpacklo_ps(v25, v27).m128_u64[0],
                    0LL);
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 64LL))(v35, 1LL);
                  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v35 + 40LL))(
                    v35,
                    _mm_unpacklo_ps((__m128)v43, (__m128)LODWORD(v44)).m128_u64[0],
                    0LL);
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 64LL))(v35, 1LL);
                  v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 72LL))(v35);
                  v12 = v29;
                  if ( v29 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x599u, 0LL);
                  }
                  else
                  {
                    v40[0] = v36;
                    v40[1] = v38;
                    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, __int64 *))(***(_QWORD ***)(a1 + 176)
                                                                                                  + 64LL))(
                            **(_QWORD **)(a1 + 176),
                            0LL,
                            v40,
                            2LL,
                            &v39);
                    v12 = v31;
                    if ( v31 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x5A3u, 0LL);
                    }
                    else
                    {
                      v33 = v39;
                      v39 = 0LL;
                      *a6 = v33;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterface<ID2D1PathGeometry>(&v36);
  ReleaseInterface<ID2D1GeometrySink>(&v37);
  ReleaseInterface<ID2D1PathGeometry>(&v38);
  ReleaseInterface<ID2D1GeometrySink>(&v35);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  return v12;
}
