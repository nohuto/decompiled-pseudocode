/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x14071D558
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140361750 (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x14036B664 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x14086DA18 (CmReplaceKey.c)
 *     CmSaveMergedKeys @ 0x14087CAE0 (CmSaveMergedKeys.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 */

char __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 72;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  return KeAbPostRelease(v1);
}
