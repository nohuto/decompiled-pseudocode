/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_169e34f0547c812b04d058e5b6da2245_@@CAXXZ @ 0x1800C4580
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064ED0 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`SpatialInteractionDevices::SpatialInteractionTrace::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
