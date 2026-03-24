/*
 * XREFs of PipSetDevNodeFlags @ 0x140741ABC
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x1407318D4 (PiProcessSetDeviceProblem.c)
 *     PnpProcessAssignResources @ 0x14073CA2C (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14073E9B8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140741820 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407419FC (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x1407435F0 (PnpQueryID.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140749330 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140749CC4 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x14074B5CC (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x14074C18C (PipSetDevNodeProblem.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074E544 (IopInitializeDeviceInstanceKey.c)
 *     PnpBuildCmResourceLists @ 0x14074ED3C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x14074F4D8 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14074FA7C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750384 (PiQueryResourceRequirements.c)
 *     IopLegacyResourceAllocation @ 0x140752C64 (IopLegacyResourceAllocation.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140780C30 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B6290 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2738 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B31B0 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1408B85C8 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8764 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140A674D8 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140A71228 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1407424E0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
