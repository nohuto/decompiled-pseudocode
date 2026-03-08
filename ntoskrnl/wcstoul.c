/*
 * XREFs of wcstoul @ 0x1403D6370
 * Callers:
 *     PnpStringToDwordValue @ 0x1403C2438 (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140519160 (HalpMcEnumerateAndSetPatchConfig.c)
 *     LocalpConvertStringSidToSid @ 0x14074CCC8 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140824470 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x14082509C (_CmSplitDevicePanelId.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1408311C8 (BiCleanupLoadedStores.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087B610 (_CmCreateOrdinalInstanceKey.c)
 *     KsepMatchInitBiosInfo @ 0x140B35308 (KsepMatchInitBiosInfo.c)
 *     HalpInitChipHacks @ 0x140B35648 (HalpInitChipHacks.c)
 * Callees:
 *     wcstoxlX @ 0x1403D60F0 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
