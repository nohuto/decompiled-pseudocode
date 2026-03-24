/*
 * XREFs of RtlpFreeAtom @ 0x1406862EC
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140259BB0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1403157B4 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140315888 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x140315918 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x14032D350 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x14032D428 (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyAtomTable @ 0x1406860C0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140913100 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1406D9184 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
