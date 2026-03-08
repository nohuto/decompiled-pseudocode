/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140AF2098
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402B2B14 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140613E8C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     HvpFinishPrimaryWrite @ 0x140732380 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x140798AD0 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140820C84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140820D0C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 *     CmpBlockHiveWrites @ 0x140A10B04 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A10BB8 (CmpBlockTwoHiveWrites.c)
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 * Callees:
 *     CmSiRWLockAcquireExclusive @ 0x1406A419C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  return CmSiRWLockAcquireExclusive((unsigned __int64 *)(a1 + 72));
}
