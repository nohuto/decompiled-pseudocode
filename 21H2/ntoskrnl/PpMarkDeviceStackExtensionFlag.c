/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x1402DE33C
 * Callers:
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x140768F5C (IopDoDeferredSetInterfaceState.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
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
