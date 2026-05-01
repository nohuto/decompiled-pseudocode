/*
 * XREFs of ?GetPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180171DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::GetPinnedItem(__int64 a1, const struct _ITEMIDLIST *a2, struct _ITEMIDLIST **a3)
{
  return CPinnedList::GetPinnedItem((CPinnedList *)(a1 - 8), a2, a3);
}
