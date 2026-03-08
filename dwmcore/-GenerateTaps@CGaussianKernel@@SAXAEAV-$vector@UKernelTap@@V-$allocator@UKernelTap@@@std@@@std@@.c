/*
 * XREFs of ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800D1480
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x1800D1AE4 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z @ 0x1800D1650 (-_Reallocate_exactly@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z.c)
 *     ceilf_0 @ 0x1801176EC (ceilf_0.c)
 *     expf_0 @ 0x180117710 (expf_0.c)
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x18027F2AC (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAP.c)
 *     ??$emplace_back@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA?A_T$$QEAMAEAM1@Z @ 0x18027F58C (--$emplace_back@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAA-A_T$$QE.c)
 */

unsigned __int64 __fastcall CGaussianKernel::GenerateTaps(unsigned __int64 *a1, char a2, float a3, float a4)
{
  float v6; // xmm1_4
  float v7; // xmm0_4
  unsigned __int64 result; // rax
  unsigned int v9; // r15d
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  float v12; // xmm7_4
  int v13; // esi
  float v14; // xmm8_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  unsigned __int64 v20; // rdx
  float v21; // xmm7_4
  float v22; // xmm0_4
  int v23; // [rsp+C0h] [rbp+40h] BYREF
  float v24; // [rsp+D0h] [rbp+50h] BYREF
  float v25; // [rsp+D8h] [rbp+58h] BYREF

  v6 = fmaxf(1.0, ceilf_0(a3 * a4));
  v7 = ceilf_0((float)(int)v6 * 0.5);
  result = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2);
  v9 = (int)v7;
  v10 = (unsigned int)(int)v7;
  if ( v10 > result )
    result = std::vector<KernelTap>::_Reallocate_exactly(a1, (unsigned int)v10);
  v11 = 0LL;
  v12 = 0.0;
  v13 = 0;
  if ( v9 )
  {
    v14 = (float)(a3 * a3) + (float)(a3 * a3);
    while ( 1 )
    {
      v15 = (float)v13 + (float)v13;
      v16 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 * v15) ^ _xmm) / v14);
      v17 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v15 + 1.0) * (float)(v15 + 1.0)) ^ _xmm) / v14);
      if ( !v13 )
        v16 = v16 * 0.5;
      v23 = 0;
      v18 = v17 + v16;
      v24 = v17 + v16;
      v19 = (float)(v17 / (float)(v17 + v16)) + v15;
      v25 = v19;
      if ( a2 )
        break;
      v20 = a1[1];
      if ( v20 == a1[2] )
      {
        std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(
          (_DWORD)a1,
          v20,
          (unsigned int)&v25,
          (unsigned int)&v23,
          (__int64)&v24);
LABEL_16:
        v18 = v24;
        goto LABEL_10;
      }
      *(float *)v20 = v19;
      a1[1] = v20 + 12;
      *(float *)(v20 + 8) = v18;
      *(_DWORD *)(v20 + 4) = 0;
LABEL_10:
      ++v13;
      v12 = v12 + v18;
      if ( v13 >= v9 )
      {
        result = *a1;
        v21 = v12 + v12;
        do
        {
          v22 = *(float *)(v11 + result + 8);
          v11 += 12LL;
          *(float *)(v11 + result - 4) = v22 / v21;
          --v10;
        }
        while ( v10 );
        return result;
      }
    }
    std::vector<KernelTap>::emplace_back<float,float &,float &>(a1, &v23, &v25, &v24);
    goto LABEL_16;
  }
  return result;
}
