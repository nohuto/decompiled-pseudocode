/*
 * XREFs of wcstoul @ 0x1403DB890
 * Callers:
 *     PnpStringToDwordValue @ 0x1403CE1DC (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B690 (HalpMcEnumerateAndSetPatchConfig.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14080A164 (BiCleanupLoadedStores.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082C4E0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x14082D10C (_CmSplitDevicePanelId.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140880440 (_CmCreateOrdinalInstanceKey.c)
 *     HalpInitChipHacks @ 0x140B609A8 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140B6519C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x1403DB610 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
