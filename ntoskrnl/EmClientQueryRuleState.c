/*
 * XREFs of EmClientQueryRuleState @ 0x140A85190
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x14037D4DC (HalpInterruptIsMsiSupported.c)
 *     PopFilterCapabilities @ 0x140760774 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x140856500 (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     PopDirectedDripsQueryEmSettings @ 0x140980B4C (PopDirectedDripsQueryEmSettings.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409915D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     KeInitializeClock @ 0x140B67BE8 (KeInitializeClock.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140B720F8 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopReadErrataDeviceAllowedForPowerButtonSuppression @ 0x140B93660 (PopReadErrataDeviceAllowedForPowerButtonSuppression.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x1402D62A0 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1402D62C8 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1402D6550 (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x140A85380 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140A853F4 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  volatile signed __int32 *v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbp

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v5 = EmpSearchRuleDatabase(a1);
      v6 = v5;
      if ( v5 && (v7 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v5), (v9 = v7) != 0LL) )
      {
        _InterlockedIncrement(v7);
        EmpUpdateRuleState(v8, 0LL);
        _InterlockedAdd(v9, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v6 + 4);
      }
      else
      {
        v2 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
      KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
      EmpReleasePagingReference();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
