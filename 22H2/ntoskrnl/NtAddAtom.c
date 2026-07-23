/*
 * XREFs of NtAddAtom @ 0x140956CF0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x140684130 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
