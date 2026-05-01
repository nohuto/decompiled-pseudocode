/*
 * XREFs of ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x180155274
 * Callers:
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015530C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159900 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 * Callees:
 *     ILIsEqualByPath @ 0x180160E24 (ILIsEqualByPath.c)
 *     DSA_GetItemPtr @ 0x1804E7B50 (DSA_GetItemPtr.c)
 */

LPCITEMIDLIST *__fastcall CPinList::FindPidl(HDSA *this, const struct _ITEMIDLIST *a2, int *a3)
{
  LPCITEMIDLIST *v3; // rdi
  int v7; // ebx
  LPCITEMIDLIST *ItemPtr; // r14

  v3 = 0LL;
  if ( *this )
    v7 = *(_DWORD *)*this;
  else
    v7 = 0;
  while ( --v7 >= 0 )
  {
    ItemPtr = (LPCITEMIDLIST *)DSA_GetItemPtr(*this, v7);
    if ( ILIsEqual(*ItemPtr, a2) || (unsigned int)ILIsEqualByPath(*ItemPtr, a2) )
    {
      if ( a3 )
        *a3 = v7;
      v3 = ItemPtr;
    }
  }
  return v3;
}
