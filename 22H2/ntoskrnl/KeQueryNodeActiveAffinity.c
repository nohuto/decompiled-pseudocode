/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1403544E0
 * Callers:
 *     ExpWorkerThread @ 0x1402417F0 (ExpWorkerThread.c)
 *     MiCreateColorAnchors @ 0x1403538F4 (MiCreateColorAnchors.c)
 *     MiGetClosestNodeWithProcessors @ 0x140353A20 (MiGetClosestNodeWithProcessors.c)
 *     PnpSetDeviceAffinityThread @ 0x140361540 (PnpSetDeviceAffinityThread.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x14036B49C (KeQueryNodeActiveDpcGangAffinity.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403916E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmParkRegisterParking @ 0x1403C10C0 (PpmParkRegisterParking.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C8090 (ExAllocateCacheAwarePushLock.c)
 *     MiComputeIdealDpcGang @ 0x14055FFFC (MiComputeIdealDpcGang.c)
 *     ExProcessorCounterSetCallback @ 0x1406C6A20 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x1406FD92C (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1406FDCF0 (ExpQueryNumaProcessorMap.c)
 *     ExpWorkQueueManagerThread @ 0x1407AFC80 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407C28F4 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407C2EA8 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2F58 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x14093E8DC (EtwpProcessorRundown.c)
 *     KiConfigureSchedulingInformation @ 0x14099F9F0 (KiConfigureSchedulingInformation.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A6E2CC (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     <none>
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v3 = KeNodeBlock[NodeNumber];
    if ( Affinity )
    {
      Affinity->Group = *(_WORD *)(v3 + 144);
      Affinity->Mask = *(_QWORD *)(v3 + 136);
    }
    if ( Count )
    {
      v4 = *(_QWORD *)(v3 + 136) - ((*(_QWORD *)(v3 + 136) >> 1) & 0x5555555555555555LL);
      *Count = (0x101010101010101LL
              * (((v4 & 0x3333333333333333LL)
                + ((v4 >> 2) & 0x3333333333333333LL)
                + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
  }
}
