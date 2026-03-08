/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x14072CD4C
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1A1E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
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
