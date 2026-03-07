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
