/*
 * XREFs of CmpCompleteUnloadKey @ 0x14071BF04
 * Callers:
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14071B940 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     KeEnterCriticalRegion @ 0x1402D19A0 (KeEnterCriticalRegion.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140360BD0 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpUnJoinClassOfTrust @ 0x140360E0C (CmpUnJoinClassOfTrust.c)
 *     CmpRemoveHiveFromNamespace @ 0x140360E58 (CmpRemoveHiveFromNamespace.c)
 *     ExfUnblockPushLock @ 0x1403F8BE0 (ExfUnblockPushLock.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405CD088 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     HvHiveCleanup @ 0x1406572B4 (HvHiveCleanup.c)
 *     CmpLogUnload @ 0x1406E08A4 (CmpLogUnload.c)
 *     CmpCleanUpSubKeyInfo @ 0x1406E2E9C (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x1406E5718 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406E5970 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14071BE10 (CmpVolumeContextDecrementRefCount.c)
 *     CmpRecordRMRecoveryMode @ 0x14071BE58 (CmpRecordRMRecoveryMode.c)
 *     CmpTraceHiveUnloadStart @ 0x14071BE80 (CmpTraceHiveUnloadStart.c)
 *     CmpTraceHiveUnloadStop @ 0x14071C10C (CmpTraceHiveUnloadStop.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14071C168 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x14071C1E4 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14071C34C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpRemoveFromPreloadedHivesList @ 0x14071C404 (CmpRemoveFromPreloadedHivesList.c)
 *     CmpDestroySecurityCache @ 0x14071C444 (CmpDestroySecurityCache.c)
 *     CmpDoFileSetSizeEx @ 0x140723DD0 (CmpDoFileSetSizeEx.c)
 *     CmpRemoveFromHiveFileList @ 0x14087349C (CmpRemoveFromHiveFileList.c)
 */

__int64 __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  int v6; // ebp
  int v7; // edx
  signed __int64 v8; // r15
  __int64 v9; // rcx
  int v10; // ebp
  int v11; // edi
  unsigned int v12; // esi
  struct _PRIVILEGE_SET *v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v16[0] = 0LL;
  CmpInitializeDelayDerefContext(v16);
  v6 = *(_DWORD *)(v3 + 4152);
  CmpLogUnload(v3, 6);
  v8 = (unsigned int)(v7 - 5);
  _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2944), v8, 0LL);
  CmpRecordRMRecoveryMode(v9);
  *(_DWORD *)(v3 + 160) |= 0x40u;
  CmpTraceHiveUnloadStart((unsigned __int16 *)(v3 + 1832), (unsigned __int16 *)(v3 + 1848));
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)v16);
  CmpLogUnload(v3, v8 + 7);
  v10 = v6 & 0x20;
  if ( v10 )
  {
    *(_DWORD *)(v3 + 4808) = v8;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, (unsigned int)v8, (__int64)v16, 0);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), v8);
  CmpDrainDelayDerefContext((_QWORD **)v16);
  CmpUnlockRegistry();
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  CmpRemoveFromHiveFileList(v3);
  CmpDestroySecurityCache(v3);
  KeEnterCriticalRegion();
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegion();
  CmpRemoveFromPreloadedHivesList(v3);
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v11 = CmpFlushHive(v3, 0x2Cu);
  if ( v11 == -1073741811 )
    v11 = 0;
  v12 = *(_DWORD *)(v3 + 272) + 4096;
  HvHiveCleanup(v3);
  if ( v11 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1792) - v12) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v12, 0LL);
  CmpCmdHiveClose(v3);
  v13 = *(struct _PRIVILEGE_SET **)(v3 + 4832);
  if ( v13 )
    CmpVolumeContextDecrementRefCount(v13);
  if ( v10 )
  {
    *(_DWORD *)(v3 + 4808) = 0;
    _InterlockedOr(v15, 0);
    if ( *(_QWORD *)(v3 + 4816) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4816), 0LL);
  }
  CmpSignalUnloadEventArrayForHive(v3);
  return CmpTraceHiveUnloadStop((unsigned int)v11);
}
