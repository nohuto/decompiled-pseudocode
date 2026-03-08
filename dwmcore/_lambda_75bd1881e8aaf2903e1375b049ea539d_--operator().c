/*
 * XREFs of _lambda_75bd1881e8aaf2903e1375b049ea539d_::operator() @ 0x180049D3C
 * Callers:
 *     ?EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBatchCommand@@_N@Z @ 0x18007D038 (-EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBa.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall lambda_75bd1881e8aaf2903e1375b049ea539d_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        float a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 *a9)
{
  float *v9; // r13
  unsigned int v10; // esi
  float *v12; // r9
  int v14; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  float v17; // xmm1_4
  float v18; // xmm2_4
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  float v22; // xmm1_4
  float *v23; // rdx
  float *v24; // rax
  float *v25; // rbx
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float *v31; // rcx
  float v32; // xmm1_4
  float v33; // xmm4_4
  __int64 v34; // rdx
  int v35; // eax
  _BYTE *v37; // [rsp+28h] [rbp-E0h]
  _QWORD v38[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v39; // [rsp+58h] [rbp-B0h]
  int v40; // [rsp+5Ch] [rbp-ACh]
  int v41; // [rsp+60h] [rbp-A8h]
  int v42; // [rsp+64h] [rbp-A4h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  int v45; // [rsp+78h] [rbp-90h]
  int v46; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v47[16]; // [rsp+88h] [rbp-80h] BYREF
  char v48; // [rsp+98h] [rbp-70h] BYREF
  char v49; // [rsp+A0h] [rbp-68h] BYREF
  char v50; // [rsp+B8h] [rbp-50h] BYREF

  v9 = (float *)&v49;
  v10 = a4;
  v12 = (float *)v47;
  v37 = v47;
  v14 = a3 - v10;
  do
  {
    if ( (unsigned __int64)v10 >= *(_QWORD *)a2
      || (v15 = *(_QWORD *)(a2 + 8), v16 = v14 + v10, a1 = v16, v16 >= *(_QWORD *)a2) )
    {
      gsl::details::terminate((gsl::details *)a1);
      JUMPOUT(0x180049F8DLL);
    }
    v17 = (float)(1.0 - a5) * *(float *)(v15 + 8 * v16 + 4);
    v18 = (float)(a5 * *(float *)(v15 + 8LL * v10)) + (float)((float)(1.0 - a5) * *(float *)(v15 + 8 * v16));
    v19 = v10 * *(_DWORD *)(a2 + 24);
    v20 = v16 * *(_DWORD *)(a2 + 24);
    v21 = *(_DWORD *)(a2 + 40) * v16;
    v22 = v17 + (float)(a5 * *(float *)(v15 + 8LL * v10 + 4));
    *v12 = v18;
    v23 = (float *)(*(_QWORD *)(a2 + 16) + v19);
    v12[1] = v22;
    v24 = (float *)(*(_QWORD *)(a2 + 16) + v20);
    v25 = (float *)(*(_QWORD *)(a2 + 32) + v21);
    v26 = (float)(1.0 - a5) * *v24;
    v27 = (float)(1.0 - a5) * v24[1];
    LODWORD(v24) = *(_DWORD *)(a2 + 40) * v10;
    v28 = v26 + (float)(a5 * *v23);
    v29 = a5 * v23[1];
    *v9 = 1.0;
    *(v9 - 2) = v28;
    v30 = v27 + v29;
    v31 = (float *)(*(_QWORD *)(a2 + 32) + (int)v24);
    *(v9 - 1) = v30;
    v32 = (float)((float)(1.0 - a5) * *v25) + (float)(a5 * *v31);
    v33 = (float)((float)(1.0 - a5) * v25[1]) + (float)(a5 * v31[1]);
    v9[6] = v32;
    v9[7] = v33;
    ++v10;
    v9[8] = sqrtf_0((float)((float)(v28 - v32) * (float)(v28 - v32)) + (float)((float)(v30 - v33) * (float)(v30 - v33)));
    v12 = (float *)(v37 + 8);
    a1 = 2LL;
    v9[9] = v25[3];
    v9 += 16;
    v37 += 8;
  }
  while ( v10 - a4 < 2 );
  v41 = 0;
  v38[0] = v47;
  v38[1] = &v48;
  v38[3] = &v50;
  v40 = 2;
  v38[2] = 0x200000040LL;
  v39 = 64;
  v42 = 1065353216;
  v44 = *a9;
  v45 = *((_DWORD *)a9 + 2);
  v35 = *((_DWORD *)a9 + 3);
  LOBYTE(v43) = 1;
  v46 = v35;
  return TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v38, v34, a7);
}
