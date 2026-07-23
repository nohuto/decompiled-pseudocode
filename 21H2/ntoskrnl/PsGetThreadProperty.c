/*
 * XREFs of PsGetThreadProperty @ 0x1402104F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetJobProperty @ 0x1402106F0 (PsGetJobProperty.c)
 *     ObpIncrPointerCount @ 0x1402C08C0 (ObpIncrPointerCount.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  void *v3; // rbp
  char v4; // r12
  PVOID *p_SparePtr; // rsi
  volatile signed __int32 *v8; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v11; // rcx
  PVOID *v12; // rax
  PVOID *v13; // r14
  char *v14; // rsi
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _DWORD *SchedulerAssist; // r9
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

  v3 = 0LL;
  v4 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0
    || Thread == KeGetCurrentPrcb()->IdleThread
    || KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(Thread[-1].EndPadding[1]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Thread - 48) >> 8)] != PsThreadType
    || Thread == KeGetCurrentThread() && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    return 0LL;
  }
  p_SparePtr = &Thread[1].WaitBlock[1].SparePtr;
  v8 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[104];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v8);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v11[6];
        v11[6] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v8, 0LL) )
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
      KxWaitForSpinLockAndAcquire(v8);
    }
  }
  v12 = (PVOID *)*p_SparePtr;
  v13 = 0LL;
  if ( *p_SparePtr != p_SparePtr )
  {
    while ( v12[2] != (PVOID)Key )
    {
      v12 = (PVOID *)*v12;
      if ( v12 == p_SparePtr )
        goto LABEL_17;
    }
    v13 = v12;
    if ( v12 )
    {
      v14 = (char *)v12[3];
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v14 - 48);
      ObpIncrPointerCount(v14 - 48);
    }
  }
LABEL_17:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v8, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v23 = v16[6] - 1;
      v16[6] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v15);
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
  if ( v13 )
    return v13[3];
  if ( (v4 & 1) == 0 )
  {
    Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
    if ( Blink == (struct _LIST_ENTRY *)-3LL )
      Blink = (struct _LIST_ENTRY *)Thread->Process[1].Affinity.Bitmap[16];
    if ( Blink )
      return (PVOID)PsGetJobProperty(Blink, Key);
  }
  return v3;
}
