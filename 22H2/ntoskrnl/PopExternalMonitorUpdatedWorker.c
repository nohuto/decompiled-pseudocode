/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x1407A91F0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopEvaluateInputSuppressionAction @ 0x140994374 (PopEvaluateInputSuppressionAction.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

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
    if ( qword_140C6B0C8 )
    {
      LOBYTE(v5) = v4;
      qword_140C6B0C8(v5);
    }
    if ( PopPlatformAoAc )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v5);
  }
  while ( v4 != PopConsoleExternalDisplayConnected );
  PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
  return PopReleasePolicyLock(v7, v6, v8);
}
