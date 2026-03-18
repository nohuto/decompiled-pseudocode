/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x1407A750C
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1407A7420 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14085628C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  PopAcquirePowerRequestPushLock(1);
  v2 = 0;
  if ( byte_140C3DAD4 && byte_140C3F693 != a1 )
  {
    byte_140C3F693 = a1;
    if ( a1 )
    {
      qword_140C3F698 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140C3F698 = 0LL;
      KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  if ( qword_140C6B040 )
  {
    LOBYTE(v3) = a1;
    return (unsigned int)qword_140C6B040(v3);
  }
  return v2;
}
