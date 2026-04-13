/*
 * XREFs of _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x180019300
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000AF1C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000B260 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000B7C8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax

  if ( *Context )
  {
    v4 = (RTL_SRWLOCK *)(Context + 32);
    AcquireSRWLockExclusive((PSRWLOCK)Context + 4);
    Context[65] = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( !wil::details::g_processShutdownInProgress )
    {
      v5 = (int)wil::details::g_pfnDllShutdownInProgress;
      if ( wil::details::g_pfnDllShutdownInProgress )
        v5 = wil::details::g_pfnDllShutdownInProgress();
      if ( !v5 && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)Context) )
      {
        wil::details_abi::SubscriptionList::OnSignaled(
          (LPCRITICAL_SECTION)(*((_QWORD *)Context + 3) + 200LL),
          *((PSRWLOCK *)Context + 3));
        wil::details_abi::FeatureStateData::RecordUsage(*((PSRWLOCK *)Context + 3));
      }
    }
  }
}
