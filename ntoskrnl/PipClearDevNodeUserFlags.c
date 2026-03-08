/*
 * XREFs of PipClearDevNodeUserFlags @ 0x1406831A8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x140681528 (PnpProcessAssignResources.c)
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PnpRestartDeviceNode @ 0x140955D4C (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140955FCC (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409561C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x140961AFC (PnpTrackQueryRemoveDevices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 400);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 400) = v3;
  if ( (((unsigned __int16)v2 ^ (unsigned __int16)v3) & 0x347) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      result = *(_DWORD *)(a1 + 400) ^ v2;
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 0x40) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29LL);
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 30LL);
    }
  }
  return result;
}
