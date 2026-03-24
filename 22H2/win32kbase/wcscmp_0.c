/*
 * XREFs of wcscmp_0 @ 0x1C00CEA13
 * Callers:
 *     RIMGetProductString @ 0x1C015E5D4 (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C0160BA8 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
