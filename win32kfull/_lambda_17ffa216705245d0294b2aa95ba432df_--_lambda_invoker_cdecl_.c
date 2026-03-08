/*
 * XREFs of _lambda_17ffa216705245d0294b2aa95ba432df_::_lambda_invoker_cdecl_ @ 0x1C00F0D30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_17ffa216705245d0294b2aa95ba432df_::operator() @ 0x1C00F0D4C (_lambda_17ffa216705245d0294b2aa95ba432df_--operator().c)
 */

__int64 __fastcall lambda_17ffa216705245d0294b2aa95ba432df_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_17ffa216705245d0294b2aa95ba432df_::operator()(a1, a2, v2);
}
