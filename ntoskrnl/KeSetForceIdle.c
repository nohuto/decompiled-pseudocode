/*
 * XREFs of KeSetForceIdle @ 0x14057A814
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14057AE14 (KiSetForceIdleState.c)
 */

void KeSetForceIdle()
{
  int v0; // edi
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v7; // [rsp+38h] [rbp+10h] BYREF

  v7.QuadPart = 0LL;
  _disable();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v0 = KiForceIdleState;
    v1 = RtlGetInterruptTimePrecise(&v7) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v0 )
    {
      KiSetForceIdleState(2LL);
LABEL_10:
      KiForceIdleStartTime = v1;
      goto LABEL_11;
    }
    if ( v0 == 3 )
      goto LABEL_10;
  }
LABEL_11:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v4 = *SchedulerAssist;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
