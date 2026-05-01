/*
 * XREFs of ?EnumObjects@CPinnedList@@W7EAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180171D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::EnumObjects(__int64 a1, struct IEnumFullIDList **a2)
{
  return CPinnedList::EnumObjects((CPinnedList *)(a1 - 8), a2);
}
