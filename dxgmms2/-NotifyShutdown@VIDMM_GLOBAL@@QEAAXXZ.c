/*
 * XREFs of ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E6574
 * Callers:
 *     VidMmNotifyShutdown @ 0x1C002D2A0 (VidMmNotifyShutdown.c)
 * Callees:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E4D1C (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyShutdown(struct DXGADAPTER **this)
{
  VIDMM_GLOBAL::LogTeardownTelemetry(this);
}
