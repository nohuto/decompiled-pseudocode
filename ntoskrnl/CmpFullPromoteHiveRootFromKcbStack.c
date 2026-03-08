/*
 * XREFs of CmpFullPromoteHiveRootFromKcbStack @ 0x140A23050
 * Callers:
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407836E4 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1407A5468 (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A1D69C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

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
