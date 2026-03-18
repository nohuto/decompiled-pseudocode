/*
 * XREFs of PipClearDevNodeFlags @ 0x14079856C
 * Callers:
 *     PnpAllocateResources @ 0x14078F9D4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14078FD74 (PnpGetResourceRequirementsForAssignTable.c)
 *     PipEnumerateDevice @ 0x14079528C (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PiProcessReenumeration @ 0x1407CD584 (PiProcessReenumeration.c)
 *     IopRemoveLegacyDeviceNode @ 0x140817EE8 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140817F2C (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x1408185D4 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x140818824 (IopReleaseFilteredBootResources.c)
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
 *     PipClearDevNodeProblem @ 0x14086966C (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140869E38 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x140881998 (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882FB8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140958D6C (PnpRestartDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140959420 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140959584 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14096D5F8 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14096E4A4 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14096F3EC (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797720 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
