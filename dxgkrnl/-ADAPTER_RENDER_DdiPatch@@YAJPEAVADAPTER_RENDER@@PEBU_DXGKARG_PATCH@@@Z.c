/*
 * XREFs of ?ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z @ 0x1C0047C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C02C4348 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPatch(struct ADAPTER_RENDER *a1, const struct _DXGKARG_PATCH *a2)
{
  return ADAPTER_RENDER::DdiPatch(a1, a2);
}
