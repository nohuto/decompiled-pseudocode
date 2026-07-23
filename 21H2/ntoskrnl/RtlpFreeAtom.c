/*
 * XREFs of RtlpFreeAtom @ 0x140600CFC
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x14023AB94 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x14023AC68 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14023ACF8 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x1402522D0 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402523A8 (RtlpAllocateAtomTableEntry.c)
 *     RtlAddAtomToAtomTableEx @ 0x14027B8C0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x140600AD0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140913210 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1406551E4 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
