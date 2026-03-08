/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140AF20B4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402B2B14 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140613F14 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     HvpFinishPrimaryWrite @ 0x140732380 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x140798AD0 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140820C84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140820D0C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14085C738 (CmpWaitOnHiveWriteQueue.c)
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmpBlockTwoHiveWrites @ 0x140A10BB8 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A10CD4 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x140A10D8C (CmpUnblockTwoHiveWrites.c)
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x1406A3848 (CmSiRWLockReleaseExclusive.c)
 */

signed __int32 __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockReleaseExclusive((volatile signed __int64 *)(a1 + 72));
}
