/*
 * XREFs of _lambda_237953bbd44a78736f595b4714aaf9e4_::_lambda_invoker_cdecl_ @ 0x1800D7530
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0d9fadf3b0a1cd5c1af5e2319cce9b5e_::operator() @ 0x1800D7A10 (_lambda_0d9fadf3b0a1cd5c1af5e2319cce9b5e_--operator().c)
 */

__int64 __fastcall lambda_237953bbd44a78736f595b4714aaf9e4_::_lambda_invoker_cdecl_(HWND a1, _QWORD *a2)
{
  char v4; // al
  unsigned int v5; // r8d

  v4 = lambda_0d9fadf3b0a1cd5c1af5e2319cce9b5e_::operator()(a1, a1);
  v5 = 0;
  if ( v4 )
    *a2 = a1;
  else
    return 1;
  return v5;
}
