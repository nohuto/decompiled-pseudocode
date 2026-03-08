/*
 * XREFs of PiProfileUpdateDeviceTreeCallback @ 0x1409607E0
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x1402F4FC0 (IoInvalidateDeviceRelations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14078A304 (PnpIsDeviceInstanceEnabled.c)
 *     PnpRequestDeviceRemoval @ 0x140862294 (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x140955D4C (PnpRestartDeviceNode.c)
 */

__int64 __fastcall PiProfileUpdateDeviceTreeCallback(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 == 778 )
  {
    if ( !(unsigned int)PnpIsDeviceInstanceEnabled(0LL, (unsigned __int16 *)(a1 + 40), 0) )
      PnpRequestDeviceRemoval(a1, 0, 22, 0);
  }
  else if ( ((v2 - 771) & 0xFFFFFFEE) == 0
         && v2 != 787
         && (*(_DWORD *)(a1 + 396) & 0x2000) != 0
         && *(_DWORD *)(a1 + 404) == 22 )
  {
    PipClearDevNodeProblem(a1);
    if ( (unsigned int)PnpIsDeviceInstanceEnabled(0LL, (unsigned __int16 *)(a1 + 40), 0) )
    {
      PnpRestartDeviceNode(a1);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL), BusRelations);
    }
    else
    {
      PipSetDevNodeProblem(a1, 22, 0);
    }
  }
  return 0LL;
}
