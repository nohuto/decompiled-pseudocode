/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x14056A49C
 * Callers:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x14056A6F4 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14056ABE8 (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     PopFxAddLogEntry @ 0x140260514 (PopFxAddLogEntry.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402623B8 (PopFxDisableWorkOrderWatchdog.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x14056932C (PopFxBugCheck.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x14056AA4C (PopFxEnforceDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1405721A0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140576964 (PopCompleteDirectedPowerTransitionCallback.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned __int64 v8; // rbp
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // r15
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  LONG result; // eax

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v4 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_23;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1160));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1160);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1160), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6 )
    goto LABEL_23;
  PopFxDisableWorkOrderWatchdog((__int64 *)(BugCheckParameter3 + 976));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v9 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v9, v9);
  }
  while ( v10 != v9 );
  if ( ((v9 & 0x1000) != 0) != a2 )
LABEL_23:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  v11 = *(_QWORD *)(BugCheckParameter3 + 1168);
  v12 = *(_DWORD *)(BugCheckParameter3 + 1176);
  *(_QWORD *)(BugCheckParameter3 + 1168) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1176) = 0;
  *(_DWORD *)(BugCheckParameter3 + 1180) &= ~2u;
  KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = -1LL << ((unsigned __int8)v8 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)v13;
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  LOBYTE(v13) = a2;
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), v13);
  if ( byte_140C24ED4 )
    v12 = 0;
  else
    PopFxEnforceDirectedPowerTransition(BugCheckParameter3);
  PopCompleteDirectedPowerTransitionCallback(BugCheckParameter3, v11, v12);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 244));
  if ( !result )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 248), 0, 0);
  return result;
}
