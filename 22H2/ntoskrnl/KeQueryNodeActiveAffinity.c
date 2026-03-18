/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140305880
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140322660 (PnpSetDeviceAffinityThread.c)
 *     MiGetClosestNodeWithProcessors @ 0x14036E1A0 (MiGetClosestNodeWithProcessors.c)
 *     MiComputeIdealDpcGang @ 0x14038940C (MiComputeIdealDpcGang.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A7860 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C577C (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpNodeCreateSystemThread @ 0x140683660 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1407B43C0 (ExpQueryNumaProcessorMap.c)
 *     ExpPartitionStart @ 0x14084A628 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x14084AB08 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x14084ABF0 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1409EF810 (EtwpProcessorRundown.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B62B24 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x1403058D4 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x140307D4C (KiQuerySubNodeActiveAffinity.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 NodePrimarySubNode; // rax

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[NodeNumber], Affinity, Count, 0LL);
    if ( NodePrimarySubNode )
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode);
  }
}
