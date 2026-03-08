/*
 * XREFs of PsGetThreadProperty @ 0x1402C83E0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14024F7D0 (KxWaitForSpinLockAndAcquire.c)
 *     PsGetJobProperty @ 0x1402C8610 (PsGetJobProperty.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KiAcquireSpinLockInstrumented @ 0x140457E30 (KiAcquireSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  void *v4; // rbp
  ULONG_PTR v5; // r8
  PVOID *p_SparePtr; // r14
  volatile signed __int32 *v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  PVOID *v10; // rax
  PVOID *v11; // rsi
  struct _LIST_ENTRY *Blink; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v15; // r9
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v5 = Key;
  if ( (Flags & 0xFFFFFFFE) != 0
    || Thread == KeGetCurrentPrcb()->IdleThread
    || KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(Thread[-1].EndPadding[0]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Thread - 48) >> 8)] != PsThreadType
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
    if ( CurrentIrql == 2 )
      LODWORD(v15) = 4;
    else
      v15 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
    v5 = Key;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v8);
LABEL_33:
    v5 = Key;
    goto LABEL_10;
  }
  if ( _interlockedbittestandset64(v8, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v8);
    goto LABEL_33;
  }
LABEL_10:
  v10 = (PVOID *)*p_SparePtr;
  v11 = 0LL;
  if ( *p_SparePtr != p_SparePtr )
  {
    while ( v10[2] != (PVOID)v5 )
    {
      v10 = (PVOID *)*v10;
      if ( v10 == p_SparePtr )
        goto LABEL_11;
    }
    v11 = v10;
    if ( v10 )
    {
      ObfReferenceObjectWithTag(v10[3], 0x72507350u);
      v5 = Key;
    }
  }
LABEL_11:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v8, retaddr);
    v5 = Key;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v5 = Key;
    }
  }
  __writecr8(CurrentIrql);
  if ( v11 )
    return v11[3];
  if ( (Flags & 1) != 0 )
    return v4;
  Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    Blink = (struct _LIST_ENTRY *)Thread->Process[1].Affinity.StaticBitmap[16];
  if ( !Blink )
    return v4;
  return (PVOID)PsGetJobProperty(Blink, v5);
}
