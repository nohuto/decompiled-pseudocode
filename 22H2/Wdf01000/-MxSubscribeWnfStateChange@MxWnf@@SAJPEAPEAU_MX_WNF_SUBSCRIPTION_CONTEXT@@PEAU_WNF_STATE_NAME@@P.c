/*
 * XREFs of ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1C0091D80
 * Callers:
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C00854C0 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxWnf::MxSubscribeWnfStateChange(
        _MX_WNF_SUBSCRIPTION_CONTEXT **SubscriptionContext,
        _WNF_STATE_NAME *WnfStateName,
        int (__fastcall *CallbackContext)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *),
        void *a4)
{
  _MX_WNF_SUBSCRIPTION_CONTEXT *PoolWithTag; // rax
  _MX_WNF_SUBSCRIPTION_CONTEXT *v8; // rbx
  int v10; // edi

  PoolWithTag = (_MX_WNF_SUBSCRIPTION_CONTEXT *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x20uLL, 0x53535554u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag->Handle = 0LL;
  PoolWithTag->WnfStateName = 0LL;
  PoolWithTag->CallbackContext = a4;
  PoolWithTag->Callback = (int (__fastcall *)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *))FxPkgPnp::_SleepStudyWnfCallback;
  PoolWithTag->WnfStateName = *WnfStateName;
  *SubscriptionContext = PoolWithTag;
  v10 = ExSubscribeWnfStateChange(PoolWithTag, WnfStateName, 1LL);
  if ( v10 < 0 )
  {
    *SubscriptionContext = 0LL;
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v10;
}
