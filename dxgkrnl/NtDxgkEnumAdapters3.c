/*
 * XREFs of NtDxgkEnumAdapters3 @ 0x1C02D1A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C02C9980 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall NtDxgkEnumAdapters3(__m128i *a1)
{
  return DxgkEnumAdapters3Impl(a1, 1, 1, UserRequest);
}
