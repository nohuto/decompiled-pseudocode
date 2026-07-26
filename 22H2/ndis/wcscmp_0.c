/*
 * XREFs of wcscmp_0 @ 0x1C00407FD
 * Callers:
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C006D714 (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     NdisQueryDiagnosticSetting @ 0x1C01188C0 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
