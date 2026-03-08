/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140AC5E44
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC1B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC1DE0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC2050 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC2110 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC2280 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC2380 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC2460 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC2650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC29B0 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140AC2BE0 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC2D40 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC2DD0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC2F80 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC3030 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC30E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC3280 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140AC3400 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140AC3740 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140AC3800 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC3BD0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC3D60 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140AC3F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC40B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC4280 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC45C0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC4810 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140AC5E2C (ViGetAdapterInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC172C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140AC6010 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
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
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax

  if ( !a1 || !ViVerifyDma || (unsigned int)ViGetAdapterSignature() != 1634550870 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C36590);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36590);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
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
      __writecr8(v6);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == &Flink[1] )
      break;
    Flink = Flink->Flink;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36590);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
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
  __writecr8(v6);
  if ( a2 && SHIDWORD(Flink[4].Blink) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_140C0DD4C,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C0DD4C);
  }
  return Flink;
}
