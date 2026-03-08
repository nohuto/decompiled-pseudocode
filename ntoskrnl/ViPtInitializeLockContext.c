/*
 * XREFs of ViPtInitializeLockContext @ 0x1405CFFC0
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADB5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140ADB7D8 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADBA18 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADBAD0 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADBBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     <none>
 */

void __fastcall ViPtInitializeLockContext(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 9) = 4;
}
