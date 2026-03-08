/*
 * XREFs of KiSelectCandidateProcessor @ 0x14045A5B4
 * Callers:
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14036DE9C (KiCanSelectSoftParkedProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x140459316 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402C9000 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  _WORD *v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rax

  v5 = *(_WORD **)(a2 + 576);
  v7 = *(_QWORD *)(a1 + 192);
  v9 = *(unsigned __int8 *)(a1 + 208);
  v10 = a1;
  v11 = *(_QWORD *)(v7 + 128);
  if ( (unsigned __int16)v9 >= *v5 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)&v5[4 * v9 + 4];
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 112));
  v13 = a3 & v11 & v12 & *(_QWORD *)(v7 + 80);
  if ( v13 || (v11 & v12 & *(_QWORD *)(v7 + 80)) != 0 )
  {
    v14 = *(_BYTE *)(v10 + 209);
    if ( !v13 )
      v13 = v11 & v12 & *(_QWORD *)(v7 + 80);
    _BitScanForward64(&v15, __ROR8__(v13, v14));
    v10 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v10 + 208)
                                                              + (((unsigned __int8)v15 + v14) & 0x3F)]];
  }
  KiAcquirePrcbLocksForPreemptionAttempt(v10, a4, a5);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 112));
  return v10;
}
