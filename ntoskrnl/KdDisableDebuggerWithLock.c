/*
 * XREFs of KdDisableDebuggerWithLock @ 0x140565128
 * Callers:
 *     KdDisableDebugger @ 0x140565110 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KdPowerTransitionEx @ 0x1403A7D80 (KdPowerTransitionEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KdpAllowDisable @ 0x140AB26EC (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x140AB2D04 (KdpSuspendAllBreakpoints.c)
 */

__int64 KdDisableDebuggerWithLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  int v4; // edi
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax

  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = 4;
    if ( CurrentIrql != 2 )
      v3 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v3;
  }
  KxAcquireSpinLock(&KdDebuggerLock);
  if ( KdDisableCount )
    goto LABEL_23;
  KdPreviouslyEnabled = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled || (v4 = KdpAllowDisable(), v4 >= 0) )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      KdpDebugRoutineSelect = 0;
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      LOBYTE(KdDebuggerEnabled) = 0;
      KdPowerTransitionEx(1073741828, 0);
    }
LABEL_23:
    ++KdDisableCount;
    KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v4 = 0;
    goto LABEL_31;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
  if ( KiIrqlFlags )
  {
    v5 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
    {
      v6 = KeGetCurrentPrcb();
      v7 = v6->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v9 = (v8 & v7[5]) == 0;
      v7[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(v6);
    }
  }
LABEL_31:
  __writecr8(CurrentIrql);
  return (unsigned int)v4;
}
