/*
 * XREFs of ?ADAPTER_RENDER_DdiSuspendContext@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUSPENDCONTEXT@@@Z @ 0x1C0047E70
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z @ 0x1C02C7F38 (-DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSuspendContext(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SUSPENDCONTEXT *a2)
{
  return ADAPTER_RENDER::DdiSuspendContext(a1, a2);
}
