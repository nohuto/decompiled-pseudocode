/*
 * XREFs of PnpUnlockMountableDevice @ 0x140393718
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x14073463C (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x14074B778 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14074C7F0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1408B52BC (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408B8334 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

void __fastcall PnpUnlockMountableDevice(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( *(_QWORD *)(v1 + 56) )
        KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = *(_QWORD *)(v1 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
