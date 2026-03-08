/*
 * XREFs of ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x18007C830
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091278 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTemplateGeometryDesc@1@@Z @ 0x18007C578 (-GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTempla.c)
 *     ??A?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@QEBAAEBUD2D_POINT_2F@@_K@Z @ 0x1800D3D78 (--A-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@QEBAAEBUD2D_POINT_2F@@_K@Z.c)
 *     _lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator() @ 0x1800E58F8 (_lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_--operator().c)
 *     _lambda_b3835ef70f259f7b8f0c06129dcd6911_::operator() @ 0x1800F7A5C (_lambda_b3835ef70f259f7b8f0c06129dcd6911_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CCpuClipAntialiasSink::CreateUVData(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  __int64 v9; // rbx
  __m128 v11; // xmm9
  float *v12; // rax
  bool v13; // cl
  unsigned __int64 *v14; // r15
  int v15; // r14d
  HANDLE ProcessHeap; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  SIZE_T v21; // rdi
  HANDLE v22; // rax
  char *v23; // rax
  char *v24; // r13
  __m128 v25; // xmm0
  int v26; // edi
  __m128 v27; // xmm6
  __m128 v28; // xmm0
  __int64 v29; // rdx
  int v30; // ecx
  __m128 v31; // xmm10
  unsigned int v32; // r12d
  unsigned int v33; // eax
  int v34; // r10d
  int v35; // eax
  unsigned __int64 v36; // xmm2_8
  unsigned int v37; // ecx
  char *v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  __int64 v41; // r8
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  unsigned __int64 v46; // r9
  float v47; // xmm0_4
  unsigned int v48; // ecx
  char *v49; // rdx
  float v50; // xmm4_4
  unsigned __int64 v51; // rax
  float v52; // xmm5_4
  unsigned __int64 v53; // r9
  __int64 v54; // r8
  float v55; // xmm1_4
  float v56; // xmm2_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  unsigned __int64 v59; // r9
  float v60; // xmm0_4
  _QWORD *result; // rax
  float *v62; // rdi
  float *v63; // rax
  __m128 v64; // xmm3
  __m128 v65; // xmm1
  __m128 v66; // xmm2
  float v67; // xmm0_4
  float v68; // xmm6_4
  __m128 v69; // xmm1
  unsigned int v70; // esi
  float *v71; // rdi
  float *v72; // rax
  __m128 v73; // xmm1
  __m128 v74; // xmm2
  __int64 v75; // rdx
  __m128 v76; // xmm1
  __m128 v77; // xmm1
  __m128 v78; // xmm0
  bool v79; // [rsp+28h] [rbp-E0h]
  int v80; // [rsp+2Ch] [rbp-DCh]
  int v81; // [rsp+30h] [rbp-D8h]
  unsigned __int64 Y; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v83; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v84; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v86; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v87; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v88; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v89; // [rsp+70h] [rbp-98h] BYREF
  __int64 v90; // [rsp+78h] [rbp-90h]
  __int64 v91; // [rsp+80h] [rbp-88h]
  unsigned __int64 v92; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v93; // [rsp+90h] [rbp-78h]
  __int64 v94; // [rsp+98h] [rbp-70h]
  __int64 v95; // [rsp+A0h] [rbp-68h]
  __int64 v96; // [rsp+A8h] [rbp-60h]
  __int64 v97; // [rsp+B0h] [rbp-58h]
  __int64 v98; // [rsp+B8h] [rbp-50h]
  __int64 v99; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v100; // [rsp+C8h] [rbp-40h]
  float *v101; // [rsp+D0h] [rbp-38h]
  float *v102; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v103; // [rsp+E0h] [rbp-28h]
  void *retaddr; // [rsp+160h] [rbp+58h]

  v9 = a2;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(a1, a2, a3, (__int64)&v92);
  v11 = (__m128)(unsigned int)FLOAT_1_0;
  v12 = (float *)(*(_QWORD *)(a1 + 8 * v9 + 40) + 92LL);
  v101 = v12;
  v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*v12 - 1.0) & _xmm) >= 0.000081380211
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(v12[1] - 1.0) & _xmm) >= 0.000081380211;
  v14 = a6;
  v15 = a5;
  v91 = (__int64)a6;
  v79 = v13;
  v89 = a4;
  LODWORD(v90) = a5;
  v102 = v12;
  LOBYTE(v103) = v13;
  ProcessHeap = GetProcessHeap();
  v17 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v18 = v17;
  if ( !v17 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v17 = a4;
  v19 = v92;
  v100 = v92;
  v17[1] = v92;
  v20 = a4 * v19;
  v21 = 8 * v20;
  if ( !is_mul_ok(v20, 8uLL) )
    v21 = -1LL;
  v22 = GetProcessHeap();
  v23 = (char *)HeapAlloc(v22, 0, v21);
  v24 = v23;
  if ( !v23 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v18[2] = v23;
  v25 = (__m128)*(unsigned int *)(a3 + 4);
  v26 = 8 * *(_DWORD *)v18;
  v81 = v26;
  v25.m128_f32[0] = modff(v25.m128_f32[0], (float *)&Y);
  v27 = v25;
  v28 = (__m128)*(unsigned int *)(a3 + 8);
  v28.m128_f32[0] = modff(v28.m128_f32[0], (float *)&Y);
  v29 = v96;
  v30 = v97;
  v85 = v96;
  v80 = v97;
  v31 = v28;
  if ( v27.m128_f32[0] > 0.000081380211 )
  {
    v32 = 2;
    v62 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[](&v92, 2LL);
    v63 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[](&v92, 0LL);
    v64 = (__m128)(unsigned int)FLOAT_1_0;
    v64.m128_f32[0] = 1.0 - v27.m128_f32[0];
    v65 = v27;
    v66 = v64;
    v65.m128_f32[0] = (float)(v27.m128_f32[0] * *v62) + (float)((float)(1.0 - v27.m128_f32[0]) * *v63);
    v66.m128_f32[0] = (float)((float)(1.0 - v27.m128_f32[0]) * v63[1]) + (float)(v27.m128_f32[0] * v62[1]);
    v67 = v27.m128_f32[0] * *(float *)(3 * v80 + v85);
    v68 = v27.m128_f32[0] * *(float *)(3 * v80 + v85 + 4);
    Y = _mm_unpacklo_ps(v65, v66).m128_u64[0];
    v69 = v64;
    v69.m128_f32[0] = (float)(v64.m128_f32[0] * *(float *)(v80 + v85)) + v67;
    v64.m128_f32[0] = (float)(v64.m128_f32[0] * *(float *)(v80 + v85 + 4)) + v68;
    v83 = _mm_unpacklo_ps(v69, v64).m128_u64[0];
    lambda_b3835ef70f259f7b8f0c06129dcd6911_::operator()(&v102, &v84, &v83);
    lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator()(&v89, &Y, v24);
    v26 = v81;
    lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator()(&v89, &v84, &v24[v81]);
    v30 = v80;
    v29 = v85;
    v14 = (unsigned __int64 *)v91;
    v15 = v90;
    a4 = v89;
  }
  else
  {
    v32 = 0;
  }
  if ( v31.m128_f32[0] > 0.000081380211 )
  {
    LODWORD(Y) = v92;
    v33 = v92 - 2;
  }
  else
  {
    v33 = v92;
    LODWORD(Y) = v92;
  }
  LODWORD(v84) = v33;
  if ( v32 < v33 )
  {
    v34 = v32 * v26;
    v88 = v93;
    while ( 1 )
    {
      if ( v32 >= v100 )
      {
LABEL_55:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v35 = v30 * (v32 + 1);
      if ( v79 )
      {
        v77 = (__m128)*(unsigned int *)(v35 + v29);
        v78 = (__m128)*(unsigned int *)(v35 + v29 + 4);
        v77.m128_f32[0] = v77.m128_f32[0] / *v101;
        v78.m128_f32[0] = v78.m128_f32[0] / v101[1];
        v86 = _mm_unpacklo_ps(v77, v78).m128_u64[0];
        v36 = v86;
      }
      else
      {
        v87 = *(_QWORD *)(v35 + v29);
        v36 = v87;
      }
      v37 = 0;
      v38 = &v24[v34];
      v83 = v36;
      if ( a4 )
      {
        v39 = 0LL;
        do
        {
          if ( _bittest(&v15, v37) )
          {
            if ( v39 >= *v14 )
              goto LABEL_55;
            v40 = v14[1];
            v41 = 52 * v39;
            v26 = v81;
            v42 = (float)((float)(*(float *)(v88 + 8LL * v32 + 4) * *(float *)(52 * v39 + v40 + 12))
                        + (float)(*(float *)(v88 + 8LL * v32) * *(float *)(52 * v39 + v40)))
                + *(float *)(52 * v39 + v40 + 24);
            v43 = (float)((float)(*(float *)(v88 + 8LL * v32) * *(float *)(52 * v39 + v40 + 4))
                        + (float)(*(float *)(v88 + 8LL * v32 + 4) * *(float *)(52 * v39 + v40 + 16)))
                + *(float *)(52 * v39 + v40 + 28);
            v44 = (float)((float)(*(float *)(v88 + 8LL * v32) * *(float *)(52 * v39 + v40 + 8))
                        + (float)(*(float *)(v88 + 8LL * v32 + 4) * *(float *)(52 * v39 + v40 + 20)))
                + *(float *)(52 * v39 + v40 + 32);
            if ( COERCE_FLOAT(LODWORD(v44) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v44 - 1.0) & _xmm) >= 0.000081380211 )
            {
              v42 = v42 / v44;
              v43 = v43 / v44;
            }
            v45 = *(float *)(v41 + v40 + 44);
            if ( v42 <= v45 )
              v45 = fmaxf(v42, *(float *)(v41 + v40 + 36));
            *(float *)&v38[8 * v39] = v45;
            if ( v39 >= *v14 )
              goto LABEL_55;
            v46 = v14[1];
            v47 = *(float *)(v41 + v46 + 48);
            if ( v43 <= v47 )
              v47 = fmaxf(v43, *(float *)(v41 + v46 + 40));
          }
          else
          {
            *(_DWORD *)&v38[8 * v39] = 0;
            v47 = 0.0;
          }
          ++v37;
          *(float *)&v38[8 * v39 + 4] = v47;
          v39 = v37;
        }
        while ( v37 < a4 );
      }
      v48 = 0;
      v49 = &v24[v34 + v26];
      if ( a4 )
      {
        v50 = *((float *)&v83 + 1);
        v51 = 0LL;
        v52 = *(float *)&v83;
        do
        {
          if ( _bittest(&v15, v48) )
          {
            if ( v51 >= *v14 )
              goto LABEL_55;
            v53 = v14[1];
            v54 = 52 * v51;
            v55 = (float)((float)(v50 * *(float *)(52 * v51 + v53 + 12)) + (float)(v52 * *(float *)(52 * v51 + v53)))
                + *(float *)(52 * v51 + v53 + 24);
            v56 = (float)((float)(v50 * *(float *)(52 * v51 + v53 + 16)) + (float)(v52 * *(float *)(52 * v51 + v53 + 4)))
                + *(float *)(52 * v51 + v53 + 28);
            v57 = (float)((float)(v50 * *(float *)(52 * v51 + v53 + 20)) + (float)(v52 * *(float *)(52 * v51 + v53 + 8)))
                + *(float *)(52 * v51 + v53 + 32);
            if ( COERCE_FLOAT(LODWORD(v57) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v57 - 1.0) & _xmm) >= 0.000081380211 )
            {
              v55 = v55 / v57;
              v56 = v56 / v57;
            }
            v58 = *(float *)(v54 + v53 + 44);
            if ( v55 <= v58 )
              v58 = fmaxf(v55, *(float *)(v54 + v53 + 36));
            *(float *)&v49[8 * v51] = v58;
            if ( v51 >= *v14 )
              goto LABEL_55;
            v59 = v14[1];
            v60 = *(float *)(v59 + v54 + 48);
            if ( v56 <= v60 )
              v60 = fmaxf(v56, *(float *)(v59 + v54 + 40));
          }
          else
          {
            *(_DWORD *)&v49[8 * v51] = 0;
            v60 = 0.0;
          }
          ++v48;
          *(float *)&v49[8 * v51 + 4] = v60;
          v51 = v48;
        }
        while ( v48 < a4 );
      }
      v32 += 2;
      v34 += 2 * v26;
      if ( v32 >= (unsigned int)v84 )
        break;
      v30 = v80;
      v29 = v85;
    }
  }
  if ( v31.m128_f32[0] > 0.000081380211 )
  {
    v70 = Y - 4;
    v71 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[](&v92, (unsigned int)(Y - 4 + 2));
    v72 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[](&v92, v70);
    v11.m128_f32[0] = 1.0 - v31.m128_f32[0];
    v73 = v31;
    v74 = v11;
    v73.m128_f32[0] = (float)(v31.m128_f32[0] * *v71) + (float)((float)(1.0 - v31.m128_f32[0]) * *v72);
    v74.m128_f32[0] = (float)((float)(1.0 - v31.m128_f32[0]) * v72[1]) + (float)(v31.m128_f32[0] * v71[1]);
    v75 = (int)(v80 * (v70 + 3));
    LODWORD(v72) = v80 * (v70 + 1);
    v87 = _mm_unpacklo_ps(v73, v74).m128_u64[0];
    v76 = v31;
    v76.m128_f32[0] = (float)(v31.m128_f32[0] * *(float *)(v75 + v85))
                    + (float)((float)(1.0 - v31.m128_f32[0]) * *(float *)((int)v72 + v85));
    v11.m128_f32[0] = (float)((float)(1.0 - v31.m128_f32[0]) * *(float *)((int)v72 + v85 + 4))
                    + (float)(v31.m128_f32[0] * *(float *)(v75 + v85 + 4));
    v88 = _mm_unpacklo_ps(v76, v11).m128_u64[0];
    lambda_b3835ef70f259f7b8f0c06129dcd6911_::operator()(&v102, &v86, &v88);
    lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator()(&v89, &v87, &v24[v81 * (v70 + 2)]);
    lambda_2d1d0b9d59cfdef8f44c4926bb7a86e6_::operator()(&v89, &v86, &v24[v81 * (v70 + 3)]);
  }
  result = a7;
  *a7 = v18;
  return result;
}
