__int64 __fastcall CmpFullPromoteHiveRootFromKcbStack(__int64 a1)
{
  ULONG_PTR KcbAtLayerHeight; // rdi
  int started; // ebx
  __int64 EntryAtLayerHeight; // rax
  char v6[80]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v6);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v6, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v6);
    if ( started >= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v6, *(_WORD *)(a1 + 2));
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
      started = 0;
    }
  }
  CmpCleanupKeyNodeStack((__int64)v6);
  return (unsigned int)started;
}
