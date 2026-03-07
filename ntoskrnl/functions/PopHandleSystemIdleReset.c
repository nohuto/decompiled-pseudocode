__int64 __fastcall PopHandleSystemIdleReset(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  if ( !PopPlatformAoAc )
    result = Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage(a1, a2);
  if ( PopIdleScanInterval )
  {
    if ( v2 == 2 )
    {
      _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
      PopGetPolicyWorker(128);
      return PopCheckForWork();
    }
  }
  return result;
}
