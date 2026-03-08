/*
 * XREFs of _wcsnicmp_0 @ 0x1C00243F2
 * Callers:
 *     SepSddlGetAclForString @ 0x1C0392A80 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x1C0392DF8 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C0392EC4 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1C03C99C0 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
