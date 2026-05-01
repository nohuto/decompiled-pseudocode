/*
 * XREFs of SHBindToParent_0 @ 0x180094BB5
 * Callers:
 *     SHGetUIObjectFromFullPIDL @ 0x18015FCB8 (SHGetUIObjectFromFullPIDL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHBindToParent_0(LPCITEMIDLIST pidl, const IID *const riid, void **ppv, LPCITEMIDLIST *ppidlLast)
{
  return SHBindToParent(pidl, riid, ppv, ppidlLast);
}
