/*
 * XREFs of ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B08C4
 * Callers:
 *     VidMmNotifyShutdown @ 0x1C0022E10 (VidMmNotifyShutdown.c)
 * Callees:
 *     ?LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ @ 0x1C00BE600 (-LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyShutdown(VIDMM_GLOBAL *this)
{
  VIDMM_PURGE_TELEMETRY::LogData((VIDMM_GLOBAL *)((char *)this + 41208));
}
