/*
 * XREFs of CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
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
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A23568 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(__int64 a1, __int16 *a2, char a3)
{
  char v6; // di
  __int16 v7; // r14
  ULONG_PTR KcbAtLayerHeight; // rsi
  int started; // ebx
  __int64 EntryAtLayerHeight; // r15
  __int16 v11; // dx
  __int16 v13[40]; // [rsp+20h] [rbp-88h] BYREF

  memset(v13, 0, 0x4AuLL);
  v6 = 0;
  CmpInitializeKeyNodeStack((char *)v13);
  v7 = *(_WORD *)(a1 + 2);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v7);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v13, a1, 0LL);
  if ( started < 0 )
    goto LABEL_11;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v13, v7);
  if ( *(_DWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v11) + 8) == -1 )
  {
    started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v13, (__int64)a2);
    if ( started < 0 )
      goto LABEL_11;
    v6 = 1;
  }
  if ( a3 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v13, a2);
    if ( started < 0 )
      goto LABEL_9;
    v6 = 1;
  }
  started = 0;
LABEL_9:
  if ( v6 )
  {
    ++*(_QWORD *)(KcbAtLayerHeight + 304);
    CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
  }
LABEL_11:
  CmpCleanupKeyNodeStack((__int64)v13);
  return (unsigned int)started;
}
