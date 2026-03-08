/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x1402C3C20
 * Callers:
 *     PopFxProcessWorkPool @ 0x140351514 (PopFxProcessWorkPool.c)
 *     KiAltReturnWorkerRoutine @ 0x14057DEA0 (KiAltReturnWorkerRoutine.c)
 *     WheapWorkQueueWorkerRoutine @ 0x140611660 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x1408526D0 (WmipEventNotification.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  struct _LIST_ENTRY *Flink; // r14
  volatile signed __int32 *SchedulerAssist; // rcx
  struct _LIST_ENTRY *v6; // rax
  struct _KPRCB *v7; // rcx
  signed __int32 *v8; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int16 v16; // [rsp+30h] [rbp-8h]
  int v17; // [rsp+40h] [rbp+8h] BYREF

  Flink = 0LL;
  v17 = 0;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v16 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        _m_prefetchw(v13);
        v14 = *v13;
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange(v13, v14 & 0xFFDFFFFF, v14);
        }
        while ( v15 != v14 );
        if ( (v14 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
    do
      KeYieldProcessorEx(&v17);
    while ( *Lock );
    _disable();
  }
  if ( ListHead->Flink != ListHead )
  {
    Flink = ListHead->Flink;
    v6 = ListHead->Flink->Flink;
    if ( ListHead->Flink->Blink != ListHead || v6->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v6;
    v6->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v16 & 0x200) != 0 )
  {
    v7 = KeGetCurrentPrcb();
    v8 = (signed __int32 *)v7->SchedulerAssist;
    if ( v8 )
    {
      _m_prefetchw(v8);
      v10 = *v8;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(v8, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v7);
    }
    _enable();
  }
  return Flink;
}
