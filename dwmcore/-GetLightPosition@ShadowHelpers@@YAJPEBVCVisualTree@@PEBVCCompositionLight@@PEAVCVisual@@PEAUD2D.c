/*
 * XREFs of ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x180005ED8
 * Callers:
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180005D9C (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000762C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1802B4D70 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180005BBC (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180006078 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GetLightPosition(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CCompositionLight *a3,
        FLOAT *a4)
{
  int v7; // r12d
  unsigned int v8; // ebx
  const struct CCompositionLight *v9; // rax
  __int64 v10; // rdx
  const struct CCompositionLight *v11; // r14
  __int64 v12; // rdx
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  __int64 v16; // rax
  float *v17; // rax
  FLOAT v18; // xmm8_4
  FLOAT v19; // xmm7_4
  __m128 v20; // xmm0
  FLOAT z; // xmm2_4
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rax
  FLOAT v26; // xmm1_4
  FLOAT v27; // xmm0_4
  FLOAT y; // xmm1_4
  int v29; // eax
  unsigned int v30; // ecx
  struct D2D_VECTOR_4F v31; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v32; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v33[48]; // [rsp+58h] [rbp-B0h] BYREF
  float v34; // [rsp+88h] [rbp-80h]
  float v35; // [rsp+8Ch] [rbp-7Ch]
  float v36; // [rsp+90h] [rbp-78h]
  FLOAT v37; // [rsp+94h] [rbp-74h]
  int v38; // [rsp+98h] [rbp-70h]
  _BYTE v39[64]; // [rsp+A8h] [rbp-60h] BYREF
  int v40; // [rsp+E8h] [rbp-20h]

  v7 = (int)this;
  v8 = 0;
  v9 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2);
  v40 = 0;
  v11 = v9;
  if ( a3 == v9 )
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)v39);
  }
  else
  {
    v23 = CVisual::CalcSrcToDestVisualTransform(v7, v10, (__int64)v9, (int)a3, (__int64)v39);
    v8 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x59u, 0LL);
      return v8;
    }
  }
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL))(a2) == 2 )
  {
    v25 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 224LL))(a2);
    v26 = *(float *)(v25 + 4);
    v31.x = *(FLOAT *)v25;
    v27 = *(float *)(v25 + 8);
    v31.y = v26;
    v31.z = v27;
    LODWORD(v31.w) = (_DWORD)FLOAT_1_0;
    CMILMatrix::Transform4DVector((CMILMatrix *)v39, &v32, &v31);
    y = v32.y;
    z = v32.z;
    *a4 = v32.x;
    a4[1] = y;
  }
  else
  {
    v38 = 0;
    if ( a3 == v11 )
    {
      CMILMatrix::SetToIdentity((CMILMatrix *)v33);
    }
    else
    {
      v29 = CVisual::CalcSrcToDestVisualTransform(v7, v12, (__int64)a3, (int)v11, (__int64)v33);
      v8 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x72u, 0LL);
        return v8;
      }
    }
    v13 = v34;
    v14 = v35;
    v15 = v36;
    v16 = *(_QWORD *)a2;
    v31.w = v37;
    v17 = (float *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(v16 + 232))(a2);
    v18 = v15 - (float)(v17[2] * 100.0);
    v19 = v14 - (float)(v17[1] * 100.0);
    v31.x = v13 - (float)(*v17 * 100.0);
    v31.z = v18;
    v31.y = v19;
    v20 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v39, &v32, &v31));
    *a4 = v20.m128_f32[0];
    *((_DWORD *)a4 + 1) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    LODWORD(z) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
  }
  a4[2] = z;
  return v8;
}
