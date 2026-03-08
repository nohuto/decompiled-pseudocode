/*
 * XREFs of ?FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV?$StridedSpan@UUVxN@CCpuClipAntialiasSink@@@@_K@Z @ 0x18007D530
 * Callers:
 *     ?EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBatchCommand@@_N@Z @ 0x18007D038 (-EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBa.c)
 * Callees:
 *     ?ComputeRelativeOutlinePosition@Bounds@CCpuClipAntialiasSink@@QEBAMM@Z @ 0x18007D6F8 (-ComputeRelativeOutlinePosition@Bounds@CCpuClipAntialiasSink@@QEBAMM@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

char *__fastcall CCpuClipAntialiasDrawListEntry::FillVertexUVs(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned int v4; // edi
  unsigned __int64 *v7; // rax
  unsigned __int64 v9; // r14
  float v10; // xmm6_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm8_4
  __int64 v14; // rdx
  int v15; // ebx
  unsigned int *v16; // r13
  unsigned int v17; // ebp
  _DWORD *v18; // r12
  __int64 v19; // r15
  int v20; // r15d
  size_t v21; // r14
  float v22; // xmm0_4
  float v23; // xmm0_4
  unsigned int *v24; // rbp
  _DWORD *v25; // r15
  char *result; // rax
  size_t v27; // rbx
  __int64 v28; // r14
  unsigned int v29; // ecx
  int v30; // edx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r11d
  __int64 v34; // r10
  __int64 v35; // rax
  float v36; // xmm3_4
  float v37; // xmm1_4
  int v38; // r8d
  unsigned int v39; // edx
  int v40; // ecx
  __int64 v41; // r8
  unsigned int v42; // ebp
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // rax
  float v46; // xmm3_4
  float v47; // xmm1_4
  __int64 v48; // [rsp+20h] [rbp-78h]
  unsigned __int64 v49; // [rsp+28h] [rbp-70h]
  float Y; // [rsp+A0h] [rbp+8h] BYREF
  char *v51; // [rsp+B8h] [rbp+20h]

  v51 = a4;
  v4 = 0;
  v7 = *(unsigned __int64 **)(a1 + 104);
  v9 = 0LL;
  if ( v7 )
  {
    v9 = *v7;
    v49 = *v7;
    v10 = CCpuClipAntialiasSink::Bounds::ComputeRelativeOutlinePosition(
            (CCpuClipAntialiasSink::Bounds *)(a1 + 88),
            *(float *)(a2 + 4));
    v11 = CCpuClipAntialiasSink::Bounds::ComputeRelativeOutlinePosition(
            (CCpuClipAntialiasSink::Bounds *)(a1 + 88),
            *(float *)(a2 + 8));
    v12 = *(_QWORD *)(a1 + 104);
    v13 = v11;
    if ( v12 )
    {
      v14 = *(_QWORD *)(v12 + 16);
      v15 = 8 * *(_DWORD *)v12;
    }
    else
    {
      v14 = 0LL;
      v15 = 0;
    }
    v16 = (unsigned int *)(a3 + 12);
    v17 = 0;
    v18 = (_DWORD *)(a3 + 8);
    v19 = v14 + 2 * v15 * (unsigned __int16)(int)v10;
    v48 = v19;
    if ( *(_DWORD *)(a3 + 12) )
    {
      v20 = 0;
      v21 = 8 * v9;
      do
      {
        memcpy_0((void *)(*(_QWORD *)a3 + (int)(*v18 * v17++)), (const void *)(v48 + v20), v21);
        v20 += v15;
      }
      while ( v17 < *v16 );
      v9 = v49;
      v4 = 0;
      v19 = v48;
    }
    v22 = modff(v10, &Y);
    if ( v22 > 0.000081380211 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = v19 + v30;
        v32 = v19 + v30 + 2 * v15;
        v33 = 0;
        v34 = *(_QWORD *)a3 + (int)(*v18 * v29);
        if ( v9 )
        {
          v35 = 0LL;
          v36 = 1.0 - v22;
          do
          {
            ++v33;
            v37 = (float)(v36 * *(float *)(v31 + 8 * v35 + 4)) + (float)(v22 * *(float *)(v32 + 8 * v35 + 4));
            *(float *)(v34 + 8 * v35) = (float)(v36 * *(float *)(v31 + 8 * v35))
                                      + (float)(v22 * *(float *)(v32 + 8 * v35));
            *(float *)(v34 + 8 * v35 + 4) = v37;
            v35 = v33;
          }
          while ( v33 < v9 );
        }
        ++v29;
        v30 += v15;
      }
      while ( v29 < 2 );
      v16 = (unsigned int *)(a3 + 12);
    }
    v23 = modff(v13, &Y);
    v24 = v16;
    v25 = (_DWORD *)(a3 + 8);
    if ( v23 > 0.000081380211 )
    {
      v38 = *v16 - 4;
      v39 = v38 + 2;
      if ( v38 + 2 < *v16 )
      {
        v40 = v38 * v15;
        do
        {
          v41 = v48 + v40;
          v42 = 0;
          v43 = v48 + 2 * v15 + v40;
          v44 = *(_QWORD *)a3 + (int)(*v18 * v39);
          if ( v9 )
          {
            v45 = 0LL;
            v46 = 1.0 - v23;
            do
            {
              ++v42;
              v47 = (float)(v46 * *(float *)(v41 + 8 * v45 + 4)) + (float)(v23 * *(float *)(v43 + 8 * v45 + 4));
              *(float *)(v44 + 8 * v45) = (float)(v23 * *(float *)(v43 + 8 * v45))
                                        + (float)(v46 * *(float *)(v41 + 8 * v45));
              *(float *)(v44 + 8 * v45 + 4) = v47;
              v45 = v42;
            }
            while ( v42 < v9 );
          }
          v40 += v15;
          ++v39;
        }
        while ( v39 < *v16 );
        v24 = v16;
      }
    }
  }
  else
  {
    v24 = (unsigned int *)(a3 + 12);
    v25 = (_DWORD *)(a3 + 8);
  }
  result = v51;
  if ( v9 < (unsigned __int64)v51 )
  {
    result = &v51[-v9];
    if ( *v24 )
    {
      v27 = 8LL * (_QWORD)result;
      v28 = 8 * v9;
      do
        result = (char *)memset_0((void *)(*(_QWORD *)a3 + v28 + (int)(*v25 * v4++)), 0, v27);
      while ( v4 < *v24 );
    }
  }
  return result;
}
