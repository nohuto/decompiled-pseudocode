/*
 * XREFs of ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C0127BEC
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B2A34 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010C5E8 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfOpenInterfacePersistedStorage(struct _GUID *a1, struct KRegKey *a2)
{
  return ndisIfOpenInterfaceRegistryKey(a1, a2, 1u, PropertyBag);
}
