void __fastcall ACPIWakeRestoreEnablesCompletion(__int64 a1, __int64 a2, int a3)
{
  ACPIDeviceCompleteGenericPhase(0LL, a3, 0LL, a2);
}
