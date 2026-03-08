/*
 * XREFs of KiForceIdleStopDpcRoutine @ 0x14057AAA0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057AB44 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x14057AE14 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStopDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  KiForceIdleUpdateSchedulerParkState(0LL, DeferredContext, SystemArgument1, SystemArgument2, v8[0]);
  _disable();
  v8[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v8);
    while ( KiForceIdleLock );
  }
  KiForceIdleWatchdogResetCount = 0;
  KiForceIdleActiveLastStartTime = 0LL;
  KiSetForceIdleState(KiForceIdleStartTime != 0 ? 2 : 0);
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v6 = *SchedulerAssist;
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
