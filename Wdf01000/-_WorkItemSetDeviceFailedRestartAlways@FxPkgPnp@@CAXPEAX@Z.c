void __fastcall FxPkgPnp::_WorkItemSetDeviceFailedRestartAlways(FxPkgPnp *Parameter)
{
  FxPkgPnp::SetDeviceFailedAttemptRestart(Parameter, 1u);
}
