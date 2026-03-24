/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x14067A644
 * Callers:
 *     PopUmpoProcessMessage @ 0x14067A514 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140282C34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381D44 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057C218 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetNewPolicyValue @ 0x14067A6B0 (PopSetNewPolicyValue.c)
 *     PopAcquirePowerRequestPushLock @ 0x14067B148 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407D4314 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestNotificationsFlush @ 0x1408E1AE8 (PopPowerRequestNotificationsFlush.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x1409909B4 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 12) == 18 )
        PfPowerActionNotify(5LL);
      break;
    case 8:
      PopProcessPowerRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
      {
        LOBYTE(a1) = 1;
        PopAcquirePowerRequestPushLock(a1);
        PopPowerRequestNotificationsEnabled = 1;
        PopPowerRequestNotificationsFlush(&PopPowerRequestObjectList);
        PopPowerRequestNotificationsFlush(&PopSpecialPowerRequestObjectList);
        PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      }
      PopPowerRequestOverrideInitialize();
      break;
    case 0xE:
      v2 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock(a1);
      dword_140C23390 = v2;
      if ( byte_140C233B1 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock(v4, v3);
      break;
  }
  return 0LL;
}
