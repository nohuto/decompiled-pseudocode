/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407034AC
 * Callers:
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     HvpPerformLogFileRecovery @ 0x14080093C (HvpPerformLogFileRecovery.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
 *     CmpCreateHiveRootCell @ 0x14087495C (CmpCreateHiveRootCell.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1CF34 (CmpRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x140747620 (HvpMarkDirty.c)
 *     HvpGetBinContextInitialize @ 0x140AF6200 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF6210 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF6280 (HvpGetCellMap.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  __int64 CellMap; // rax
  __int64 v3; // rcx
  __int64 BinAddress; // rdi
  __int64 result; // rax
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  HvpGetBinContextInitialize(&v6);
  CellMap = HvpGetCellMap(BugCheckParameter2, 0LL);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x13D2uLL);
  BinAddress = HvpMapEntryGetBinAddress(v3, CellMap, &v6);
  if ( *(_QWORD *)(BinAddress + 20) == *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL) )
    return 0LL;
  result = HvpMarkDirty(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(BinAddress + 20) = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    return 0LL;
  }
  return result;
}
