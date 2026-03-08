/*
 * XREFs of PnpUnlockMountableDevice @ 0x1403CFA9C
 * Callers:
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14096A1AC (PiIrpQueryRemoveDevice.c)
 *     PnpCancelStopDeviceNode @ 0x14096B484 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14096C3CC (PipProcessRestartPhase1.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
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
