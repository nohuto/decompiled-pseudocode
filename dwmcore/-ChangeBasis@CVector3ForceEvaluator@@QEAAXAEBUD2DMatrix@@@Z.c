/*
 * XREFs of ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x180273A34
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180238A9C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     _lambda_c2661e01401ae061a9dc9ee442c48f39_::operator() @ 0x180273934 (_lambda_c2661e01401ae061a9dc9ee442c48f39_--operator().c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180279A80 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

void __fastcall CVector3ForceEvaluator::ChangeBasis(CVector3ForceEvaluator *this, const struct D2DMatrix *a2)
{
  _OWORD *v2; // rdi
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_OWORD *)((char *)this + 204);
  D2DMatrixInverse((CVector3ForceEvaluator *)((char *)this + 204), 0LL, (CVector3ForceEvaluator *)((char *)this + 204));
  v5[0] = (__int64)this;
  v5[1] = (__int64)a2;
  lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(v5, (int *)this + 4, (int *)this + 21, (int *)this + 38);
  lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(v5, (int *)this + 9, (int *)this + 26, (int *)this + 43);
  lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(v5, (int *)this + 5, (int *)this + 22, (int *)this + 39);
  lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(v5, (int *)this + 10, (int *)this + 27, (int *)this + 44);
  lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(v5, (int *)this + 3, (int *)this + 20, (int *)this + 37);
  lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(v5, (int *)this + 8, (int *)this + 25, (int *)this + 42);
  *v2 = *(_OWORD *)a2;
  v2[1] = *((_OWORD *)a2 + 1);
  v2[2] = *((_OWORD *)a2 + 2);
  v2[3] = *((_OWORD *)a2 + 3);
}
