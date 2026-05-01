/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CAXXZ @ 0x1802130E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1801A94D0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`FullScreenPositionerLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ViewManagerInteropTraceLogging::`scalar deleting destructor'((ViewManagerInteropTraceLogging *)Context, 0);
  }
}
