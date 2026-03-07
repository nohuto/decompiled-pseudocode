__int64 __fastcall PopExternalMonitorUpdatedWorker(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  PopAcquirePolicyLock(a1);
  do
  {
    v4 = PopConsoleExternalDisplayConnected;
    PopReleasePolicyLock(v2, v1, v3);
    if ( qword_140C6AC58 )
    {
      LOBYTE(v5) = v4;
      qword_140C6AC58(v5);
    }
    if ( PopPlatformAoAc )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v5);
  }
  while ( v4 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock(v7, v6, v8);
}
