/*
 * XREFs of PnpQueryStopDeviceNode @ 0x1408B8764
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x1408B85C8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14036EEA8 (PipSetDevNodeState.c)
 *     PoFxActivateDevice @ 0x14036F174 (PoFxActivateDevice.c)
 *     PnpFindMountableDevice @ 0x140370400 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1403936BC (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x140510278 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x140741ABC (PipSetDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x1408B2D70 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi
  struct _DEVICE_OBJECT *v4; // rdx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 776 && (!a2 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(5, v4);
    PipSetDevNodeState(a1, 777);
  }
  return Reconfiguration;
}
