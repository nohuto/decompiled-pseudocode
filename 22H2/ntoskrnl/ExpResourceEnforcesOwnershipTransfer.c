/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x1402CD8B0
 * Callers:
 *     ExDeleteResourceLite @ 0x140275720 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x140277FA0 (ExReinitializeResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402CD780 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DCAE0 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer;
}
