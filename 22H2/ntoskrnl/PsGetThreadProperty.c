/*
 * XREFs of PsGetThreadProperty @ 0x1402EFE20
 * Callers:
 *     <none>
 * Callees:
 *     ObpIncrPointerCount @ 0x14021BF80 (ObpIncrPointerCount.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     PsGetJobProperty @ 0x1402F0020 (PsGetJobProperty.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405168D8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  _DWORD *SchedulerAssist; // r9
  void *v4; // rbp
  char v5; // r12
  ULONG_PTR v6; // r13
  PVOID *p_SparePtr; // rsi
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v12; // rcx
  PVOID *v13; // rax
  PVOID *v14; // r14
  volatile signed __int64 *v15; // rsi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v5 = Flags;
  v6 = Key;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return 0LL;
  if ( Thread == KeGetCurrentPrcb()->IdleThread )
    return 0LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    Key = (unsigned __int8)ObHeaderCookie ^ LOBYTE(Thread[-1].EndPadding[1]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Thread - 48) >> 8);
    if ( (POBJECT_TYPE *)ObTypeIndexTable[Key] != PsThreadType )
      return 0LL;
  }
  if ( Thread == KeGetCurrentThread() && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 0LL;
  p_SparePtr = &Thread[1].WaitBlock[1].SparePtr;
  v9 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[104];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    Key = (-1LL << (CurrentIrql + 1)) & 4;
    *(_QWORD *)&Flags = (unsigned int)Key | SchedulerAssist[5];
    SchedulerAssist[5] = Flags;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v9);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v12[6];
        v12[6] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v9, 0LL) )
    {
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v21[6] - 1;
          v21[6] = v22;
          if ( !v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v9, Key, *(__int64 *)&Flags, (__int64)SchedulerAssist);
    }
  }
  v13 = (PVOID *)*p_SparePtr;
  v14 = 0LL;
  if ( *p_SparePtr != p_SparePtr )
  {
    while ( v13[2] != (PVOID)v6 )
    {
      v13 = (PVOID *)*v13;
      if ( v13 == p_SparePtr )
        goto LABEL_17;
    }
    v14 = v13;
    if ( v13 )
    {
      v15 = (volatile signed __int64 *)v13[3];
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v15 - 48);
      ObpIncrPointerCount(v15 - 6);
    }
  }
LABEL_17:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v9, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v23 = v17[6] - 1;
      v17[6] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v14 )
    return v14[3];
  if ( (v5 & 1) == 0 )
  {
    Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
    if ( Blink == (struct _LIST_ENTRY *)-3LL )
      Blink = (struct _LIST_ENTRY *)Thread->Process[1].Affinity.Bitmap[16];
    if ( Blink )
      return (PVOID)PsGetJobProperty(Blink, v6);
  }
  return v4;
}
