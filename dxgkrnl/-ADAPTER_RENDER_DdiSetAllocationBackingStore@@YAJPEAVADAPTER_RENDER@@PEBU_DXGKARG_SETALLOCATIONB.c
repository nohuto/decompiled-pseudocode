/*
 * XREFs of ?ADAPTER_RENDER_DdiSetAllocationBackingStore@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C0047D70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C02C5CCC (-DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetAllocationBackingStore(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2)
{
  return ADAPTER_RENDER::DdiSetAllocationBackingStore(a1, a2);
}
