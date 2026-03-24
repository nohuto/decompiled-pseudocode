/*
 * XREFs of PipClearDevNodeFlags @ 0x140742F14
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x140731AB8 (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x140731B88 (PnpRestartDeviceNode.c)
 *     PipClearDevNodeProblem @ 0x140735BFC (PipClearDevNodeProblem.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140741820 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1407432C8 (PipEnumerateDevice.c)
 *     PiProcessReenumeration @ 0x14074927C (PiProcessReenumeration.c)
 *     PnpProcessRelation @ 0x14074950C (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x14074AF10 (PnpInvalidateRelationsInList.c)
 *     IopRemoveDevice @ 0x14074B778 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14074C7F0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpBuildCmResourceLists @ 0x14074ED3C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x14074F4D8 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14074F8BC (PnpGetResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x140752928 (IopReleaseFilteredBootResources.c)
 *     IopReleaseResources @ 0x140752BBC (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x140752D98 (IopRemoveLegacyDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2738 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B31B0 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x1408B52BC (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408B8334 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1407424E0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
