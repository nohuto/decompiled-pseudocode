/*
 * XREFs of HalpInterruptRequestInterrupt @ 0x1405031A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14028EF5C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140517DEC (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInterruptRequestInterrupt(unsigned int a1)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  ULONG_PTR *v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v3 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])(0LL, a1) )
      return (unsigned int)HalpInterruptRequestSecondaryInterrupt(a1);
    HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 3960);
    return (unsigned int)-1073741811;
  }
  LODWORD(v14) = LinesForGsiRange[4];
  HIDWORD(v14) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v5 = HalpInterruptLookupController(v14);
  if ( !v5 )
  {
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 3976);
    return (unsigned int)-1073741811;
  }
  v6 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v7 = *((_QWORD *)v3 + 5) + 56LL * (a1 - v3[7]);
  if ( (*(_DWORD *)(v7 + 12) & 0x10) != 0 )
    v4 = ((__int64 (__fastcall *)(ULONG_PTR, __int64 *, __int64, _QWORD, __int64))v5[15])(
           v5[2],
           &v14,
           v7 + 24,
           *(unsigned int *)(v7 + 48),
           v7 + 16);
  else
    v4 = -1073741811;
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v4;
}
