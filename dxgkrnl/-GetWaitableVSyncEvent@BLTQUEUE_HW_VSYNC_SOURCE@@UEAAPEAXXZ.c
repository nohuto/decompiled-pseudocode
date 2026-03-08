/*
 * XREFs of ?GetWaitableVSyncEvent@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAPEAXXZ @ 0x1C01E0760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall BLTQUEUE_HW_VSYNC_SOURCE::GetWaitableVSyncEvent(BLTQUEUE_HW_VSYNC_SOURCE *this)
{
  return (void *)*((_QWORD *)this + 10);
}
