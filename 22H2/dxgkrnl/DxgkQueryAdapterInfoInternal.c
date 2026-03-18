/*
 * XREFs of DxgkQueryAdapterInfoInternal @ 0x1C02D4220
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(const struct _D3DKMT_QUERYADAPTERINFO *a1)
{
  return DxgkQueryAdapterInfoImpl(a1, 0, 0LL);
}
