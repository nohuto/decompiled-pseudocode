/*
 * XREFs of ExInterlockedPopEntryList @ 0x14060A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1402E50A8 (ExpAcquireSpinLockDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  bool v4; // al
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ett

  v4 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = Next->Next;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v8 = *SchedulerAssist;
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(SchedulerAssist, v8 & 0xFFDFFFFF, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return Next;
}
