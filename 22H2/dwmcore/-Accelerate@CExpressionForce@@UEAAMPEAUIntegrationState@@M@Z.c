/*
 * XREFs of ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x180214C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BD8E4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 */

float __fastcall CExpressionForce::Accelerate(CExpressionForce *this, struct IntegrationState *a2, float a3)
{
  wchar_t *v3; // r8
  struct CExpressionValueStack *v4; // rdx
  MatrixSubchannelMaskInfo **v5; // rcx
  float v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (wchar_t *)*((_QWORD *)this + 16);
  v4 = (struct CExpressionValueStack *)*((_QWORD *)this + 15);
  v5 = (MatrixSubchannelMaskInfo **)*((_QWORD *)this + 13);
  v7 = 0.0;
  CConditionalExpression::GetValue(v5, v4, v3, &v7);
  return v7;
}
