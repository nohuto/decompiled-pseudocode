/*
 * XREFs of ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x1802734C0
 * Callers:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180273084 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Evaluate@CScalarForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180273400 (-Evaluate@CScalarForceEvaluator@@AEAA-AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator.c)
 */

__int64 __fastcall CScalarForceEvaluator::Integrate(__int64 a1, __int64 a2, float *a3, __int64 *a4, int a5, float a6)
{
  double v10; // xmm0_8
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  int v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  float *v18; // rax
  float *v19; // rax
  float *v20; // rax
  __int64 v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-58h]
  float v25[4]; // [rsp+40h] [rbp-40h] BYREF
  float v26; // [rsp+B0h] [rbp+30h] BYREF
  float v27; // [rsp+B4h] [rbp+34h]
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+48h] BYREF

  if ( (*(unsigned int (__fastcall **)(__int64 *))(*a4 + 48))(a4) && (*(_BYTE *)(a1 + 64) & 4) != 0 )
  {
    v10 = (*(double (__fastcall **)(__int64 *, float *))(*a4 + 16))(a4, a3);
    v11 = *(float *)&v10;
    v12 = (float)(*(float *)&v10 * a6) + a3[2];
    *(float *)(a2 + 4) = (float)(v12 * a6) + a3[1];
  }
  else
  {
    v13 = a3[2];
    v14 = a5;
    v15 = (*(float (__fastcall **)(__int64 *, float *))(*a4 + 16))(a4, a3);
    v16 = a6;
    v26 = v13;
    v27 = v15;
    v17 = a6 * 0.5;
    LODWORD(v22) = v14;
    v18 = CScalarForceEvaluator::Evaluate(a1, (float *)&v28, a3, &v26, a4, v22, a6 * 0.5);
    LODWORD(v23) = v14;
    v29 = *(_QWORD *)v18;
    v19 = CScalarForceEvaluator::Evaluate(a1, (float *)&v28, a3, (float *)&v29, a4, v23, v17);
    LODWORD(v24) = v14;
    v28 = *(_QWORD *)v19;
    v20 = CScalarForceEvaluator::Evaluate(a1, v25, a3, (float *)&v28, a4, v24, v16);
    v11 = v20[1];
    v12 = (float)((float)((float)((float)((float)((float)(*((float *)&v28 + 1) + *((float *)&v29 + 1))
                                                + (float)(*((float *)&v28 + 1) + *((float *)&v29 + 1)))
                                        + v27)
                                + v11)
                        * 0.16666667)
                * v16)
        + a3[2];
    *(float *)(a2 + 4) = (float)((float)((float)((float)((float)((float)(*(float *)&v28 + *(float *)&v29)
                                                               + (float)(*(float *)&v28 + *(float *)&v29))
                                                       + v26)
                                               + *v20)
                                       * 0.16666667)
                               * v16)
                       + a3[1];
  }
  *(float *)a2 = v11;
  *(float *)(a2 + 8) = v12;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 60);
  return a2;
}
