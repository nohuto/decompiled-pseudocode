/*
 * XREFs of ?ADAPTER_RENDER_DdiSetSchedulingLogBuffer@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x1C0047DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x1C02C6AB4 (-DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetSchedulingLogBuffer(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *a2)
{
  return ADAPTER_RENDER::DdiSetSchedulingLogBuffer(a1, a2);
}
