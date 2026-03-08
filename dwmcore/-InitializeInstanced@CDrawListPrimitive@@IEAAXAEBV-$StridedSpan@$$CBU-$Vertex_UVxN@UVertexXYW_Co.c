/*
 * XREFs of ?InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@_NW4Enum@ParticleSortMode@@@Z @ 0x1801FEAC8
 * Callers:
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801FE9E0 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDrawListPrimitive::InitializeInstanced(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // r8
  __int64 v10; // rbx
  unsigned int v11; // r8d
  __int64 result; // rax
  _QWORD *v13; // r11
  __int64 v14; // r9
  int v15; // r10d
  int v16; // ebp
  _QWORD *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // rdi
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rax

  v7 = 0;
  v8 = *(_QWORD *)a4;
  *(_DWORD *)(a1 + 100) = a7;
  v10 = a1;
  *(_BYTE *)(a1 + 72) = 2;
  *(_DWORD *)(a1 + 92) = 1065353216;
  *(_DWORD *)(a1 + 96) = 1065353216;
  *(_BYTE *)(a1 + 104) = 0;
  if ( v8 >= 0x7FFFFFFFFFFFFFFFLL
    || (memcpy_0(*(void **)(a1 + 56), *(const void **)(a4 + 8), 2 * v8),
        a1 = 0x555555555555555LL,
        *(_QWORD *)a5 >= 0x555555555555555uLL) )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1801FEC6ELL);
  }
  memcpy_0(*(void **)(v10 + 64), *(const void **)(a5 + 8), 48LL * *(_QWORD *)a5);
  v11 = *((_DWORD *)a2 + 3);
  result = *(unsigned int *)(v10 + 16);
  v13 = *(_QWORD **)(v10 + 48);
  v14 = *(_QWORD *)(v10 + 32);
  v15 = 8 * result + 16;
  *(_OWORD *)(v10 + 76) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( v11 )
  {
    v16 = 0;
    v17 = v13;
    do
    {
      v18 = *a2;
      v19 = *((_DWORD *)a2 + 2) * v7++;
      v20 = v19;
      result = v16;
      v16 += v15;
      *v17++ = *(_QWORD *)(v20 + *a2);
      *(_OWORD *)(result + v14) = *(_OWORD *)(v20 + v18);
      *(_OWORD *)(result + v14 + 16) = *(_OWORD *)(v20 + v18 + 16);
      v21 = *(float *)(v10 + 80);
      *(float *)(v10 + 76) = fminf(*(float *)(v10 + 76), *(float *)(v20 + v18));
      v22 = *(float *)(v10 + 84);
      *(float *)(v10 + 80) = fminf(v21, *(float *)(v20 + v18 + 4));
      v23 = *(float *)(v10 + 88);
      *(float *)(v10 + 84) = fmaxf(v22, *(float *)(v20 + v18));
      *(float *)(v10 + 88) = fmaxf(v23, *(float *)(v20 + v18 + 4));
    }
    while ( v7 < v11 );
  }
  if ( v11 < *(_DWORD *)(v10 + 8) )
  {
    v24 = v11 - 1;
    v25 = v11 * v15;
    v26 = v15 * (int)v24;
    do
    {
      v27 = v11++;
      v13[v27] = v13[v24];
      result = v25;
      v25 += v15;
      *(_OWORD *)(result + v14) = *(_OWORD *)(v26 + v14);
      *(_OWORD *)(result + v14 + 16) = *(_OWORD *)(v26 + v14 + 16);
    }
    while ( v11 < *(_DWORD *)(v10 + 8) );
  }
  return result;
}
