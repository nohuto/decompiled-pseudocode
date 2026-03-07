__int64 __fastcall PopResetIdleTime(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a1;
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage(a1, a2);
  return PopHandleSystemIdleReset(v2);
}
