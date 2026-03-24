/*
 * XREFs of _wcsnicmp_0 @ 0x1C0024962
 * Callers:
 *     SepSddlGetAclForString @ 0x1C02C49D4 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x1C02C4D64 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C02C4E38 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F5EC0 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
