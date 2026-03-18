/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140AF668C
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1406163C4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x140768FAC (CmpTransMgrPrepare.c)
 *     HvpFinishPrimaryWrite @ 0x1407D9C94 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E7F30 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140828CF4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140828D7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860638 (CmpWaitOnHiveWriteQueue.c)
 *     CmDumpKeyToFile @ 0x140A0AB54 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A0BE34 (CmSaveMergedKeys.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13908 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A13A24 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x140A13ADC (CmpUnblockTwoHiveWrites.c)
 *     CmReplaceKey @ 0x140A157A4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x140747848 (CmSiRWLockReleaseExclusive.c)
 */

signed __int32 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockReleaseExclusive((volatile signed __int64 *)(a1 + 72));
}
