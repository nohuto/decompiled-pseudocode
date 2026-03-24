/*
 * XREFs of wcscmp_0 @ 0x1C00CE8B3
 * Callers:
 *     RIMGetProductString @ 0x1C015E6A4 (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C0160C78 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
