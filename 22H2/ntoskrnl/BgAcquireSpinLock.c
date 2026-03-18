/*
 * XREFs of BgAcquireSpinLock @ 0x140AF2180
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B5FA0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
