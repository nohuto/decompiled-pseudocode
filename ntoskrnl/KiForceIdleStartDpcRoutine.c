/*
 * XREFs of KiForceIdleStartDpcRoutine @ 0x14057A9E0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057AB44 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x14057AE14 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStartDpcRoutine(
        unsigned __int64 Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // bl
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int32 *SchedulerAssist; // rdx
  unsigned __int32 v7; // eax
  unsigned __int32 v8; // ett
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  _disable();
  v9[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v9);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KiSetForceIdleState(4LL);
    KiForceIdleActiveLastStartTime = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    v4 = 1;
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v7 = *SchedulerAssist;
    do
    {
      Dpc = v7;
      LODWORD(Dpc) = v7 & 0xFFDFFFFF;
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v7 & 0xFFDFFFFF, v7);
    }
    while ( v8 != v7 );
    if ( (v7 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( !v4 )
  {
    LOBYTE(Dpc) = 1;
    KiForceIdleUpdateSchedulerParkState(Dpc, SchedulerAssist, CurrentPrcb, SystemArgument2, v9[0]);
  }
}
