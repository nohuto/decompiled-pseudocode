__int64 PnpPowerStateTransitionWatchdogPushRecord()
{
  return PoPushPowerStateTransitionRecordWithCallback(
           PsInitialSystemProcess,
           KeGetCurrentThread(),
           0LL,
           (__int64)PnpPowerStateTransitionWatchdogCallback);
}
