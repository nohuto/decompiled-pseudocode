/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x140201F50
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x140681E54 (IopDoDeferredSetInterfaceState.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PpMarkDeviceStackExtensionFlag(__int64 a1, int a2, char a3)
{
  KIRQL v6; // dl
  __int64 v7; // rcx

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 312);
    if ( a3 )
      *(_DWORD *)(v7 + 32) |= a2;
    else
      *(_DWORD *)(v7 + 32) &= ~a2;
    a1 = *(_QWORD *)(a1 + 24);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
