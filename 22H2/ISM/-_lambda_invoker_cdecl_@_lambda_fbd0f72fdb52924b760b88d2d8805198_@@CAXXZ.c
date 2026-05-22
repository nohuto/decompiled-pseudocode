/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_fbd0f72fdb52924b760b88d2d8805198_@@CAXXZ @ 0x18014E070
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064ED0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`HolographicDriverClientContinuousTrace::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
