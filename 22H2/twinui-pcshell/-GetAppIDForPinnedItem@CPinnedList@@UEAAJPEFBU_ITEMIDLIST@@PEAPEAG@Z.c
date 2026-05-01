/*
 * XREFs of ?GetAppIDForPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z @ 0x1801554C0
 * Callers:
 *     ?GetAppIDForPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z @ 0x180171D90 (-GetAppIDForPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z.c)
 * Callees:
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x180157F58 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 */

__int64 __fastcall CPinnedList::GetAppIDForPinnedItem(
        CPinnedList *this,
        const struct _ITEMIDLIST *a2,
        unsigned __int16 **a3)
{
  return (unsigned int)ILGetHiddenStringAllocW(a2, 3203334173LL, a3) == 0 ? 0x80004005 : 0;
}
