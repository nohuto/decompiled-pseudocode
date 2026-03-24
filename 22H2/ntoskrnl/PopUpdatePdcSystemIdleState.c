/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1408F1268
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1408F0E44 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     KeCancelTimer @ 0x14025FAA0 (KeCancelTimer.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406F3F38 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140772124 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1407D369C (PopSetExecutionRequiredTimer.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  PopAcquirePowerRequestPushLock(1);
  if ( BYTE3(PopExecutionRequiredContext) != a1 )
  {
    BYTE3(PopExecutionRequiredContext) = a1;
    if ( a1 )
    {
      *((_QWORD *)&PopExecutionRequiredContext + 1) = MEMORY[0xFFFFF78000000008];
      PopSetExecutionRequiredTimer();
    }
    else
    {
      *((_QWORD *)&PopExecutionRequiredContext + 1) = 0LL;
      KeCancelTimer(&PopExecutionRequiredTimer);
    }
    PopHandleExecutionRequiredEnablementUpdate(v2);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  result = 3221225474LL;
  if ( qword_140C543F0 )
  {
    LOBYTE(v3) = a1;
    return ((__int64 (__fastcall *)(__int64))qword_140C543F0)(v3);
  }
  return result;
}
