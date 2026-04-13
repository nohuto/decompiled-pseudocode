/*
 * XREFs of ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18000B50C
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000C0C0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000ADE4 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000B7C8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::FeatureStateManager::SubscribeToUsageFlush(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *))
{
  int v6; // eax
  RTL_SRWLOCK *v7; // rbp

  *a2 = 0LL;
  if ( *(_BYTE *)this && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnDllShutdownInProgress;
    if ( wil::details::g_pfnDllShutdownInProgress )
      v6 = wil::details::g_pfnDllShutdownInProgress();
    if ( !v6 && wil::details::FeatureStateManager::EnsureStateData(this) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      if ( !*((_QWORD *)this + 30) )
      {
        v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
        if ( v7 )
        {
          *((_QWORD *)this + 30) = 0LL;
          AcquireSRWLockExclusive(v7);
          wil::details_abi::SubscriptionList::SubscribeUnderLock(
            (wil::details_abi::SubscriptionList *)&v7[25],
            (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)this + 30,
            (void (*)(void *))_lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
            this);
          ReleaseSRWLockExclusive(v7);
        }
      }
      wil::details_abi::SubscriptionList::SubscribeUnderLock(
        (wil::details::FeatureStateManager *)((char *)this + 168),
        a2,
        a3,
        0LL);
      if ( *a2 )
        *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*a2 | 0x80000000);
      if ( this != (wil::details::FeatureStateManager *)-32LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    }
  }
}
