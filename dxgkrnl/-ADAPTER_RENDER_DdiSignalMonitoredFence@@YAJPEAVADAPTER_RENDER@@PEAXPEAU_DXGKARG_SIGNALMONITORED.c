__int64 __fastcall ADAPTER_RENDER_DdiSignalMonitoredFence(
        struct ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_SIGNALMONITOREDFENCE *a3)
{
  return ADAPTER_RENDER::DdiSignalMonitoredFence(a1, a2, a3);
}
