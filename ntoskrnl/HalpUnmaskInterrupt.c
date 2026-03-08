/*
 * XREFs of HalpUnmaskInterrupt @ 0x140379600
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14028EF5C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140517A94 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpUnmaskInterrupt(unsigned int a1, unsigned int a2)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  ULONG_PTR *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])(0LL, a1) )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(a1, a2, 0LL);
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1820);
    return (unsigned int)-1073741811;
  }
  LODWORD(v18) = LinesForGsiRange[4];
  HIDWORD(v18) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController(v18);
  if ( !v6 )
  {
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1840);
    return (unsigned int)-1073741811;
  }
  v7 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v8 = *((_QWORD *)v5 + 5) + 56LL * (a1 - v5[7]);
  v9 = *(_DWORD *)(v8 + 12);
  if ( (a2 & 2) != 0 )
    v10 = v9 & 0xFFFFFFDF;
  else
    v10 = v9 | 0x10;
  *(_DWORD *)(v8 + 12) = v10;
  v11 = HalpInterruptSetLineStateInternal(v6, &v18);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v11;
}
