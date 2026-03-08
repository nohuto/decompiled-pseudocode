/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x14085F104
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14073B5A4 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1402BCE58 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
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
