/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14031A564
 * Callers:
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1403187C0 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140319F90 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer != 0;
}
