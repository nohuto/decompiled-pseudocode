/*
 * XREFs of _lambda_2297c699848e7a7bff373177413c6db4_::_lambda_invoker_cdecl_ @ 0x1C00F06D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2297c699848e7a7bff373177413c6db4_::operator() @ 0x1C00F06EC (_lambda_2297c699848e7a7bff373177413c6db4_--operator().c)
 */

__int64 __fastcall lambda_2297c699848e7a7bff373177413c6db4_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_2297c699848e7a7bff373177413c6db4_::operator()(a1, a2, v2);
}
