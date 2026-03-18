/*
 * XREFs of EtwpCovSampCaptureCleanupDpc @ 0x140602FC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140602FD8 (EtwpCovSampCaptureCleanupLookasides.c)
 */

void __fastcall EtwpCovSampCaptureCleanupDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpCovSampCaptureCleanupLookasides(DeferredContext);
}
