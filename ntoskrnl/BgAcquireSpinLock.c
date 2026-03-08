/*
 * XREFs of BgAcquireSpinLock @ 0x140AEE180
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B1310 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
