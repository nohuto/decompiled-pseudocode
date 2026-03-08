/*
 * XREFs of PopFxHandleReportDevicePoweredOn @ 0x1402B90C0
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x1402B90A0 (PoFxReportDevicePoweredOn.c)
 *     DifPoFxReportDevicePoweredOnWrapper @ 0x1405E7660 (DifPoFxReportDevicePoweredOnWrapper.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     PopFxQueueWorkItem @ 0x1402B8D54 (PopFxQueueWorkItem.c)
 *     PopFxGetDeviceDStateReason @ 0x1402B9BF4 (PopFxGetDeviceDStateReason.c)
 *     PopPepDeviceDState @ 0x1402B9C4C (PopPepDeviceDState.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1402B9DB4 (PopDiagTraceFxDevicePowerState.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140304EE0 (PopFxCompleteDevicePowerRequired.c)
 *     PoFxIdleComponent @ 0x140306A10 (PoFxIdleComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1405876D8 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopSystemIrpCompletion @ 0x140AA4450 (PopSystemIrpCompletion.c)
 */

void __fastcall PopFxHandleReportDevicePoweredOn(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rbp
  signed __int32 *v3; // rbx
  unsigned int DeviceDStateReason; // eax
  __int64 v5; // r8
  volatile LONG *v6; // r13
  unsigned __int64 v7; // r12
  int v8; // esi
  __int64 v9; // r14
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int v14; // edx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned int v18; // eax
  __int64 v19; // r15
  unsigned int i; // ebp
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf

  v1 = *(_QWORD *)(BugCheckParameter3 + 48);
  v3 = (signed __int32 *)(BugCheckParameter3 + 32);
  if ( !KeGetCurrentIrql() )
    goto LABEL_2;
  _m_prefetchw(v3);
  v12 = *v3;
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange(v3, v12, v12);
  }
  while ( v13 != v12 );
  if ( (v12 & 2) != 0 )
  {
    PopFxQueueWorkItem((__int64)&PopFxSystemWorkPool, (struct _LIST_ENTRY *)(BugCheckParameter3 + 1208));
  }
  else
  {
LABEL_2:
    _m_prefetchw(v3);
    if ( (_InterlockedAnd(v3, 0xFFFFFFFD) & 2) != 0 )
    {
      DeviceDStateReason = PopFxGetDeviceDStateReason(BugCheckParameter3);
      LOBYTE(v5) = 1;
      PopPepDeviceDState(*(_QWORD *)(BugCheckParameter3 + 56), 1LL, v5, DeviceDStateReason);
      PopDiagTraceFxDevicePowerState(v1, 1LL);
    }
    v6 = (volatile LONG *)(v1 + 88);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v8 = _InterlockedExchange((volatile __int32 *)(v1 + 124), 0);
    v9 = 0LL;
    if ( v8 > 0 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 48) + 120LL);
      if ( v8 > v14 )
        PopFxBugCheck(0x602uLL, v1, v8, 0LL);
      _InterlockedAnd(v3, 0xFFFFF7FE);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 48) + 120LL) = v14 - v8;
      v15 = *(_QWORD *)(BugCheckParameter3 + 48);
      _m_prefetchw((const void *)(v15 + 296));
      v16 = *(_DWORD *)(v15 + 296);
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 296), v16, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 4) != 0 )
      {
        v18 = *(_DWORD *)(BugCheckParameter3 + 828);
        v19 = (unsigned int)v8;
        do
        {
          for ( i = 0; i < v18; ++i )
          {
            PoFxIdleComponent(BugCheckParameter3, i, 2LL);
            v18 = *(_DWORD *)(BugCheckParameter3 + 828);
          }
          --v19;
        }
        while ( v19 );
      }
      _m_prefetchw(v3);
      v21 = *v3;
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange(v3, v21 & 0xFFFFFBFF, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x400) != 0 )
        v9 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 48) + 280LL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( v9 )
      PopSystemIrpCompletion(0LL, v9, *(_QWORD *)(v9 + 72LL * *(char *)(v9 + 66) + 200));
    if ( !v8 )
    {
      _m_prefetchw(v3);
      v10 = *v3;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(v3, v10, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x2000) != 0 )
        PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter3);
      else
        PopFxCompleteDevicePowerRequired(BugCheckParameter3);
    }
  }
}
