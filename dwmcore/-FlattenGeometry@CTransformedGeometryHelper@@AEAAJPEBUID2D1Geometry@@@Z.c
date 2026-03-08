/*
 * XREFs of ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x1801AFC34
 * Callers:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x1801AFEDC (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004C70C (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800C283C (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformedGeometryHelper::FlattenGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  float v6; // xmm1_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  unsigned int v12; // ecx
  float v13; // xmm8_4
  float *v14; // rax
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  int v22; // eax
  __int64 v23; // rcx
  __int128 v25; // [rsp+38h] [rbp-59h] BYREF
  __int128 v26; // [rsp+48h] [rbp-49h] BYREF
  __int64 v27; // [rsp+58h] [rbp-39h] BYREF
  float v28[2]; // [rsp+60h] [rbp-31h] BYREF
  float v29; // [rsp+68h] [rbp-29h]
  float v30; // [rsp+6Ch] [rbp-25h]
  float v31; // [rsp+70h] [rbp-21h]
  float v32; // [rsp+74h] [rbp-1Dh]

  v2 = 0;
  if ( !*((_QWORD *)this + 2) )
  {
LABEL_16:
    v22 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
    v2 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xB8u, 0LL);
    return v2;
  }
  v5 = *(_QWORD *)a2;
  v25 = 0LL;
  (*(void (__fastcall **)(const struct ID2D1Geometry *, _QWORD, __int128 *))(v5 + 32))(a2, 0LL, &v25);
  v6 = *((float *)&v25 + 2);
  v7 = *(float *)&v25;
  v8 = *((float *)&v25 + 1);
  v9 = *((float *)&v25 + 3);
  v26 = v25;
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v26) )
  {
    v10 = (float)(v7 - v6) * (float)(v7 - v6);
    sqrtf_0((float)((float)(v8 - v9) * (float)(v8 - v9)) + v10);
    sqrtf_0((float)((float)(v9 - v8) * (float)(v9 - v8)) + v10);
    CMILMatrix::Transform2DRectToPerspective(
      *((CMILMatrix **)this + 2),
      (const struct MilRectF *)&v26,
      (struct MilPoint2F *const)&v27);
    v11 = *(float *)&v27;
    v12 = 1;
    v13 = *((float *)&v27 + 1);
    v14 = v28;
    v15 = *((float *)&v27 + 1);
    *(_QWORD *)&v25 = v27;
    v16 = *((float *)&v27 + 1);
    LODWORD(v17) = v27;
    *((_QWORD *)&v25 + 1) = v27;
    LODWORD(v18) = v27;
    do
    {
      if ( v17 <= *v14 )
      {
        if ( *v14 > v18 )
          v18 = *v14;
      }
      else
      {
        v17 = *v14;
      }
      v19 = v14[1];
      if ( v15 <= v19 )
      {
        if ( v19 > v16 )
          v16 = v14[1];
      }
      else
      {
        v15 = v14[1];
      }
      ++v12;
      v14 += 2;
    }
    while ( v12 < 4 );
    *(_QWORD *)&v25 = __PAIR64__(LODWORD(v15), LODWORD(v17));
    *((_QWORD *)&v25 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v18));
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v25)
      && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v25) )
    {
      v20 = v28[1] - v32;
      v21 = v28[0] - v31;
      sqrtf_0((float)((float)(v11 - v29) * (float)(v11 - v29)) + (float)((float)(v13 - v30) * (float)(v13 - v30)));
      sqrtf_0((float)(v21 * v21) + (float)(v20 * v20));
      goto LABEL_16;
    }
  }
  return v2;
}
