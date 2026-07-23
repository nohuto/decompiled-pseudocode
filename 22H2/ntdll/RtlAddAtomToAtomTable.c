/*
 * XREFs of RtlAddAtomToAtomTable @ 0x180059450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlAddAtomToAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx(AtomTableHandle, AtomName, Atom);
}
