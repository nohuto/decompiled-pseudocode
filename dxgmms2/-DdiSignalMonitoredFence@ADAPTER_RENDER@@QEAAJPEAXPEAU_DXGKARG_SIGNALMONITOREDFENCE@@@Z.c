__int64 __fastcall ADAPTER_RENDER::DdiSignalMonitoredFence(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_SIGNALMONITOREDFENCE *a3)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *, struct _DXGKARG_SIGNALMONITOREDFENCE *))DxgCoreInterface[35])(
           this,
           a2,
           a3);
}
