/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x14066DD84
 * Callers:
 *     PopUmpoProcessMessage @ 0x14066DC54 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140270EE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381894 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057C458 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetNewPolicyValue @ 0x14066DDF0 (PopSetNewPolicyValue.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407D4484 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestNotificationsFlush @ 0x1408E1C48 (PopPowerRequestNotificationsFlush.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x1409919B4 (PfPowerActionNotify.c)
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
      dword_140C23990 = v2;
      if ( byte_140C239B1 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock(v4, v3);
      break;
  }
  return 0LL;
}
