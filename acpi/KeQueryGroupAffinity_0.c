/*
 * XREFs of KeQueryGroupAffinity_0 @ 0x1C0001B09
 * Callers:
 *     IntPartIsInterruptSteerable @ 0x1C005EDEC (IntPartIsInterruptSteerable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KAFFINITY __stdcall KeQueryGroupAffinity_0(USHORT GroupNumber)
{
  return KeQueryGroupAffinity(GroupNumber);
}
