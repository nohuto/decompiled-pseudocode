/*
 * XREFs of ILCombine_0 @ 0x180094C4C
 * Callers:
 *     SHFullIDListFromFolderAndRelativeItem @ 0x180160D44 (SHFullIDListFromFolderAndRelativeItem.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPITEMIDLIST __stdcall ILCombine_0(LPCITEMIDLIST pidl1, LPCITEMIDLIST pidl2)
{
  return ILCombine(pidl1, pidl2);
}
