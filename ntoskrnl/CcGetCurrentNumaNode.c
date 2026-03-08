/*
 * XREFs of CcGetCurrentNumaNode @ 0x14020D750
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1405337B8 (CcAdjustWriteBehindThreadPool.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140533834 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetCurrentNumaNode(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(*(_QWORD *)(a2 + 600) + 8 * v3 + 64);
  else
    return *(_QWORD *)(a1 + 8 * v3 + 112);
}
