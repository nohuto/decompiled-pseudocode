/*
 * XREFs of ViPtInitializeLockContext @ 0x1405D2470
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADF5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140ADF7D8 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADFA18 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADFAD0 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADFBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     <none>
 */

void __fastcall ViPtInitializeLockContext(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 9) = 4;
}
