/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140302E94
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x14074438C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x140355F84 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
