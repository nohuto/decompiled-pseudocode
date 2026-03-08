/*
 * XREFs of ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C01D0634
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01CFECC (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C01D05D8 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsNullUmdDriver(const struct _UNICODE_STRING *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1->Length || a1->Length == 4 && *(_DWORD *)a1->Buffer == 4063292 )
    return 1;
  return v1;
}
