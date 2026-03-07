void __fastcall DxgkpCalibrateGpuTimerDpc(
        struct _KDPC *Dpc,
        ADAPTER_RENDER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ADAPTER_RENDER::PerformClockCalibration(DeferredContext);
}
