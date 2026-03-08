/*
 * XREFs of wcscmp_0 @ 0x1C00E18D3
 * Callers:
 *     RIMGetProductString @ 0x1C01B7824 (RIMGetProductString.c)
 *     RIMVirtGetProductString @ 0x1C01BBCA4 (RIMVirtGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
