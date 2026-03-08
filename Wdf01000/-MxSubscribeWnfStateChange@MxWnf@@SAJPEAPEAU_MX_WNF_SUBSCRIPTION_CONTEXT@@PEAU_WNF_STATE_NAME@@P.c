/*
 * XREFs of ?MxSubscribeWnfStateChange@MxWnf@@SAJPEAPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAU_WNF_STATE_NAME@@P6AJPEAU2@PEAX@Z33@Z @ 0x1C008A398
 * Callers:
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C00793A8 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxWnf::MxSubscribeWnfStateChange(
        _MX_WNF_SUBSCRIPTION_CONTEXT **SubscriptionContext,
        _WNF_STATE_NAME *WnfStateName,
        int (__fastcall *CallbackContext)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *),
        void *a4)
{
  _MX_WNF_SUBSCRIPTION_CONTEXT *Pool2; // rax
  _MX_WNF_SUBSCRIPTION_CONTEXT *v8; // rbx
  int v10; // edi

  Pool2 = (_MX_WNF_SUBSCRIPTION_CONTEXT *)ExAllocatePool2(64LL, 32LL, 1397970260LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  Pool2->Callback = (int (__fastcall *)(_MX_WNF_SUBSCRIPTION_CONTEXT *, void *))FxPkgPnp::_SleepStudyWnfCallback;
  Pool2->WnfStateName = *WnfStateName;
  Pool2->CallbackContext = a4;
  *SubscriptionContext = Pool2;
  v10 = ExSubscribeWnfStateChange(Pool2, WnfStateName, 1LL);
  if ( v10 < 0 )
  {
    *SubscriptionContext = 0LL;
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v10;
}
