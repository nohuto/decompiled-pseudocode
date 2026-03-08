/*
 * XREFs of _lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::_lambda_invoker_cdecl_ @ 0x1C00F0670
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator() @ 0x1C00F068C (_lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_--operator().c)
 */

__int64 __fastcall lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator()(a1, a2, v2);
}
