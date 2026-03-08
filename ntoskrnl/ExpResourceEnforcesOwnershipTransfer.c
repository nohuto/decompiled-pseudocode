/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x1402917A4
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x1402911D0 (ExpSetResourceOwnerPointerEx.c)
 *     ExReinitializeResourceLite @ 0x1402CB110 (ExReinitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer != 0;
}
