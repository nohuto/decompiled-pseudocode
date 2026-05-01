/*
 * XREFs of SHGetPathFromIDListW_0 @ 0x1800925E3
 * Callers:
 *     ILIsEqualByPath @ 0x180160CB4 (ILIsEqualByPath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall SHGetPathFromIDListW_0(LPCITEMIDLIST pidl, LPWSTR pszPath)
{
  return SHGetPathFromIDListW(pidl, pszPath);
}
