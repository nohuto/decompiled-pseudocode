/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1402AE860
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140202EAC (PnpSetDeviceAffinityThread.c)
 *     MiGetClosestNodeWithProcessors @ 0x1403028A8 (MiGetClosestNodeWithProcessors.c)
 *     MiComputeIdealDpcGang @ 0x1403867CC (MiComputeIdealDpcGang.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A28D0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpQueryNumaProcessorMap @ 0x140729CDC (ExpQueryNumaProcessorMap.c)
 *     ExpNodeCreateSystemThread @ 0x1407DE204 (ExpNodeCreateSystemThread.c)
 *     ExpPartitionStart @ 0x140847FB8 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x140848498 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x140848580 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1409EC980 (EtwpProcessorRundown.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x1402AE38C (KiQuerySubNodeActiveAffinity.c)
 *     KeGetNodePrimarySubNode @ 0x1402AE8B4 (KeGetNodePrimarySubNode.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 NodePrimarySubNode; // rax
  __int64 v4; // rdx
  _WORD *v5; // r8

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[NodeNumber], Affinity, Count, 0LL);
    if ( NodePrimarySubNode )
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode, v4, v5);
  }
}
