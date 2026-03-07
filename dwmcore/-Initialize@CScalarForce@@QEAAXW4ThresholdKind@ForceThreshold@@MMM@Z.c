void __fastcall CScalarForce::Initialize(__int64 a1, int a2, float a3, float a4, int a5)
{
  float v6; // xmm6_4
  struct IAccelerator *v8; // r9
  __int64 v9; // [rsp+30h] [rbp-38h]

  v6 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 40LL))(*(_QWORD *)(a1 + 104)) )
    a3 = a3 - (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
  v8 = *(struct IAccelerator **)(a1 + 104);
  HIDWORD(v9) = LODWORD(a3) & _xmm;
  LODWORD(v9) = a2;
  *(_QWORD *)(a1 + 84) = v9;
  *(_DWORD *)(a1 + 96) = a5;
  *(_DWORD *)(a1 + 92) = LODWORD(a4) & _xmm;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 16), v6, a4, v8, (const struct ForceThreshold *)(a1 + 84));
}
