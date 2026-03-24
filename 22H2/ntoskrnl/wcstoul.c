/*
 * XREFs of wcstoul @ 0x1403D3E00
 * Callers:
 *     PnpStringToDwordValue @ 0x1403811DC (PnpStringToDwordValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140768848 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x140781FA8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14078371C (BiOpenSystemStore.c)
 *     LocalGetAclForString @ 0x1407877AC (LocalGetAclForString.c)
 *     _CmSplitDevicePanelId @ 0x1407B0118 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B0DF0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x1407B8370 (LocalpConvertStringSidToSid.c)
 *     HalpInitChipHacks @ 0x140A629BC (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A73B20 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1403D3B7C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
