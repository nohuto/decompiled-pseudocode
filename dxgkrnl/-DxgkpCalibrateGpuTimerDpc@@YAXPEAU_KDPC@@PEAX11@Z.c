/*
 * XREFs of ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00458F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0041B1C (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DxgkpCalibrateGpuTimerDpc(
        struct _KDPC *Dpc,
        ADAPTER_RENDER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ADAPTER_RENDER::PerformClockCalibration(DeferredContext);
}
