float __fastcall CExpressionForce::Update(
        CExpressionForce *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  int v4; // eax
  float v7; // xmm2_4
  float v8; // xmm1_4
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = a4;
  if ( !*((_BYTE *)this + 112) )
  {
    v7 = *((float *)this + 30);
    LOBYTE(v4) = *((_DWORD *)this + 22) == 2;
    v8 = *((float *)this + 29);
    v10[0] = v4;
    v10[1] = 0;
    v10[2] = 0;
    CScalarForceEvaluator::Reset(
      (CExpressionForce *)((char *)this + 8),
      v8,
      v7,
      (CExpressionForce *)((char *)this - 16),
      (const struct ForceThreshold *)v10);
    *((_BYTE *)this + 112) = 1;
  }
  CScalarForceEvaluator::AdvanceToTime(
    (CExpressionForce *)((char *)this + 8),
    a2,
    (CExpressionForce *)((char *)this - 16));
  return *((float *)this + 6);
}
