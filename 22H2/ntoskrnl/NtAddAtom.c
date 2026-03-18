/*
 * XREFs of NtAddAtom @ 0x140A01850
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1407D1D40 (NtAddAtomEx.c)
 */

__int64 __fastcall NtAddAtom(char *a1, size_t a2, _WORD *a3)
{
  return NtAddAtomEx(a1, a2, a3, 0);
}
