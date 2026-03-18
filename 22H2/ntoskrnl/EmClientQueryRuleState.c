/*
 * XREFs of EmClientQueryRuleState @ 0x140A87C40
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x140380F6C (HalpInterruptIsMsiSupported.c)
 *     PopFilterCapabilities @ 0x1407A8C44 (PopFilterCapabilities.c)
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x140802DA4 (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     PopEnableHiberFile @ 0x140803C60 (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmSettings @ 0x140983BFC (PopDirectedDripsQueryEmSettings.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140B76670 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopReadErrataDeviceAllowedForPowerButtonSuppression @ 0x140B97870 (PopReadErrataDeviceAllowedForPowerButtonSuppression.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x14032D724 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14032D74C (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x14032DF5C (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x140A87E30 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140A87EA4 (EmpReleasePagingReference.c)
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
