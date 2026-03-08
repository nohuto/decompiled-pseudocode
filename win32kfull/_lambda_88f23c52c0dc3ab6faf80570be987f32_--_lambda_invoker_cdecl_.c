/*
 * XREFs of _lambda_88f23c52c0dc3ab6faf80570be987f32_::_lambda_invoker_cdecl_ @ 0x1C00F0C70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_88f23c52c0dc3ab6faf80570be987f32_::operator() @ 0x1C00F0C8C (_lambda_88f23c52c0dc3ab6faf80570be987f32_--operator().c)
 */

__int64 __fastcall lambda_88f23c52c0dc3ab6faf80570be987f32_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)a2;
  LOBYTE(a2) = a1;
  return lambda_88f23c52c0dc3ab6faf80570be987f32_::operator()(a1, a2, v2);
}
