/*
 * XREFs of ViPtInitializeLockContext @ 0x140602068
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140A9D4F0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140A9D738 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140A9D980 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140A9DA38 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140A9DB60 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     <none>
 */

void __fastcall ViPtInitializeLockContext(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 9) = 4;
}
