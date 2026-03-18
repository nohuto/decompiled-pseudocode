/*
 * XREFs of PipSetDevNodeFlags @ 0x140795BDC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     PnpAllocateResources @ 0x14078F9D4 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FF34 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140790854 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140790FAC (PnpProcessAssignResources.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x140795B1C (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1407985E8 (PnpQueryID.c)
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407CD638 (PiMarkDeviceTreeForReenumeration.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140817DC4 (IopLegacyResourceAllocation.c)
 *     PnpBuildCmResourceLists @ 0x1408185D4 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140819298 (IopAllocateBootResourcesInternal.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x1408697BC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x140869C4C (IopReleaseDeviceResources.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140873C70 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PiProcessResourceRequirementsChanged @ 0x140959584 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1409596E8 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14096D5F8 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14096E748 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14096E8D8 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x140B3D848 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140B73524 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797720 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
