float __fastcall CExpressionForce::Accelerate(CExpressionForce *this, struct IntegrationState *a2, float a3)
{
  wchar_t *v3; // r8
  struct CExpressionValueStack *v4; // rdx
  MatrixSubchannelMaskInfo **v5; // rcx
  float v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (wchar_t *)*((_QWORD *)this + 15);
  v4 = (struct CExpressionValueStack *)*((_QWORD *)this + 14);
  v5 = (MatrixSubchannelMaskInfo **)*((_QWORD *)this + 12);
  v7 = 0.0;
  CConditionalExpression::GetValue(v5, v4, v3, &v7);
  return v7;
}
