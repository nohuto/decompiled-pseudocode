/*
 * XREFs of ?StopVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAXXZ @ 0x1C0301190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::StopVSync(BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  ExCancelTimer(*((_QWORD *)this + 2), 0LL);
  KeFlushQueuedDpcs();
}
