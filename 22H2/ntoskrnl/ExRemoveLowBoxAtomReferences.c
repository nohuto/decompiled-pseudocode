/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140315784
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406355DC (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x1403157B4 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
