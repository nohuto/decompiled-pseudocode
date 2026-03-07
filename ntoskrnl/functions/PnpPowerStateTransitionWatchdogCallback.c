void __fastcall __noreturn PnpPowerStateTransitionWatchdogCallback(ULONG_PTR a1)
{
  PnpBugcheckPowerTimeout(a1);
}
