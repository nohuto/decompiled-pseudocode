/*
 * XREFs of SHGetIDListFromObject_0 @ 0x1800923E6
 * Callers:
 *     SHFullIDListFromFolderAndRelativeItem @ 0x180160EB4 (SHFullIDListFromFolderAndRelativeItem.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHGetIDListFromObject_0(IUnknown *punk, LPITEMIDLIST *ppidl)
{
  return SHGetIDListFromObject(punk, ppidl);
}
