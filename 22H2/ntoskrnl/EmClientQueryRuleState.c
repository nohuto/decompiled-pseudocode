/*
 * XREFs of EmClientQueryRuleState @ 0x1409900E0
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1403C94D8 (HalpInterruptIsMsiSupported.c)
 *     PopFilterCapabilities @ 0x1406F4274 (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x1407CC00C (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     PopDirectedDripsQueryEmSettings @ 0x1408E37B0 (PopDirectedDripsQueryEmSettings.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A73E44 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     EmpSearchRuleDatabase @ 0x14034AB74 (EmpSearchRuleDatabase.c)
 *     EmpSearchTargetRuleList @ 0x14034ABAC (EmpSearchTargetRuleList.c)
 *     EmpUpdateRuleState @ 0x14034ABD4 (EmpUpdateRuleState.c)
 *     EmpReleasePagingReference @ 0x1409901C8 (EmpReleasePagingReference.c)
 *     EmpAcquirePagingReference @ 0x140990244 (EmpAcquirePagingReference.c)
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
