/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x18005BE70
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180041FAC (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18005B700 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 * Callees:
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        void *Src,
        unsigned int a6,
        _QWORD *Size,
        char a8)
{
  bool v8; // zf
  int v9; // ebx
  _QWORD *v10; // rdi
  __int64 result; // rax
  float v13; // xmm6_4
  float v14; // xmm7_4
  __int64 v15; // r8
  __int64 v16; // r14
  int v17; // r12d
  __int64 v18; // r15
  __int64 v19; // r13
  unsigned int v20; // esi
  unsigned int v21; // ecx
  size_t v22; // r9
  __int64 v23; // r14
  float *v24; // rdi
  __int64 v25; // rbx
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  size_t v32; // rdi
  __int64 v33; // rcx
  const void *v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // [rsp+20h] [rbp-78h]
  const void *v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+A0h] [rbp+8h]
  size_t Sizea; // [rsp+D0h] [rbp+38h]
  const void *Sizeb; // [rsp+D0h] [rbp+38h]
  int v44; // [rsp+D8h] [rbp+40h]

  v8 = *(_DWORD *)(a1 + 20) == 0;
  v9 = a4;
  v10 = a3;
  *(_BYTE *)(a1 + 104) = a8;
  result = (__int64)Size;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 92) = *Size;
  if ( v8 )
  {
    *(_OWORD *)(a1 + 76) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 56), Src, 2LL * a6);
    v13 = *(float *)&FLOAT_1_0;
    result = *(unsigned int *)(a1 + 16);
    v14 = 1.0 / *(float *)(a1 + 92);
    v15 = a2;
    v16 = *(_QWORD *)(a1 + 48);
    v17 = 8 * result + 16;
    v18 = *(_QWORD *)(a1 + 32);
    v19 = *(_QWORD *)(a1 + 40);
    v20 = *(_DWORD *)(a2 + 12);
    v36 = v16;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 1.0) & _xmm) <= 0.000081380211 )
      v14 = *(float *)&FLOAT_1_0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)(a1 + 96)) - 1.0) & _xmm) > 0.000081380211 )
      v13 = 1.0 / *(float *)(a1 + 96);
    v21 = 0;
    v44 = 0;
    *(_OWORD *)(a1 + 76) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v20 )
    {
      v22 = (unsigned int)(8 * v9 + 16);
      Sizea = v22;
      v23 = v16 + 4;
      do
      {
        v24 = (float *)(*a3 + (int)(*((_DWORD *)v10 + 2) * v21));
        v25 = (int)(v21 * v17);
        memcpy_0((void *)(v25 + v18), (const void *)(*(_QWORD *)v15 + (int)(*(_DWORD *)(v15 + 8) * v21)), v22);
        result = (__int64)memcpy_0((void *)(v25 + v19), v24, Sizea);
        v23 += 8LL;
        v15 = a2;
        v26 = v14 * *v24;
        v21 = v44 + 1;
        v22 = Sizea;
        v27 = v13 * v24[1];
        v10 = a3;
        *(float *)(v23 - 12) = v26;
        v44 = v21;
        *(float *)(v23 - 8) = v27;
        v28 = fminf(*(float *)(a1 + 76), v26);
        v29 = *(float *)(a1 + 80);
        *(float *)(a1 + 76) = v28;
        v30 = *(float *)(a1 + 84);
        *(float *)(a1 + 80) = fminf(v29, *(float *)(v23 - 8));
        v31 = *(float *)(a1 + 88);
        *(float *)(a1 + 84) = fmaxf(v30, *(float *)(v23 - 12));
        *(float *)(a1 + 88) = fmaxf(v31, *(float *)(v23 - 8));
      }
      while ( v21 < v20 );
      v16 = v36;
      v9 = a4;
    }
    if ( v20 < *(_DWORD *)(a1 + 8) )
    {
      v32 = (unsigned int)(8 * v9 + 16);
      v33 = (int)(v17 * (v20 - 1));
      Sizeb = (const void *)(v33 + v19);
      v34 = (const void *)(v33 + v18);
      v37 = (const void *)(v33 + v18);
      v38 = v20 - 1;
      do
      {
        v35 = (int)(v20 * v17);
        memcpy_0((void *)(v35 + v18), v34, v32);
        memcpy_0((void *)(v35 + v19), Sizeb, v32);
        v34 = v37;
        result = v20++;
        *(_QWORD *)(v16 + 8 * result) = *(_QWORD *)(v16 + 8 * v38);
      }
      while ( v20 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
