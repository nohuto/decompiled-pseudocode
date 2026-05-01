/*
 * XREFs of SHGetPathFromIDListW_0 @ 0x180092603
 * Callers:
 *     ILIsEqualByPath @ 0x180160E24 (ILIsEqualByPath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall SHGetPathFromIDListW_0(LPCITEMIDLIST pidl, LPWSTR pszPath)
{
  return SHGetPathFromIDListW(pidl, pszPath);
}
