/*
 * XREFs of HalpInterruptApplyOverrides @ 0x140379748
 * Callers:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B13E0 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x1405021F0 (HalpInterruptConnect.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405023EC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x140503318 (HalpInterruptRestoreClock.c)
 *     ExtEnvSetVpptTarget @ 0x1405066D8 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1405074D0 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptMaskAcpi @ 0x140A92308 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14028EF5C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInterruptApplyOverrides(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // bp
  unsigned __int8 v7; // al
  __int64 *v8; // r9
  unsigned __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 result; // rax
  int v12; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  unsigned int v16; // edi

  v6 = 0;
  v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v8 = (__int64 *)HalpInterruptOverrides;
  v9 = v7;
  if ( (__int64 *)HalpInterruptOverrides != &HalpInterruptOverrides )
  {
    while ( 1 )
    {
      v10 = v8;
      v8 = (__int64 *)*v8;
      if ( *((_DWORD *)v10 + 4) == *a1 && *((_DWORD *)v10 + 5) == a1[1] )
        break;
      if ( v8 == &HalpInterruptOverrides )
        goto LABEL_4;
    }
    *(_QWORD *)a1 = v10[3];
    if ( a2 )
      *a2 = *((_DWORD *)v10 + 9);
    if ( a3 )
      *a3 = *((_DWORD *)v10 + 8);
    v6 = 1;
  }
LABEL_4:
  result = KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptOverridesLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v9 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( !v6 )
  {
    result = HalpInterruptController;
    if ( *(_DWORD *)(HalpInterruptController + 240) == 2 )
    {
      v12 = *a1;
      if ( *a1 == 45056 || v12 == 45057 )
      {
        v16 = a1[1] + 8;
        if ( v12 != 45057 )
          v16 = a1[1];
        result = (__int64)HalpInterruptFindLinesForGsiRange(v16, v16 + 1);
        if ( result )
        {
          a1[1] = v16 + *(_DWORD *)(result + 20) - *(_DWORD *)(result + 28);
          result = *(unsigned int *)(result + 16);
          *a1 = result;
        }
      }
    }
  }
  return result;
}
