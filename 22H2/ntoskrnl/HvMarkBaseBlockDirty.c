/*
 * XREFs of HvMarkBaseBlockDirty @ 0x14069FDFC
 * Callers:
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 *     CmpRecordRMRecoveryMode @ 0x14071BE58 (CmpRecordRMRecoveryMode.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 *     HvHiveStartFileBacked @ 0x140721038 (HvHiveStartFileBacked.c)
 *     CmpCreateHiveRootCell @ 0x14078DAF0 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x14086C250 (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x140872140 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x1402D87F0 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x14069FE70 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 191) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4176) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 191) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4176) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (unsigned __int64 *)&v3, 0);
  }
}
