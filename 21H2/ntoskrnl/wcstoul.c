/*
 * XREFs of wcstoul @ 0x1403D4500
 * Callers:
 *     PnpStringToDwordValue @ 0x14038189C (PnpStringToDwordValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140769228 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x1407820A8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 *     _CmSplitDevicePanelId @ 0x1407AFCD8 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B09B0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x1407B7BB0 (LocalpConvertStringSidToSid.c)
 *     HalpInitChipHacks @ 0x140A629BC (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A73B20 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1403D427C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
