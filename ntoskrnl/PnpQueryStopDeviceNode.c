/*
 * XREFs of PnpQueryStopDeviceNode @ 0x14096B8B8
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x14096B728 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140202138 (PoFxActivateDevice.c)
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x1403B20FC (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1403CF5C0 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x140562990 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x14096A0F4 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi
  _QWORD *v4; // rdx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 778 && ((a2 & 1) == 0 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v4 = *(_QWORD **)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(5, v4);
    PipSetDevNodeState(a1, 779);
  }
  return Reconfiguration;
}
