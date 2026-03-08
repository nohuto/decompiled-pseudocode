/*
 * XREFs of ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C0153B9C
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008ECEC (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1C000CDAC (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C000CDF0 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005BB7C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1C008F05C (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C008F1DC (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 */

__int64 __fastcall GroupedFGBoostProp::ClearGroupedFGBoost(struct _KTHREAD ***a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  GroupedFGBoostProp *v8; // rbx
  GroupedFGBoostProp *v9; // [rsp+30h] [rbp+8h] BYREF

  LockRefactorStagingAssertOwned(a1[18], a2, a3, a4);
  v9 = 0LL;
  if ( !CWindowProp::GetProp<GroupedFGBoostProp>((__int64)a1, (__int64 *)&v9, v5, v6) )
    return 3221225485LL;
  v8 = v9;
  if ( *((_QWORD *)v9 + 4) )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (struct _EX_PUSH_LOCK *)&unk_1C02D2E50);
    GroupedFGBoostProp::doImmediateBoostAll((__int64)v8, 0);
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    GroupedFGBoostProp::deRefAll(v8);
    GroupedFGBoostProp::cleanUpAndReplace(v8, 0, 0LL);
  }
  return 0LL;
}
