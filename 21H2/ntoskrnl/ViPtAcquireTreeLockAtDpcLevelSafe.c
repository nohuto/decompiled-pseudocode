/*
 * XREFs of ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140601F88
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140A9D4F0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140A9D738 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140A9D980 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140A9DA38 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140A9DB60 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
