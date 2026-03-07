__int64 __fastcall CVector3ForceEvaluator::AdvanceToTime(
        __int64 a1,
        __int64 a2,
        float a3,
        struct IAccelerator *a4,
        struct IAccelerator *a5,
        struct IAccelerator *a6)
{
  float v8; // xmm0_4
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  *(float *)a2 = CScalarForceEvaluator::AdvanceToTime((CScalarForceEvaluator *)a1, a3, a4);
  *(float *)(a2 + 4) = CScalarForceEvaluator::AdvanceToTime((CScalarForceEvaluator *)(a1 + 68), a3, a5);
  v8 = CScalarForceEvaluator::AdvanceToTime((CScalarForceEvaluator *)(a1 + 136), a3, a6);
  result = a2;
  *(float *)(a2 + 8) = v8;
  return result;
}
