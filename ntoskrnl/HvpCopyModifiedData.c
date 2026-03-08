/*
 * XREFs of HvpCopyModifiedData @ 0x1407FA0A0
 * Callers:
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x1407F9FEC (HvpApplyLogEntryDataToFileBackedHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x140799A90 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpMapEntryGetBlockAddress @ 0x1407B46A4 (HvpMapEntryGetBlockAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int v10; // r9d
  _QWORD *CellMap; // rax
  unsigned int v12; // r8d
  void *BlockAddress; // rax
  __int16 v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  result = HvpGetBinContextInitialize(&v14);
  v9 = 0;
  if ( v10 )
  {
    do
    {
      CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v9 + a2);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v12, 0xC40uLL);
      BlockAddress = (void *)HvpMapEntryGetBlockAddress(BugCheckParameter2, CellMap, (__int64)&v14);
      memmove(BlockAddress, (const void *)(a3 + v9), 0x1000uLL);
      result = HvpMapEntryReleaseBlockAddress();
      v9 += 4096;
    }
    while ( v9 < a4 );
  }
  return result;
}
