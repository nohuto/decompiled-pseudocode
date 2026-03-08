/*
 * XREFs of ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180205454
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x180072BA0 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072D80 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180202370 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x180202458 (-SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z.c)
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x18020525C (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180206548 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 */

__int64 __fastcall EmitInstancedGeometry(struct CD3DBatchExecutionContext *this, __m128 *a2)
{
  struct CDrawListPrimitive *Primitive; // rbx
  unsigned __int64 v5; // r14
  gsl::details *v6; // rcx
  __m128 *v7; // r14
  int appended; // eax
  __int64 v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // eax
  bool v12; // cf
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // r12d
  float v17; // xmm2_4
  __int64 v18; // rdx
  float v19; // xmm3_4
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rax
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  int v26; // ecx
  __int64 v27; // rax
  float v28; // xmm0_4
  __int64 v29; // r13
  char *v30; // rsi
  __int64 v31; // r12
  float v32; // xmm5_4
  float v33; // xmm6_4
  float v34; // xmm7_4
  __m128 *v35; // rax
  __m128 v36; // xmm4
  float v37; // xmm1_4
  float v38; // xmm0_4
  __int64 v40; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-38h]
  __int64 v42; // [rsp+40h] [rbp-30h] BYREF
  void *v43; // [rsp+48h] [rbp-28h] BYREF

  Primitive = CRenderingBatchCommand::GetPrimitive((CRenderingBatchCommand *)a2);
  v5 = *((_QWORD *)Primitive + 7);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v40, *((unsigned int *)Primitive + 5));
  v41 = v5;
  if ( v40 == -1 || !v5 && v40 )
  {
    gsl::details::terminate(v6);
    JUMPOUT(0x1802056E7LL);
  }
  v7 = a2 + 1;
  CD3DBatchExecutionContext::SetLocalToWorld(this, a2 + 1);
  appended = CD3DBatchExecutionContext::AppendGeometry(
               (__int64)this,
               *((_DWORD *)Primitive + 2),
               *((_DWORD *)Primitive + 6),
               (unsigned int *)&v40,
               &v42,
               &v43);
  v10 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, appended, 0x38u, 0LL);
  }
  else
  {
    v11 = *((_DWORD *)Primitive + 2);
    v12 = *((_BYTE *)this + 72) != 0;
    v13 = *((_DWORD *)this + 19);
    v14 = v42;
    v15 = v12 ? 48 : 16;
    v40 = v42;
    v16 = v15 + 8 * v13;
    v41 = __PAIR64__(v11, v16);
    TransferAliasedVertices(Primitive, v15, &v40);
    v17 = 0.0;
    v18 = *((unsigned int *)Primitive + 2);
    v19 = 0.0;
    if ( *((_DWORD *)Primitive + 2) )
    {
      v20 = 0;
      v21 = (unsigned int)v18;
      do
      {
        v22 = v20;
        v20 += v16;
        v23 = fmaxf(*(float *)(v22 + v14), v17);
        v24 = fmaxf(*(float *)(v22 + v14 + 4), v19);
        v17 = v23;
        v19 = v24;
        --v21;
      }
      while ( v21 );
      v25 = v23 * 0.5;
      v26 = 0;
      do
      {
        v27 = v26;
        v26 += v16;
        v28 = *(float *)(v27 + v14 + 4) - (float)(v24 * 0.5);
        *(float *)(v27 + v14) = *(float *)(v27 + v14) - v25;
        *(float *)(v27 + v14 + 4) = v28;
        --v18;
      }
      while ( v18 );
    }
    v29 = *((unsigned int *)Primitive + 6);
    v30 = (char *)v43;
    v31 = v29;
    memcpy_0(v43, *((const void **)Primitive + 8), 48 * v29);
    if ( *((_DWORD *)Primitive + 25) == 1 )
    {
      v32 = v7[3].m128_f32[0];
      v33 = v7[3].m128_f32[1];
      v34 = v7[3].m128_f32[2];
      if ( (_DWORD)v29 )
      {
        v35 = (__m128 *)v30;
        do
        {
          v36 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(*v35, *v35, 255), v7[3]),
                      _mm_mul_ps(_mm_shuffle_ps(*v35, *v35, 170), v7[2])),
                    _mm_mul_ps(_mm_shuffle_ps(*v35, *v35, 85), v7[1])),
                  _mm_mul_ps(_mm_shuffle_ps(*v35, *v35, 0), *v7));
          v37 = _mm_shuffle_ps(v36, v36, 85).m128_f32[0];
          v38 = v36.m128_f32[0] - v32;
          v36.m128_f32[0] = _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
          v35->m128_f32[3] = (float)((float)((float)(v37 - v33) * (float)(v37 - v33)) + (float)(v38 * v38))
                           + (float)((float)(v36.m128_f32[0] - v34) * (float)(v36.m128_f32[0] - v34));
          v35 += 3;
          --v31;
        }
        while ( v31 );
      }
      std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        v30,
        &v30[48 * v29],
        0xAAAAAAAAAAAAAAABuLL * ((48 * v29) >> 4),
        (unsigned __int8 (__fastcall *)(__int128 *, char *))WSortInstances);
    }
  }
  return v10;
}
