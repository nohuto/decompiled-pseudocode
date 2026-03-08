/*
 * XREFs of _lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_ @ 0x1C0219920
 * Callers:
 *     <none>
 * Callees:
 *     IsStartedIndirectDisplayDevice @ 0x1C0219948 (IsStartedIndirectDisplayDevice.c)
 */

__int64 __fastcall lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_(__int64 a1, _DWORD *a2)
{
  if ( (unsigned __int8)IsStartedIndirectDisplayDevice() )
    ++*a2;
  return 0LL;
}
