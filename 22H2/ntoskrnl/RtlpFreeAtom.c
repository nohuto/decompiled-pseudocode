/*
 * XREFs of RtlpFreeAtom @ 0x14069EC78
 * Callers:
 *     RtlpDereferenceAtom @ 0x14020BD18 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14020BDA8 (RtlpFreeAllAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x140297670 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402F8528 (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x140339C30 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140363F5C (RtlDestroyLowBoxAtoms.c)
 *     RtlDestroyAtomTable @ 0x14069EB40 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409BBDC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14069ECA8 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
