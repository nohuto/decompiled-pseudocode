/*
 * XREFs of ?GetWaitableVSyncEvent@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAPEAXXZ @ 0x1C016E910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::GetWaitableVSyncEvent(BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  return (void *)*((_QWORD *)this + 2);
}
