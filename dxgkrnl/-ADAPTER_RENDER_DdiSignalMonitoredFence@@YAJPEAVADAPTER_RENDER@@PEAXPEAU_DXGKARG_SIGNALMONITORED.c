/*
 * XREFs of ?ADAPTER_RENDER_DdiSignalMonitoredFence@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C0047E10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C0220F32 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSignalMonitoredFence(
        struct ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_SIGNALMONITOREDFENCE *a3)
{
  return ADAPTER_RENDER::DdiSignalMonitoredFence(a1, a2, a3);
}
