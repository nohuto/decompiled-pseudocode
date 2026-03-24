/*
 * XREFs of MmGetNextNode @ 0x1402F0F74
 * Callers:
 *     PoIdle @ 0x140221E90 (PoIdle.c)
 *     PpmIdlePrepare @ 0x140224F50 (PpmIdlePrepare.c)
 *     ExpTryQueueWorkItem @ 0x14023B73C (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x140240E10 (ExpQueueWorkItem.c)
 *     KiSearchForNewThread @ 0x140256518 (KiSearchForNewThread.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402BC810 (ExpAllocatePoolWithTagFromNode.c)
 *     KiChooseTargetProcessor @ 0x1402C5470 (KiChooseTargetProcessor.c)
 *     PoAllProcessorsDeepIdle @ 0x1402F0EB8 (PoAllProcessorsDeepIdle.c)
 *     PpmIdleSelectStates @ 0x140394E80 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C4DE98 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
