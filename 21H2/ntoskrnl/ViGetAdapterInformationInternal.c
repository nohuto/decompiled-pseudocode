/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140A88430
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140A84180 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140A843D0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140A84630 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140A846E0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140A84860 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140A84950 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140A849F0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140A84BC0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140A84F20 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140A85150 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140A852B0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140A853A0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140A85550 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140A85600 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140A856B0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140A85840 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140A859A0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140A85DA0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140A86160 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140A862F0 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140A86510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140A866D0 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x140A86C30 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x140A88738 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x140A88B74 (ViHookDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140A83D24 (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(ULONG_PTR a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax

  if ( !a1 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( ViVerifyDma )
      VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  if ( !ViVerifyDma && ViEnableAfterHibernate == 1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140D575A0);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock(&qword_140D575A0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      break;
    Flink = Flink->Flink;
  }
  KxReleaseSpinLock(&qword_140D575A0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
  }
  __writecr8(v6);
  if ( a2 && SHIDWORD(Flink[2].Flink) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_140C0D988,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C0D988);
  }
  return Flink;
}
