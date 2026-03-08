/*
 * XREFs of RtlpFreeAtom @ 0x1407DC628
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1403546F0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x140355098 (RtlpAllocateAtomTableEntry.c)
 *     RtlpDereferenceAtom @ 0x140355550 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x140355B04 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x140355EB0 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140355F84 (RtlDestroyLowBoxAtoms.c)
 *     RtlDestroyAtomTable @ 0x1407DC4F0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409B8EA0 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x140696A48 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
