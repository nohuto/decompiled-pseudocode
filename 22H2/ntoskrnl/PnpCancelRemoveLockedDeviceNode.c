/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x140958FEC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1408688F8 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1403B6928 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeUserFlags @ 0x140790BCC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407938F0 (PipClearDevNodeUserFlags.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C684 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x140869E38 (IopRemoveDevice.c)
 */

void __fastcall PnpCancelRemoveLockedDeviceNode(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 786 )
  {
    PipSetDevNodeUserFlags(a1, 512);
    IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    PipClearDevNodeUserFlags(a1, 512);
    PipRestoreDevNodeState(a1);
    PnpStartedDeviceNodeDependencyCheck(a1);
  }
}
