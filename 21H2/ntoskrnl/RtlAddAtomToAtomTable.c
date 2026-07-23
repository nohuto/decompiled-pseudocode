/*
 * XREFs of RtlAddAtomToAtomTable @ 0x14061DDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x14027B8C0 (RtlAddAtomToAtomTableEx.c)
 */

NTSTATUS __cdecl RtlAddAtomToAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx((__int64)AtomTableHandle, AtomName, Atom, 0);
}
