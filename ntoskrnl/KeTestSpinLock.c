/*
 * XREFs of KeTestSpinLock @ 0x1402053F0
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140205E34 (EtwpLockUnlockBufferList.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     KiDecodeMcaFault @ 0x1403DDB70 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x14054CD30 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x1405FDF10 (EtwpBugCheckMultiPartCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
