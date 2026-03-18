/*
 * XREFs of PopUpdatePdcSystemIdleState @ 0x140752ECC
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x140752DA8 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14086318C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 */

__int64 __fastcall PopUpdatePdcSystemIdleState(__int64 a1)
{
  char v1; // di
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v2 = 0;
  if ( byte_140C23414 && byte_140C24513 != v1 )
  {
    byte_140C24513 = v1;
    if ( v1 )
    {
      qword_140C24518 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140C24518 = 0LL;
      KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( qword_140C5AD80 )
  {
    LOBYTE(v3) = v1;
    return (unsigned int)qword_140C5AD80(v3);
  }
  return v2;
}
