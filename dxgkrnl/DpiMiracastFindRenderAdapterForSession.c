/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C01F7F00
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064210 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064390 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01F7DCC (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C0012F68 (DpiGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  int v1; // edx

  result = DpiGetFdoFromDevice(qword_1C013B740);
  if ( result )
  {
    v1 = *(_DWORD *)(result + 236);
    if ( v1 != 2 && (*(_DWORD *)(result + 240) != 2 || ((v1 - 3) & 0xFFFFFFFC) != 0 || v1 == 4) )
    {
      WdLogSingleEntry0(3LL);
      return 0LL;
    }
  }
  return result;
}
