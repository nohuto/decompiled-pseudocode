/*
 * XREFs of MmGetNextNode @ 0x1402AB0A0
 * Callers:
 *     PoIdle @ 0x14022D240 (PoIdle.c)
 *     KiSelectIdealProcessorSetForGroup @ 0x140296BAC (KiSelectIdealProcessorSetForGroup.c)
 *     PoAllProcessorsDeepIdle @ 0x1402AAF54 (PoAllProcessorsDeepIdle.c)
 *     ExpTryQueueWorkItem @ 0x140308AAC (ExpTryQueueWorkItem.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x14056E2D8 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KeInitializeProcess @ 0x14070A0C8 (KeInitializeProcess.c)
 *     MmAllocateMemoryRanges @ 0x140A2B5D0 (MmAllocateMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, int *a2)
{
  int v2; // eax
  int v3; // r8d

  v2 = (unsigned __int16)KeNumberNodes;
  v3 = *a2 + 1;
  *a2 = v3;
  if ( v3 == v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C65718 + 4LL * (unsigned int)(v3 + v2 * a1));
}
