/*
 * XREFs of ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405CFEE0
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADB5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140ADB7D8 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADBA18 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADBAD0 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADBBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViPtAcquireTreeLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v2; // al
  volatile LONG *v5; // rcx

  v2 = *(_BYTE *)(a2 + 9);
  if ( (v2 & 2) == 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v2 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
