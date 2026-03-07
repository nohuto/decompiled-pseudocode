__int64 __fastcall EmitCpuClipAntialiasTemplateGeometry(
        struct CD3DBatchExecutionContext *a1,
        const struct CCpuClipAntialiasBatchCommand *a2,
        char a3)
{
  float *v3; // r12
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned int v8; // r13d
  int appended; // eax
  unsigned int v10; // ecx
  int v11; // r14d
  __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  float v15; // xmm0_4
  __int64 v16; // rdi
  __int64 v17; // rdx
  gsl::details *v18; // rcx
  __int64 v19; // r8
  float v20; // xmm0_4
  unsigned int v21; // r8d
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // r13
  int v27; // r8d
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+5Ch] [rbp-A4h]
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-88h]
  unsigned __int64 v39; // [rsp+80h] [rbp-80h]
  unsigned __int64 v40; // [rsp+88h] [rbp-78h]
  unsigned __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B4h] [rbp-4Ch]
  unsigned int v47; // [rsp+C0h] [rbp-40h]
  float Y; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v49; // [rsp+C8h] [rbp-38h]
  unsigned int v50[36]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v51; // [rsp+170h] [rbp+70h]
  int v52; // [rsp+178h] [rbp+78h]
  int v54; // [rsp+188h] [rbp+88h]

  v52 = (int)a2;
  v3 = (float *)((char *)a2 + 100);
  v4 = *((unsigned int *)a2 + 24);
  v49 = *((_QWORD *)a2 + 1);
  v54 = v4;
  v6 = *(_QWORD *)(v49 + 80);
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(v6, v4, (__int64)a2 + 100, (__int64)&v37);
  CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform(*(_QWORD *)(v6 + 8 * v4 + 40), v50, (char *)a2 + 16);
  v8 = v37;
  v34 = 0LL;
  appended = CD3DBatchExecutionContext::AppendGeometry((__int64)a1, v37, 0, (unsigned int *)&v43, &v34, 0LL);
  v47 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, appended, 0x10Fu, 0LL);
  }
  else
  {
    v11 = v8;
    v12 = v8;
    v51 = 0;
    v13 = (*((_BYTE *)a1 + 72) != 0 ? 48 : 16) + 8 * *((_DWORD *)a1 + 19);
    v15 = modff(v3[1], &Y);
    v16 = v34;
    if ( v15 > 0.000081380211 )
    {
      v31 = v34;
      v32 = v13;
      v33 = 2;
      lambda_75bd1881e8aaf2903e1375b049ea539d_::operator()(v14, (__int64)&v37, 0, 2u, v15, v29, (__int64)v50, v30, &v31);
      v8 = v37;
      v12 -= 2LL;
      v51 = 2;
    }
    v20 = modff(v3[2], &Y);
    if ( v20 > 0.000081380211 )
    {
      v32 = v13;
      v33 = 2;
      v31 = v16 + (int)(v13 * (v12 + v51 - 2));
      lambda_75bd1881e8aaf2903e1375b049ea539d_::operator()(
        v31,
        (__int64)&v37,
        v8 - 4,
        v8 - 2,
        v20,
        v29,
        (__int64)v50,
        v30,
        &v31);
      v12 -= 2LL;
    }
    if ( v12 )
    {
      v21 = v42;
      v22 = v41 + (int)(v51 * v42);
      if ( v51 >= v37 )
      {
        gsl::details::terminate(v18);
        JUMPOUT(0x18007D339LL);
      }
      v23 = v38;
      LODWORD(v42) = 0;
      HIDWORD(v42) = (_DWORD)FLOAT_1_0;
      v38 = v39 + (int)(v51 * v40);
      v37 = v23 + 8LL * v51;
      v39 = __PAIR64__(v12, v40);
      v40 = v22;
      v41 = __PAIR64__(v12, v21);
      LOBYTE(v43) = 1;
      v44 = v16 + (int)(v51 * v13);
      v45 = v13;
      v46 = v12;
      if ( (_DWORD)v12 )
        TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>((__int64)&v37, v51, v50);
      else
        TransferAliasedVertices(&v37);
    }
    v34 = v16 + 12;
    v24 = v16 + 48;
    v35 = v13;
    v25 = *((_BYTE *)a1 + 72) == 0;
    v36 = v11;
    v32 = v13;
    v33 = v11;
    if ( v25 )
      v24 = v16 + 16;
    v26 = v49;
    v31 = v24;
    LOBYTE(v17) = v54 != 1;
    CCpuClipAntialiasDrawListEntry::FillVertexColor(v49, v17, v19, &v34);
    CCpuClipAntialiasDrawListEntry::FillVertexUVs(v26, v3, &v31, *((unsigned int *)a1 + 19));
    if ( *((_BYTE *)a1 + 72) )
    {
      LOBYTE(v27) = a3;
      v31 = v16;
      v32 = v13;
      v33 = v11;
      CCpuClipAntialiasDrawListEntry::FillLightingData(v26, (_DWORD)v3, v27, v52 + 112, (__int64)&v31);
    }
  }
  return v47;
}
