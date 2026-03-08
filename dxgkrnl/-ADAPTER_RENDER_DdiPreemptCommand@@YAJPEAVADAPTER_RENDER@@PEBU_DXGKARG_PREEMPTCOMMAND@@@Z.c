/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0014580
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0014598 (-DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_PREEMPTCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiPreemptCommand(a1, a2);
}
