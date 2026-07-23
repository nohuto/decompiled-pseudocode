/*
 * XREFs of wcstoul @ 0x1403D4670
 * Callers:
 *     PnpStringToDwordValue @ 0x1403813EC (PnpStringToDwordValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407693E8 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x140782268 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 *     _CmSplitDevicePanelId @ 0x1407AFE78 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B0B50 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x1407B80D0 (LocalpConvertStringSidToSid.c)
 *     HalpInitChipHacks @ 0x140A639BC (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140A6B22C (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A74B20 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1403D43EC (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
