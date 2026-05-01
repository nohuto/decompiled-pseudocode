/*
 * XREFs of SHBindToFolderIDListParentEx_0 @ 0x1800925F7
 * Callers:
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x180160604 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHBindToFolderIDListParentEx_0(
        IShellFolder *psfRoot,
        LPCITEMIDLIST pidl,
        IBindCtx *ppbc,
        const IID *const riid,
        void **ppv,
        LPCITEMIDLIST *ppidlLast)
{
  return SHBindToFolderIDListParentEx(psfRoot, pidl, ppbc, riid, ppv, ppidlLast);
}
