/*
 * XREFs of DxgkEnumAdapters @ 0x1C02CC980
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C02C9F38 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters(struct _D3DKMT_ENUMADAPTERS *a1, __int64 a2, __int64 a3, enum _KWAIT_REASON a4)
{
  return DxgkEnumAdaptersImpl(a1, a2, a3, a4);
}
