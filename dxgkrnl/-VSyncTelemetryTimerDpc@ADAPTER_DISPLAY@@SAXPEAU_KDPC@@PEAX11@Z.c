void __fastcall ADAPTER_DISPLAY::VSyncTelemetryTimerDpc(
        struct _KDPC *Dpc,
        ADAPTER_DISPLAY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ADAPTER_DISPLAY::VSyncTelemetryBucket(DeferredContext);
}
