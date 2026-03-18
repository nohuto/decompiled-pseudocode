/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C02067B0
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063D88 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064E30 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064FB0 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C020667C (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C0012788 (DpiGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  int v1; // edx

  result = DpiGetFdoFromDevice(qword_1C0140740);
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
