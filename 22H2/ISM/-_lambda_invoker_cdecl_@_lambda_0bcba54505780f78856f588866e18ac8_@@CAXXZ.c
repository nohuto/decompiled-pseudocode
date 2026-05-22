/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0bcba54505780f78856f588866e18ac8_@@CAXXZ @ 0x1800CC930
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064ED0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
