/*
 * XREFs of ?ADAPTER_RENDER_DdiUnmapCpuHostAperture@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x1C00295C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x1C02211BC (-DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUnmapCpuHostAperture(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_UNMAPCPUHOSTAPERTURE *a2)
{
  return ADAPTER_RENDER::DdiUnmapCpuHostAperture(a1, a2);
}
