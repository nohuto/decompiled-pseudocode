/*
 * XREFs of DxgkEnumAdapters3Internal @ 0x1C02CC9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C02C9980 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters3Internal(__m128i *a1)
{
  return DxgkEnumAdapters3Impl(a1, 0, 0, Executive);
}
