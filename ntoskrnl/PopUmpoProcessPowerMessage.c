/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x14073B5A4
 * Callers:
 *     PopUmpoProcessMessage @ 0x14073B3C8 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1402BC0D8 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14036D07C (PopIdleCancelAoAcDozeS4Timer.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059BCE8 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetNewPolicyValue @ 0x140825FDC (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x14085F104 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140873100 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x14097E644 (PopPowerRequestNotificationsBegin.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 12) == 18 )
        PfPowerActionNotify(5LL, 1LL, 0LL);
      break;
    case 8:
      PopPowerRequestHandleRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
        PopPowerRequestNotificationsBegin();
      PopPowerRequestOverrideInitialize();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      PopPowerAggregatorUmpoInitialized = 1;
      PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
      PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
      if ( qword_140C6AC50 )
        qword_140C6AC50();
      break;
    case 0xE:
      v2 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock(a1);
      dword_140C3C9B0 = v2;
      if ( byte_140C3C9D1 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock(v4, v3, v5);
      break;
  }
  return 0LL;
}
