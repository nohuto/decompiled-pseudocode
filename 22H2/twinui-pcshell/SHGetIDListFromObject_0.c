/*
 * XREFs of SHGetIDListFromObject_0 @ 0x1800923C6
 * Callers:
 *     SHFullIDListFromFolderAndRelativeItem @ 0x180160D44 (SHFullIDListFromFolderAndRelativeItem.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHGetIDListFromObject_0(IUnknown *punk, LPITEMIDLIST *ppidl)
{
  return SHGetIDListFromObject(punk, ppidl);
}
