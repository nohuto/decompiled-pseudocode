/*
 * XREFs of _lambda_0336b3a089846025bc79125dee2480fe_::_lambda_invoker_cdecl_ @ 0x1C00F0D90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0336b3a089846025bc79125dee2480fe_::operator() @ 0x1C00F0DAC (_lambda_0336b3a089846025bc79125dee2480fe_--operator().c)
 */

__int64 __fastcall lambda_0336b3a089846025bc79125dee2480fe_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_0336b3a089846025bc79125dee2480fe_::operator()(a1, a2, v2);
}
