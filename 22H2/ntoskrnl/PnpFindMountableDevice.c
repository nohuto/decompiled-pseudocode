/*
 * XREFs of PnpFindMountableDevice @ 0x1403B6DBC
 * Callers:
 *     IopRemoveDevice @ 0x140869E38 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D1CC (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14096E8D8 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall PnpFindMountableDevice(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}
