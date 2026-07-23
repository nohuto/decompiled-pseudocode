/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1408F1378
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1408F0F54 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140772624 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1407D38EC (PopSetExecutionRequiredTimer.c)
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
  if ( qword_140C54430 )
  {
    LOBYTE(v3) = a1;
    return ((__int64 (__fastcall *)(__int64))qword_140C54430)(v3);
  }
  return result;
}
