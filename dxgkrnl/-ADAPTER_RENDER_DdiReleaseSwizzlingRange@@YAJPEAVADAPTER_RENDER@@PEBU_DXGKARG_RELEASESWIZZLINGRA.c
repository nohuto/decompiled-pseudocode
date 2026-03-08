/*
 * XREFs of ?ADAPTER_RENDER_DdiReleaseSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z @ 0x1C0047CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiReleaseSwizzlingRange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z @ 0x1C02C4DF4 (-DdiReleaseSwizzlingRange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiReleaseSwizzlingRange(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_RELEASESWIZZLINGRANGE *a2)
{
  return ADAPTER_RENDER::DdiReleaseSwizzlingRange(a1, a2);
}
