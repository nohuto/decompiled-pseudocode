/*
 * XREFs of wcscmp_0 @ 0x1C00D6943
 * Callers:
 *     RIMGetProductString @ 0x1C0189C90 (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C018E00C (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
