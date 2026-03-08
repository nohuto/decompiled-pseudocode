/*
 * XREFs of MiReferenceControlAreaFileWithTag @ 0x1403440B0
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x1402DA87C (MiMakeSystemCachePteValid.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiCreateSystemSection @ 0x14036BD9C (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x1403C0F1C (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     PspInitializeFullProcessImageName @ 0x140707B78 (PspInitializeFullProcessImageName.c)
 *     PsReferenceProcessFilePointer @ 0x14074C940 (PsReferenceProcessFilePointer.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     MmGetFileObjectForSection @ 0x1407F15D8 (MmGetFileObjectForSection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ObpFastReplenishReference @ 0x1403520A4 (ObpFastReplenishReference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall MiReferenceControlAreaFileWithTag(__int64 a1, ULONG a2)
{
  signed __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf

  _m_prefetchw((const void *)(a1 + 64));
  v4 = *(_QWORD *)(a1 + 64);
  if ( (v4 & 0xF) != 0 )
  {
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v4 - 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
    }
    while ( (v5 & 0xF) != 0 );
  }
  v6 = v4;
  v7 = v4 & 0xF;
  v8 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 <= 1 )
  {
    if ( !v7 )
    {
LABEL_9:
      v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
      v8 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v8 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), a2);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
      return v8;
    }
    ObpFastReplenishReference(a1 + 64, v8);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v8 - 48);
  if ( !v8 )
    goto LABEL_9;
  return v8;
}
