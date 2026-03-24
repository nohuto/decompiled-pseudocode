/*
 * XREFs of RtlpFreeAtom @ 0x1406A156C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14025A350 (RtlAddAtomToAtomTableEx.c)
 *     RtlCreateAtomTableEx @ 0x140264090 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x140264168 (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyLowBoxAtoms @ 0x1402BC604 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x1402BC6D8 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1402BC768 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x1406A1340 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409130B0 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1406603C4 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
