/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d51448ba32f8ef42e59400edd4566183_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180193D90
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1801951B4 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 */

void __fastcall _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    BYTE1(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)Context);
  }
}
