/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x14071D590
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140361750 (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036B7F8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     CmReplaceKey @ 0x14086DA18 (CmReplaceKey.c)
 *     CmSaveMergedKeys @ 0x14087CAE0 (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
}
