/*
 * XREFs of BgAcquireSpinLock @ 0x1409F4B40
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC600 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
