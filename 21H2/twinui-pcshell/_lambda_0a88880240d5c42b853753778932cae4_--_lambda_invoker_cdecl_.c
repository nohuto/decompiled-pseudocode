/*
 * XREFs of _lambda_0a88880240d5c42b853753778932cae4_::_lambda_invoker_cdecl_ @ 0x1800DA550
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b4c239c7973e05cc538f5b37e4c5171e_::operator() @ 0x1800DA624 (_lambda_b4c239c7973e05cc538f5b37e4c5171e_--operator().c)
 */

__int64 __fastcall lambda_0a88880240d5c42b853753778932cae4_::_lambda_invoker_cdecl_(HWND a1, _QWORD *a2)
{
  char v4; // al
  unsigned int v5; // r8d

  v4 = lambda_b4c239c7973e05cc538f5b37e4c5171e_::operator()(a1, a1);
  v5 = 0;
  if ( v4 )
    *a2 = a1;
  else
    return 1;
  return v5;
}
