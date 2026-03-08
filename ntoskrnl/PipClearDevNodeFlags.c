/*
 * XREFs of PipClearDevNodeFlags @ 0x14068816C
 * Callers:
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406F6080 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiProcessReenumeration @ 0x1407854F4 (PiProcessReenumeration.c)
 *     IopRemoveLegacyDeviceNode @ 0x140801EC8 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140801F0C (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140803A38 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x140803C88 (IopReleaseFilteredBootResources.c)
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x14087CBE8 (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140955D4C (PnpRestartDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140956400 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140956564 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14096B484 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14096C3CC (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
