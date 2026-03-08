/*
 * XREFs of ?Evaluate@CScalarForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180273400
 * Callers:
 *     ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x1802734C0 (-Integrate@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

float *__fastcall CScalarForceEvaluator::Evaluate(
        __int64 a1,
        float *a2,
        float *a3,
        float *a4,
        __int64 *a5,
        __int64 a6,
        float a7)
{
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  int v12; // xmm0_4
  __int64 v13; // rdx
  _DWORD v15[6]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a7 * a4[1];
  v9 = (float)(a7 * *a4) + a3[1];
  v15[4] = *(_DWORD *)(a1 + 56);
  v10 = v8 + a3[2];
  *(float *)&v15[1] = v9;
  v11 = *a3;
  *(float *)&v15[2] = v10;
  *(float *)v15 = v11;
  v12 = *(_DWORD *)(a1 + 60);
  *a2 = v10;
  v13 = *a5;
  v15[3] = v12;
  a2[1] = (*(float (__fastcall **)(__int64 *, _DWORD *))(v13 + 16))(a5, v15);
  return a2;
}
