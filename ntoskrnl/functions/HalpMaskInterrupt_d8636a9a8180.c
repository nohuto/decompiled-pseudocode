__int64 __fastcall HalpMaskInterrupt(unsigned int a1, unsigned int a2)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  ULONG_PTR *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])(0LL, a1) )
    {
      LOBYTE(v13) = 1;
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(a1, a2, v13);
    }
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1708);
    return (unsigned int)-1073741811;
  }
  LODWORD(v19) = LinesForGsiRange[4];
  HIDWORD(v19) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController(v19);
  if ( !v6 )
    return (unsigned int)-1073741811;
  v7 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v8 = *((_QWORD *)v5 + 5) + 56LL * (a1 - v5[7]);
  v9 = *(_DWORD *)(v8 + 12);
  if ( (a2 & 1) != 0 )
    v10 = v9 | 0x20;
  else
    v10 = v9 & 0xFFFFFFEF;
  *(_DWORD *)(v8 + 12) = v10;
  v11 = HalpInterruptSetLineStateInternal(v6, &v19);
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v11;
}
