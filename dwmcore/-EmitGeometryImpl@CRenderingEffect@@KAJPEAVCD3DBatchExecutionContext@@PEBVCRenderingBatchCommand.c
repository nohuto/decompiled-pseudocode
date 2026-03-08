/*
 * XREFs of ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x180072BA0
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180073600 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCom.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800E10A0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18000616C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072D80 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBatchCommand@@_N@Z @ 0x18007D038 (-EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBa.c)
 *     ?GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180085C7C (-GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180205454 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1802064BC (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 */

__int64 __fastcall CRenderingEffect::EmitGeometryImpl(struct CD3DBatchExecutionContext *this, __m128 *a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v7; // edi
  struct CDrawListPrimitive *Primitive; // rbx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  int appended; // eax
  unsigned int v13; // ecx
  __m128 v14; // xmm3
  __m128 *v15; // r10
  int v16; // r9d
  __m128 v17; // xmm2
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r14
  int v23; // r11d
  int v24; // ecx
  __int32 v25; // xmm0_4
  char v26; // si
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  _QWORD v32[2]; // [rsp+30h] [rbp-79h] BYREF
  int v33; // [rsp+40h] [rbp-69h]
  int v34; // [rsp+44h] [rbp-65h]
  __int64 v35; // [rsp+48h] [rbp-61h]
  int v36; // [rsp+50h] [rbp-59h]
  int v37; // [rsp+54h] [rbp-55h]
  int v38; // [rsp+58h] [rbp-51h]
  __int32 v39; // [rsp+5Ch] [rbp-4Dh]
  char v40; // [rsp+60h] [rbp-49h]
  __int64 v41; // [rsp+68h] [rbp-41h]
  int v42; // [rsp+70h] [rbp-39h]
  int v43; // [rsp+74h] [rbp-35h]
  _OWORD v44[4]; // [rsp+80h] [rbp-29h] BYREF
  int v45; // [rsp+C0h] [rbp+17h]
  _QWORD v46[2]; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v47; // [rsp+118h] [rbp+6Fh] BYREF

  v3 = a2->m128_u64[1];
  v7 = 0;
  if ( (*(_DWORD *)(v3 + 48) & 0x1000) != 0 )
  {
    v28 = EmitCpuClipAntialiasTemplateGeometry(this, (const struct CCpuClipAntialiasBatchCommand *)a2, a3);
    v7 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x184u, 0LL);
  }
  else
  {
    if ( a2->m128_i32[0] == 4 )
      Primitive = CMegaRectBatchCommand::GetPrimitive((CMegaRectBatchCommand *)a2);
    else
      Primitive = *(struct CDrawListPrimitive **)(v3 + 64);
    v9 = *((_DWORD *)Primitive + 2);
    if ( v9 )
    {
      if ( *((_DWORD *)Primitive + 6) )
      {
        v30 = EmitInstancedGeometry(this, (const struct CRenderingBatchCommand *)a2);
        v7 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1A9u, 0LL);
      }
      else
      {
        v10 = *((_QWORD *)Primitive + 7);
        v11 = *((unsigned int *)Primitive + 5);
        v46[0] = v11;
        v46[1] = v10;
        if ( !v10 && v11 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        appended = CD3DBatchExecutionContext::AppendGeometry((_DWORD)this, v9, 0, (unsigned int)v46, (__int64)&v47, 0LL);
        v7 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, appended, 0x193u, 0LL);
        }
        else
        {
          v14 = (__m128)(unsigned int)FLOAT_1_0;
          v15 = a2 + 1;
          v16 = *((_DWORD *)Primitive + 4);
          v17 = (__m128)(unsigned int)FLOAT_1_0;
          v17.m128_f32[0] = 1.0 / *((float *)Primitive + 23);
          v18 = *((_DWORD *)Primitive + 2);
          v19 = *((unsigned __int8 *)this + 72);
          v20 = 48;
          v45 = 0;
          if ( !(_BYTE)v19 )
            v20 = 16;
          v21 = *((_DWORD *)this + 19);
          v22 = *((_QWORD *)Primitive + 5);
          v32[1] = *((_QWORD *)Primitive + 4);
          v34 = v18;
          v23 = v20 + 8 * v21;
          v24 = *((_DWORD *)Primitive + 3);
          v35 = v22;
          v33 = 8 * v16 + 16;
          v36 = v33;
          v37 = v24;
          v38 = v16;
          v42 = v23;
          v43 = v18;
          v41 = v47;
          v14.m128_f32[0] = 1.0 / *((float *)Primitive + 24);
          v44[0] = _mm_mul_ps(*v15, _mm_shuffle_ps(v17, v17, 0));
          v44[1] = _mm_mul_ps(a2[2], _mm_shuffle_ps(v14, v14, 0));
          v44[2] = a2[3];
          v44[3] = a2[4];
          v25 = a2[5].m128_i32[2];
          v26 = *((_BYTE *)Primitive + 104);
          v32[0] = *((_QWORD *)Primitive + 6);
          v39 = v25;
          v40 = v26;
          if ( (_BYTE)v19 )
          {
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
              (__int64)v32,
              (__int64)v15,
              (__int64)v44,
              a3);
          }
          else if ( v24 )
          {
            TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>((__int64)v32, v19, (unsigned int *)v44);
          }
          else
          {
            TransferAliasedVertices(v32);
          }
        }
      }
    }
  }
  return v7;
}
