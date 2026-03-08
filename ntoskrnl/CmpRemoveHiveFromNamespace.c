/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x1402BFC14
 * Callers:
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14067D4A8 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406B6550 (CmpUnlockHashEntryByKcb.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     HvUnlockHiveFlusherShared @ 0x14074A8C4 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14074A8FC (HvLockHiveFlusherShared.c)
 *     CmpMarkKeyUnbacked @ 0x14074AD64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1407AB174 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpLogHiveDestroyEvent @ 0x140A0FAD4 (CmpLogHiveDestroyEvent.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  __int64 v6; // rsi

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v3 + 72);
  CmpLockHashEntryExclusiveByKcb(v3);
  CmpLockKcbExclusive(v6);
  CmpLockKcbExclusive(v3);
  HvLockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpFreeKeyByCell(*(_QWORD *)(v3 + 32), *(unsigned int *)(v3 + 40));
  CmpFlushNotifiesOnKeyBodyList(v3, 1LL, a3);
  CmpMarkKeyUnbacked(v3, a3);
  CmpDiscardKcb(v3);
  CmpRemoveLayerLinkForDiscardedKcb(v3, a3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  HvUnlockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpUnlockKcb(v3);
  CmpUnlockKcb(v6);
  return CmpUnlockHashEntryByKcb(v3);
}
