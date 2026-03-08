/*
 * XREFs of PipSetDevNodeFlags @ 0x1406857DC
 * Callers:
 *     PnpProcessAssignResources @ 0x140681528 (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14068571C (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1406882B4 (PnpQueryID.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1406F6240 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406F6B60 (PiQueryResourceRequirements.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407855A8 (PiMarkDeviceTreeForReenumeration.c)
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x140803A38 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x1408046F8 (IopAllocateBootResourcesInternal.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x140866C4C (IopReleaseDeviceResources.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140870DB0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PiProcessResourceRequirementsChanged @ 0x140956564 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1409566C8 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14096B728 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14096B8B8 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x140B359CC (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140B6F23C (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
