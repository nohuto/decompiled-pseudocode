__int64 __fastcall NtAddAtom(char *a1, size_t a2, _WORD *a3)
{
  return NtAddAtomEx(a1, a2, a3, 0);
}
