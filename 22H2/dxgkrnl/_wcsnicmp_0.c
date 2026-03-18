/*
 * XREFs of _wcsnicmp_0 @ 0x1C0023F02
 * Callers:
 *     SepSddlGetAclForString @ 0x1C0397360 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x1C03976D8 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C03977A4 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1C03CE20C (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
