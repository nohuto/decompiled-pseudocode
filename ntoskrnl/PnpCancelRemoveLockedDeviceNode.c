/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x140955FCC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1408635A0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1403B1C68 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeUserFlags @ 0x140680EF0 (PipSetDevNodeUserFlags.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140681C08 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipClearDevNodeUserFlags @ 0x1406831A8 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 */

__int64 __fastcall PnpCancelRemoveLockedDeviceNode(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 786 )
  {
    PipSetDevNodeUserFlags(a1, 512);
    IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    PipClearDevNodeUserFlags(a1, 512);
    PipRestoreDevNodeState(a1);
    return PnpStartedDeviceNodeDependencyCheck(a1);
  }
  return result;
}
