/*
 * XREFs of MmGetNextNode @ 0x14034E6C0
 * Callers:
 *     KiSelectIdealProcessorSetForGroup @ 0x140224860 (KiSelectIdealProcessorSetForGroup.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD220 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpQueueWorkItem @ 0x1402B7670 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x1402B990C (ExpTryQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x1402C1AF0 (PoAllProcessorsDeepIdle.c)
 *     PoIdle @ 0x1402C4B30 (PoIdle.c)
 *     PpmIdleSelectStates @ 0x1403B6E10 (PpmIdleSelectStates.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140570948 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 *     MmAllocateMemoryRanges @ 0x140A2E330 (MmAllocateMemoryRanges.c)
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
    return *(unsigned int *)(qword_140C65B98 + 4LL * (unsigned int)(v3 + v2 * a1));
}
