/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x1405871FC
 * Callers:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1405876D8 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x140588000 (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140305680 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x140587E70 (PopFxEnforceDirectedPowerTransition.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x14058DF74 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140591030 (PopDiagTraceFxDeviceDirectedCompletion.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned __int64 v8; // r14
  unsigned __int8 v9; // r9
  unsigned __int32 v10; // eax
  unsigned __int32 v11; // ett
  __int64 v12; // r12
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // eax
  char v16; // si
  __int64 v17; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
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
    goto LABEL_25;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1160));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1160);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1160), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6 )
    goto LABEL_25;
  PopFxDisableWorkOrderWatchdog((__int64 *)(BugCheckParameter3 + 976));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1152));
  PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v10 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v9 & (unsigned __int8)(v10 >> 12)) != a2 )
LABEL_25:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  v12 = *(_QWORD *)(BugCheckParameter3 + 1168);
  v13 = *(_DWORD *)(BugCheckParameter3 + 1180);
  v14 = *(_DWORD *)(BugCheckParameter3 + 1176);
  v15 = v13 & 0xFFFFFFFD;
  *(_QWORD *)(BugCheckParameter3 + 1168) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1176) = 0;
  v16 = v9 & (v13 >> 1);
  *(_DWORD *)(BugCheckParameter3 + 1180) = v15;
  KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter3 + 1152));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = -1LL << ((unsigned __int8)v8 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)v17;
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
  LOBYTE(v17) = a2;
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), v17);
  if ( byte_140C3EFB4 )
    goto LABEL_21;
  if ( v16 )
  {
    PopFxEnforceDirectedPowerTransition(BugCheckParameter3);
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 824) & 1) != 0 )
LABEL_21:
    v14 = 0;
LABEL_22:
  PopCompleteDirectedPowerTransitionCallback(BugCheckParameter3, v12, v14);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 244));
  if ( !result )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 248), 0, 0);
  return result;
}
