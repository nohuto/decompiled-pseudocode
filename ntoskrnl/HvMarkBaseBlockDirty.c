/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140871E3C
 * Callers:
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     HvHiveStartFileBacked @ 0x14072F1D4 (HvHiveStartFileBacked.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     CmCompressKey @ 0x140A10E64 (CmCompressKey.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140349EA4 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x14079508C (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 195) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4136) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 195) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4136) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0LL, (unsigned __int64 *)&v3, 0);
  }
}
