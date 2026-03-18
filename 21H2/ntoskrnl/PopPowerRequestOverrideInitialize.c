/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x140863534
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407EFD2C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14036ABA8 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  PVOID *i; // rbx

  PopAcquirePowerRequestPushLock(0);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    if ( !*((_BYTE *)i + 152) )
      PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
