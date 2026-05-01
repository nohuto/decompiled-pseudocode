/*
 * XREFs of ?IsPinned@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@@Z @ 0x180171DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::IsPinned(__int64 a1, const struct _ITEMIDLIST *a2)
{
  return CPinnedList::IsPinned((CPinnedList *)(a1 - 8), a2);
}
