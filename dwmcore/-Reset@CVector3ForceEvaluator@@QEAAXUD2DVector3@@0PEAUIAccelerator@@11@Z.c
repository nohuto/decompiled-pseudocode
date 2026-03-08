/*
 * XREFs of ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x180273B34
 * Callers:
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x180273850 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x180273700 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 */

char __fastcall CVector3ForceEvaluator::Reset(
        _BYTE *a1,
        float *a2,
        float *a3,
        struct IAccelerator *a4,
        struct IAccelerator *a5,
        struct IAccelerator *a6)
{
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  char result; // al
  int v21; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+34h] [rbp-2Ch]
  int v23; // [rsp+38h] [rbp-28h]

  v10 = 0.0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 40LL))(a4) )
    v11 = *a2 - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 24LL))(a4);
  else
    v11 = 0.0;
  v12 = *a3;
  v13 = *(_DWORD *)a3 & _xmm;
  v22 = LODWORD(v11) & _xmm;
  v14 = *a2;
  v23 = v13;
  v21 = 2;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)a1, v14, v12, a4, (const struct ForceThreshold *)&v21);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 40LL))(a5) )
    v15 = a2[1] - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 24LL))(a5);
  else
    v15 = 0.0;
  v16 = a3[1];
  v21 = 2;
  v22 = LODWORD(v15) & _xmm;
  v17 = a2[1];
  v23 = LODWORD(v16) & _xmm;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 68), v17, v16, a5, (const struct ForceThreshold *)&v21);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 40LL))(a6) )
    v10 = a2[2] - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 24LL))(a6);
  v18 = a3[2];
  v19 = a2[2];
  v23 = LODWORD(v18) & _xmm;
  v22 = LODWORD(v10) & _xmm;
  v21 = 2;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 136), v19, v18, a6, (const struct ForceThreshold *)&v21);
  result = -3;
  a1[64] &= ~2u;
  a1[132] &= ~2u;
  a1[200] &= ~2u;
  return result;
}
