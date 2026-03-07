__int64 __fastcall FxPkgPnp::_SleepStudyWnfCallback(
        _MX_WNF_SUBSCRIPTION_CONTEXT *SubscriptionContext,
        FxPkgPnp *CallbackContext)
{
  FxPkgPnp::SleepStudyEvaluateDripsConstraint(CallbackContext, 0);
  return 0LL;
}
