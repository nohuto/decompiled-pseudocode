/*
 * XREFs of ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001B50
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00944F0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C003104C (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 */

void __fastcall VidMmiClosePartition(volatile signed __int32 *P)
{
  unsigned int v2; // edx

  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  if ( _InterlockedExchangeAdd(P + 9, 0xFFFFFFFF) == 1 )
  {
    RtlAvlRemoveNode(&VIDMM_PARTITION::_PartitionTree, P);
    if ( P )
      VIDMM_PARTITION::`scalar deleting destructor'((PVOID)P, v2);
  }
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
}
