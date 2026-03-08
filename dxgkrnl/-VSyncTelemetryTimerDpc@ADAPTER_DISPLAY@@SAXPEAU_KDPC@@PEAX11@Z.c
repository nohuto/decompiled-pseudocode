/*
 * XREFs of ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C00410B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0040D40 (-VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::VSyncTelemetryTimerDpc(
        struct _KDPC *Dpc,
        ADAPTER_DISPLAY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ADAPTER_DISPLAY::VSyncTelemetryBucket(DeferredContext);
}
