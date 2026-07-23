/*
 * XREFs of ZwAddAtom @ 0x1403FAE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
