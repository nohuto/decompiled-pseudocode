/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x14023D6AC
 * Callers:
 *     RtlpHpFreeVA @ 0x140363E50 (RtlpHpFreeVA.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     RtlpHpVaMgrRangeFree @ 0x14023D9B0 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrFree @ 0x14023DADC (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x14023DC8C (RtlpHpVaMgrRangeSplit.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlSparseArrayElementAllocated @ 0x140362978 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpEnvFreeVA @ 0x140366D64 (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x140366DA8 (MmFreePoolMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405F34F0 (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  unsigned __int8 v9; // cl
  ULONG_PTR v10; // rbx
  _BYTE *v11; // rdx
  __int64 result; // rax
  unsigned __int8 v13; // r8
  _BYTE *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _BYTE *v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v24; // zf
  char *p_Process; // rdi
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r8d
  struct _KTHREAD *v29; // rcx
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL,
               ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = RtlpHpEnvFreeVA(a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  v9 = *v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    v11 = v7;
    *v7 = v9 & 0xFE;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  v13 = *(_BYTE *)(v10 + 46);
  if ( (v13 & 0xEu) < 4 )
  {
    MmFreePoolMemory(a2, a3, 0x4000LL);
    v9 = *v8;
    v13 = *(_BYTE *)(v10 + 46);
  }
  v14 = v8;
  if ( (v9 & 2) != 0 )
  {
    v17 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
    v13 = *(_BYTE *)(v10 + 46);
  }
  else
  {
    if ( ((v13 >> 5) & (unsigned __int8)~(v9 >> 2) & 1) == 0 )
    {
      v15 = (v9 & 4) != 0 ? *((_QWORD *)v8 + 3) : *((unsigned __int16 *)v8 + 12);
      if ( v6 != v15 )
        __int2c();
    }
    if ( (v9 & 4) != 0 )
      v16 = *((_QWORD *)v8 + 3);
    else
      v16 = *((unsigned __int16 *)v8 + 12);
    if ( v6 < v16 )
      v17 = &v8[32 * v6];
    else
      v17 = 0LL;
  }
  v18 = (unsigned __int8)RtlpHpAcquireLockExclusive(v10, v13 & 1);
  if ( v17 )
    RtlpHpVaMgrRangeSplit(v10, v8, (v17 - v8) >> 5);
  v19 = RtlpHpVaMgrFree(v10, v14);
  if ( (*(_BYTE *)(v10 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v24 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v24 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    CurrentThread = KeGetCurrentThread();
    if ( v10 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (char *)&CurrentThread[1].Process;
    v26 = v10 & 0x7FFFFFFFFFFFFFFCLL;
    v27 = 0LL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v26
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != SessionId )
    {
      v27 = (unsigned int)(v27 + 1);
      p_Process += 96;
      if ( (unsigned int)v27 >= 6 )
        goto LABEL_44;
    }
    p_Process[18] = 0;
    if ( !p_Process )
    {
LABEL_44:
      result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v10, SessionId, 0LL);
      _enable();
      goto LABEL_50;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v27, v26);
      _disable();
    }
    v28 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    result = (unsigned __int8)p_Process[16];
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    if ( v28 )
      result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v10, v28);
LABEL_50:
    v29 = KeGetCurrentThread();
    v24 = v29->SpecialApcDisable++ == -1;
    if ( v24 )
    {
      result = (__int64)&v29->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery();
    }
  }
  if ( v19 )
  {
    v11 = (_BYTE *)v19;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  return result;
}
