/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1402E5000
 * Callers:
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140535060 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x140AC4C84 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140AC6520 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x140AC6D90 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140AC6E2C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1402E50A8 (ExpAcquireSpinLockDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  struct _LIST_ENTRY *Flink; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
